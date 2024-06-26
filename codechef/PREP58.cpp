/*
  ======================================
    You're given a linked list A of size
    N. Return the node where the cycle
    begins in the linked list. If there
    is no cycle, return NULL.
  ======================================
*/
class Solution {
  public:
    Node* detectCycle(Node* head) {
      Node* current = head;
      std::unordered_set<Node*> seen;

      while (seen.find(current) == std::end(seen)) {
        seen.insert(current);
        current = current->next;
      }

      return current;
    }
};
