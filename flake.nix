{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-24.11";

    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    { nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs { inherit system; };
      in
      {
        devShells.default =
          with pkgs;
          let
            darwinInclude = lib.optionalString stdenv.isDarwin ''- "-I${darwin.Libsystem}/include/"'';
            tree-sitter-custom = (tree-sitter.override { webUISupport = true; }).overrideAttrs (oldAttrs: {
              # Patch is broken on nixpkgs for at the very least macOS
              patches = [
                (pkgs.substitute {
                  src = ./emcc-name.patch;
                  substitutions = [
                    "--subst-var-by"
                    "emcc"
                    "${pkgs.emscripten}/bin/emcc"
                  ];
                })
              ];
            });
          in
          mkShell {
            packages = [
              tree-sitter-custom
              nodejs-slim_22
              graphviz
            ];
            shellHook = ''
              cat <<EOF > .clangd
              CompileFlags:
                Add:
                - "-I${clang}/resource-root/include/"
                ${darwinInclude}
              EOF
            '';
          };
      }
    );
}
