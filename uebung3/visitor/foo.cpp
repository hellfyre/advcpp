#include "foo.h"
#include "typeinfo"

void bar::visit(dispatcher &V) {
  V.dispatch(*this);
}
std::string bar::meth_one() {
  return "bar";
}
std::string bar::type() {
  return typeid(this).name();
}

void baz::visit(dispatcher &V) {
  V.dispatch(*this);
}
std::string baz::meth_two() {
  return "baz";
}
std::string baz::type() {
  return typeid(this).name();
}
