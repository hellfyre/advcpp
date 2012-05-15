#include <iostream>
#include "pointer.h"

class MyClass {
	public:
	void doSomething(void) {std::cout << "test success"<< std::endl;}
};


int main()
{
	pointer<MyClass> p(new MyClass);

	std::cout << "test first object:" << std::endl;
	p->doSomething();
	pointer<MyClass> v;

	std::cout << "test copy:" << std::endl;
	v=p;
	v->doSomething();

	//std::cout << "test change reference" << std::endl;
	
}
