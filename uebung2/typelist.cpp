#include <typelist>

struct nil;

template <typename V, class C = nil>
struct typelist {
  typedef V head;
  typedef C tail;
}

template <typename V, int i>
struct at {
  typedef at<T::tail, i-1>::value value;
}

template <typename V, 0>
struct at {
  typedef T::tail::value value;
}
