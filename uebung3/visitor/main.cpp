#include "dispatcher.h"
#include "foo.h"

int main() {
  bar one;
  baz two;
  
  foo &three = one;

  showMe printDispatchInfo;
  typePrinter printType;

  one.visit(printDispatchInfo);
  one.visit(printType);

  two.visit(printDispatchInfo);
  two.visit(printType);
  three.visit(printType);
}
