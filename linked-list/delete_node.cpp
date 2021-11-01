#include <iostream>

class LinkedList {

  private:
    struct Node {
      int val;
      Node* next;
    };

    int getLength() {
      Node* curr = head;
      int len = 0;
      while(curr) {
        len++;
        curr = curr -> next;
      }
      return len;
    }

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
      add(5);
      add(4);
    }

    void print() {
      Node* curr = head;
      while(curr != nullptr) {
        std::cout << curr -> val << std::endl;
        curr = curr -> next;
      }
    }

    void deleteAtIndex(int ind) {
      int len = getLength();
      if (!(ind >= 0 && ind <= len)) return; 

      int count = 0;
      Node* curr = head;
      Node* prev = head;
      while(curr) {
        if (count == ind) {
          prev -> next = curr -> next;
          delete(curr);
          // No need to keep going as we have already got our index
          return;
        }
        prev = curr;
        curr = curr -> next;
        count++;
      }
    }

    void deleteFirstNodeWithValue(int val) {
      Node* curr = head;
      Node* prev = head;
      while(curr) {
        if (curr -> val == val) {
          prev -> next = curr -> next;
          delete(curr);
          return;
        }
        prev = curr;
        curr = curr -> next;
      }
    }

    void deleteAllNodesWithValue(int val) {
      Node* curr = head;
      Node* prev = head;
      while(curr) {
        if (curr -> val == val) {
          prev -> next = curr -> next;
          delete(curr);
        }
        prev = curr;
        curr = curr -> next;
      }
    }

};

int main() {
  LinkedList list;
  LinkedList list2;
  std::cout << "LIST 1" << std::endl;
  list.generate();
  list.print();
  std::cout << "DELETING INDEX 2" << std::endl;
  list.deleteAtIndex(2);
  list.print();
  std::cout << "DELETING FIRST NODE WITH VALUE 2" << std::endl;
  list.deleteFirstNodeWithValue(2);
  list.print();
  std::cout << "DELETING ALL NODES WITH VALUE 4" << std::endl;
  list.deleteAllNodesWithValue(4);
  list.print();
  return 0;
}
