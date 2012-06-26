#ifndef __DISPATCHER_H__
#define __DISPATCHER_H__

#include "foo.h"

class bar;
class baz;

class dispatcher {
  public:
    dispatcher();
    virtual void dispatch(bar &) = 0;
    virtual void dispatch(baz &) = 0;
};

class showMe: public dispatcher {
  public:
    void dispatch(bar &ref);
    void dispatch(baz &ref);
};

#endif /* __DISPATCHER_H__ */
