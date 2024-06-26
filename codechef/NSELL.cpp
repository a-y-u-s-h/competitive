/*
  ======================================
    Chef gave you the head of a linked
    list and challenged you to find the
    next smaller value for every node in
    the linked list. Can you solve the
    challenge? Node: If for some value,
    there is no next smaller value, then
    assume the next smaller value for
    this number to be -1.

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
    Node* nextSmallerValue(Node* head) {

      if (!head) return nullptr;

      std::vector<int> list;
      Node* current = head; while (current) { list.push_back(current->val); current = current->next; } current = head;

      std::vector<int> result (list.size(), -1);
      std::stack <int> stack;

      for (auto i = std::rbegin(list); i != std::rend(list); i += 1) {
        while (!stack.empty() && stack.top() >= *i) { stack.pop(); }
        if (!stack.empty()) result[i.base() -  std::begin(list) - 1] = stack.top();
        stack.push(*i);
      }

      for (auto i = std::begin(result); i != std::end(result); i += 1) { current->val = *i; current = current->next; }

      return head;
    }
};
