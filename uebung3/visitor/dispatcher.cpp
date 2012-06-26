#include "dispatcher.h"

#include <iostream>

dispatcher::dispatcher() {}

void showMe::dispatch(bar &ref) {
  std::cout << "dispatching " << ref.meth_one() << std::endl;
}

void showMe::dispatch(baz &ref) {
  std::cout << "dispatching " << ref.meth_two() << std::endl;
}

void typePrinter::dispatch(bar &ref) {
  std::cout << "Type " << ref.type() << std::endl;
}

void typePrinter::dispatch(baz &ref) {
  std::cout << "Type " << ref.type() << std::endl;
}
