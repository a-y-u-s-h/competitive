/*
  ======================================
    You're given the head of a singly
    linked list A of lenght N. The values
    in the list are A1, A2, A3, ..An
    respectively. You're also given
    two integers L and R. You need to
    reverse the nodes of the list
    from position L to position R.

    struct Node {
      int val;
      struct Node* next;
      Node(int x){
        val = x;
        next = NULL;
      }
    };
  ======================================
*/

Node* reverseSegment(Node* head, int L, int R){
  std::vector<int> list;
  Node* current = head; while (current) { list.push_back(current->val); current = current->next; } current = head;
  std::reverse(std::begin(list) + L - 1, std::begin(list) + R);
  for (auto i = std::begin(list); i != std::end(list); i += 1) { current->val = *i; current = current->next; }
  return head;
}
