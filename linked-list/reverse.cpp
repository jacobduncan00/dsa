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

    void reverseIterative() {
      // Check to see if list is empty
      if (head == nullptr) return;
      Node* prev = nullptr;
      Node* curr = head;
      Node* next = nullptr;

      // Iterate over list
      while(curr != nullptr) {
        // Reverse pointers
        next = curr->next;
        curr->next = prev;
        // Reverse
        prev = curr;
        curr = next;
      }
      // New head is last node
      head = prev;
    }

    Node* reverseRecursive(Node* head) {
      // Base case
      if (head == nullptr || head->next == nullptr) return head;

      // Recurse down 
      Node* restOfList = reverseRecursive(head->next);

      // Reverse
      head->next->next = head;
      head->next = nullptr;

      return restOfList;
    }

};

int main() {
  LinkedList list;
  list.generate();
  list.print();
  std::cout << "REVERSED ITERATIVE" << std::endl;
  list.reverseIterative();
  list.print();
  std::cout << "REVERSED BACK RECURSIVELY" << std::endl;
  list.head = list.reverseRecursive(list.head);
  list.print();
  return 0;
}
