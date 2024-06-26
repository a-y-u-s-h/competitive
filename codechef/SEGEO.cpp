/*
  ======================================
    Chef has a linked list. He wants to
    modify the linked list such that all
    the even values appear before the odd
    values without changing their relative
    order. But he's too busy now and
    asked you to do the job for him.

    Can you do it?

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
      Node* current = head;
      std::vector<int> evens, odds;

      while (current) {
        if (current->val % 2 == 0) { evens.push_back(current->val); }
        if (current->val % 2 == 1) { odds.push_back(current->val); }
        current = current->next;
      }

      current = head;
      std::vector<int> result;
      result.reserve(evens.size() + odds.size());
      result.insert(std::end(result), std::begin(evens), std::end(evens));
      result.insert(std::end(result), std::begin(odds), std::end(odds));

      for (auto i = std::begin(result); i != std::end(result); i += 1) {
        current->val = *i;
        current = current->next;
      }

      return head;
    }
};
