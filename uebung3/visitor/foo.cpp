#include "foo.h"

void bar::visit(dispatcher &V) {
  V.dispatch(*this);
}
std::string bar::meth_one() {
  return "bar";
}

void baz::visit(dispatcher &V) {
  V.dispatch(*this);
}
std::string baz::meth_two() {
  return "baz";
}
