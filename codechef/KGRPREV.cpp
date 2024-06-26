/*
  ======================================

    You're given a linked list with N
    nodes. You have to perform following
    commands -

    1. Make groups of size M from the head
       node to the last node.
    2. Assuming groups are created, you
       have to reverse the order of nodes
       in each group.
    3. Relative order of the groups in the
       final linked list must remain the
       same i.e. after reversing, all the
       elements of group 1 should appear
       before group 2 and so on.

    In order to solve this problem, you just
    have to complete the function below by
    returning the head of the linked list. It
    is guaranteed that N is divisible by M for
    all test cases.

    struct Node {
      int val;
      struct Node* next;
      Node(int x) {
        val = x;
        next = NULL;
      }
    };

  ======================================
*/


Node* reverseMSizeGroups(Node* head, int M) {
    std::vector<int> list;
    Node* current = head; while (current) { list.push_back(current->val); current = current->next; } current = head;
    for (int i = 0; i < list.size(); i += M) { std::reverse(std::begin(list) + i, std::begin(list) + i + M); }
    for (auto i = std::begin(list); i != std::end(list); i += 1) { current->val = *i; current = current->next; }
    return head;
}
