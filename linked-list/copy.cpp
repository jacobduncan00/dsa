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
      add(1);
      add(2);
      add(3);
      add(4);
    }

    void print() {
      Node* curr = head;
      while(curr != nullptr) {
        std::cout << curr -> val << std::endl;
        curr = curr -> next;
      }
    }

    Node* copyList(Node* head) {
      Node* curr = head;
      Node* newListHead = nullptr;
      Node* tail = nullptr;

      // Iterate over original list
      while(curr) {
        // If head of new list not set
        if (newListHead == nullptr) {
          // create new node and fill corresponding to original list curr node
          newListHead = new Node();
          newListHead -> val = curr -> val;
          newListHead -> next = nullptr;
          tail = newListHead;
        } else {
          // create new node and fill corresponding to original list curr node
          tail -> next = new Node();
          tail = tail -> next;
          tail -> val = curr -> val;
          tail -> next = nullptr;
        }
        // Walk nodes
        curr = curr -> next;
      }

      // Return head of new list
      return newListHead;
    }

};

int main() {
  LinkedList list;
  LinkedList list2;
  std::cout << "LIST 1" << std::endl;
  list.generate();
  list.print();
  std::cout << "COPYING LIST 1 TO LIST 2" << std::endl;
  list2.head = list.copyList(list.head);
  list2.print();
  return 0;
}
