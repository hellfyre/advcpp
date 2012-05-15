template <class T>
class dl_list {
  T *data;
  
  public:
  dl_list<T> *prev, next;

  dl_list(T *data) {
    prev = next = this;
    this.data = data;
  }

  insert(dl_list<T> *elem) {
    elem->prev = prev;
    elem->next = this;
    prev->next = elem;
    prev = elem;
  }

  erase(dl_list<T> *elem) {
    prev = elem->prev;
    elem->prev->next = this;
  }
};
