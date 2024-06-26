/*
  ======================================
    The Chef gives you a singly linked
    list A integers and asks you to help
    him reverse the list. Complete the
    function "listReverse" in the code
    snippet that takes a single argument:
    head of the linked list.

    struct Node {
      int data;
      struct Node* next;
      Node(int data)
      {
          this->data = data;
          next = NULL;
      }
    };

  ======================================
*/

Node* reverseList(Node* head) {
  std::vector<int> list;
  Node* current = head; while (current) { list.push_back(current->data); current = current->next; } current = head;
  std::reverse(std::begin(list), std::end(list));
  for (auto i = std::begin(list); i != std::end(list); i += 1) { current->data = *i; current = current->next; }
  return head;
}
