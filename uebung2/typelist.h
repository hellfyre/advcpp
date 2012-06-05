struct nil;

template <typename V, class C = nil>
struct typelist {
  typedef V head;
  typedef C tail;
};

template <typename V, int i>
struct at {
  typedef typename at<typename V::tail, i-1>::value value;
};

template <typename V>
struct at<V, 0> {
  typedef typename V::head value;
};
