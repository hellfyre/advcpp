#include <iostream>
#include <typeinfo>

#include "typelist.h"

int main() {
  typedef typelist< double, typelist<int, nil> > foobar;
  std::cout << typeid(at<foobar, 0>::value).name() << std::endl;
}
