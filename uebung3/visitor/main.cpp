#include "dispatcher.h"
#include "foo.h"

int main() {
  bar one;
  baz two;

  showMe print;
  one.visit(print);
  two.visit(print);
}
