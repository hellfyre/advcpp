class PtrList {
  public:
  mutable const PtrList *prev, *next;

  PtrList() {
    prev = next = this;
  }

  void insert() {
    PtrList* elem = new PtrList();
    elem->prev = prev;
    elem->next = this;
    prev->next = elem;
    prev = elem;
  }

  void erase() {
    this->next->prev = this->prev;
    this->prev->next = this->next;
  }

  void cat(const PtrList & elem) {
    elem.next->prev = this;
    elem.next = this;
    this->prev->next = &elem;
    this->prev =       &elem;
  }
};
