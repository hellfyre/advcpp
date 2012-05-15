template <class T>
class pointer{
	T* ptr;
public:
	explicit pointer(T* p = 0) : ptr(p) {}
	~pointer() {delete ptr;}
	T& operator*() { return *ptr;}
	T* operator->() {return ptr;}
};
