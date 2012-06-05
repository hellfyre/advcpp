#include <typelist>

template <typename V, class C = nil>
struct typelist {
  typedef V head;
  typedef C tail;
}

template <typename V, int i>
struct at {:
  typedef 
}
