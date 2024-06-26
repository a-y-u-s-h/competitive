/*
  ======================================
    You're given the head of a singly
    linked list A of length N. The
    values in the list are A1, A2...An
    respectively. You're also given
    a non-negative integer R. You need
    to rotate the list R places to the
    right.

    A single rotation to the right is
    an operation in which the last element
    of that list is moved to the first
    place in the list, while all
    the other elements are moved one place
    to the right.

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

Node* rotateRight(Node* head, int R){
  std::vector<int> list;
  Node* current = head; while (current) { list.push_back(current->val); current = current->next; } current = head;
  while (R--) { std::rotate(std::rbegin(list), list.rbegin() + 1,std::rend(list)); }
  for (auto i = std::begin(list); i != std::end(list); i += 1) { current->val = *i; current = current->next; }
  return head;
}
