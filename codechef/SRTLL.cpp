/*
  ======================================
    You recently learned the concept of
    sorting and want to practice problems
    to enhance your skills. Chef gave you
     a task of sorting a linked list to try
     your skills. Can you sort the given
     linked list?

     struct Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x), next(nullptr) {}
      Node(int x, Node *n) : val(x), next(n) {}
    };
  ======================================
*/

class Solution{
  public:
    Node* rearrange(Node* head) {
      std::vector<int> list;
      Node* current = head; while (current) { list.push_back(current->val); current = current->next; } current = head;
      std::sort(std::begin(list), std::end(list));
      for (auto i = std::begin(list); i != std::end(list); i += 1) { current->val = *i; current = current->next; }
      return head;
    }
};
