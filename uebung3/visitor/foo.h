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
    std::string type();
};

class baz: public foo {
  public:
    void visit(dispatcher &V);
    std::string meth_two();
    std::string type();
};

#endif /* __FOO_H__ */
