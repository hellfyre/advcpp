#include "PtrList.h"

template <class T>
class pointer : PtrList{
	T* _ptr;
	int* _refC;
public:
	explicit pointer(T* p = 0) : _ptr(p) {
		_refC = new(int); 
		(*_refC)=1;

	}
	void init() {(*_refC)++;}
	pointer( const pointer & other ) {
		init();
		cat();
//		insert();
//		copy( other );
	}
        pointer& operator=( const pointer& other) { 
		(*_refC)++;
		cat(other);
		return *this;
	}

	~pointer() {(*_refC)--;if((*_refC) <= 1) {delete _ptr;delete _refC;}}
	T& operator*() { return *_ptr;}
	T* operator->() {return _ptr;}
	//T
};
