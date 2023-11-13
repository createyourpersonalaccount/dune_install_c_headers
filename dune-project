(lang dune 3.11)

(name dune_install_c_headers)

(generate_opam_files true)

(package
 (name foo-ocaml)
 (synopsis "Foo OCAml package.")
 (depends ocaml dune))

(package
 (name foo)
 (synopsis "Foo C package containing C library.")
 (depends ocaml dune foo-ocaml))
