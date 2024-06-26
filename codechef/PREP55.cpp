/*
  ======================================
    You're given head of the non-empty
    sorted linked list where the value
    of the i-th node will be Ai.

    struct Node {
      int data;
      struct Node *next;

      Node (int x) {
        data = x;
        next = NULL;
      }
    };
  ======================================
*/

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
      /*
        ======================================
          Your task is to delete all duplicates
          such that each element appears only
          once and return the linked list sorted.
        ======================================
      */
      std::set<int> seen;
      Node* current  = head;
      Node* previous = NULL;

      while (current != NULL) {
        if (seen.find(current->data) != std::end(seen)) {
          previous->next = current->next;
          delete(current);
        } else {
          seen.insert(current->data);
          previous = current;
        }
        current = previous->next;
      }
      return head;
    }
};
