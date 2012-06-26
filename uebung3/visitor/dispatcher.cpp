#include "dispatcher.h"

#include <iostream>
#include <typeinfo>

dispatcher::dispatcher() {}

void showMe::dispatch(bar &ref) {
  std::cout << "dispatching " << ref.meth_one() << std::endl;
  std::cout << typeid(ref).name() << std::endl;
}

void showMe::dispatch(baz &ref) {
  std::cout << "dispatching " << ref.meth_two() << std::endl;
}
