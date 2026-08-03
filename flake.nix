{
  inputs = {
    tree-sitter.url = "github:tree-sitter/tree-sitter?ref=v0.26.11";

    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    { flake-utils, tree-sitter, ... }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        tree-sitter-cli = tree-sitter.packages.${system}.cli;
        pkgs = import tree-sitter.inputs.nixpkgs { inherit system; };
      in
      {
        devShells.default =
          with pkgs;
          let
            darwinInclude = lib.optionalString stdenv.isDarwin ''- "-I${apple-sdk}/usr/include/"'';
          in
          mkShell {
            packages = [
              tree-sitter-cli
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
