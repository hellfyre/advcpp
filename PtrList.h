class PtrList {
  public:
  PtrList *prev, next;

  PtrList() {
    prev = next = this;
  }

  insert() {
    PtrList elem = new PtrList();
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
