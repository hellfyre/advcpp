template <class T>
class pointer{
	T* _ptr;
	int* _refC;
public:
	explicit pointer(T* p = 0) : _ptr(p) {_refC = new(int); (*_refC)=1;}
	~pointer() {(*_refC)--;if((*_refC) == 0) {delete _ptr;delete _refC;}}
	T& operator*() { return *_ptr;}
	T* operator->() {return _ptr;}
	//T
};
