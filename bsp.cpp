#include <iostream>
#include "pointer.h"

class MyClass {
	public:
	void doSomething(void) {std::cout << "hello world"<< std::endl;}
};


int main()
{
	pointer<MyClass> p(new MyClass);
	p->doSomething();
}
