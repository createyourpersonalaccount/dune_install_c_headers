#include <stdbool.h>
#include <caml/mlvalues.h>
#include <caml/callback.h>

int myfunc(bool b) {
  static const value* closure = NULL;
  if (closure == NULL)
    closure = caml_named_value("myfunc");
  value result = caml_callback_exn(*closure, Val_bool(b));
  return Int_val(result);
}

void initialize_mylib (char** argv) {
  caml_startup(argv);
}
