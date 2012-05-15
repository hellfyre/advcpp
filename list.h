template <class T>
class dl_list {
  T *data;
  
  public:
  dl_list<T> *prev, next;

  dl_list(T *data) {
    prev = next = this;
    this->data = data;
  }

  ~dl_list() {
    delete(data);
  }

  insert(T *data) {
    dl_list elem = dl_list(data);
    elem.prev = prev;
    elem.next = this;
    prev->next = &elem;
    prev = &elem;
  }

  erase() {
    this->next->prev = this->prev;
    this->prev->next = this->next;
  }
};
