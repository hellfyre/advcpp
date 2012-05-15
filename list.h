class dl_list {
  public:
  dl_list *prev, next;

  dl_list() {
    prev = next = this;
  }

  insert() {
    dl_list elem = new dl_list();
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
