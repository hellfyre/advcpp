#ifndef __FOO_H__
#define __FOO_H__

#include <string>

#include "dispatcher.h"

class dispatcher;

class foo {
  public:
    virtual void visit(dispatcher&) = 0;
};

class bar: public foo {
  public:
    void visit(dispatcher &V);
    std::string meth_one();
};

class baz: public foo {
  public:
    void visit(dispatcher &V);
    std::string meth_two();
};

#endif /* __FOO_H__ */
