#include <iostream>

class LinkedList {

  private:
    struct Node {
      int val;
      Node* next;
    };

    void add(int val) {
      Node* newNode = new Node();
      newNode -> val = val;
      newNode -> next = nullptr;
      if (head == nullptr) {
        head = newNode;
        return;
      }
      Node* curr = head;
      while(curr -> next != nullptr) {
        curr = curr -> next;
      }
      curr -> next = newNode;
    }

  public:

    Node* head;

    void generate() {
      add(9);
      add(2);
      add(3);
      add(9);
      add(6);
      add(2);
      add(1);
      add(4);
    }

    void print() {
      Node* curr = head;
      while(curr != nullptr) {
        std::cout << curr -> val << std::endl;
        curr = curr -> next;
      }
    }

    void sortList() {
      Node* curr = head;

    }

};

int main() {
  LinkedList list;
  LinkedList list2;
  std::cout << "LIST 1" << std::endl;
  list.generate();
  list.print();
  std::cout << "SORTED" << std::endl;
  list.sortList();
  return 0;
}
