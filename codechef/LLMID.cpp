/*
  ======================================
    You're given the head of a linked
    list A of length N. The values in
    the list are A1, A2, A3...An. respectively.
    You need the find the value of the
    middle element of the linked list.
    The middle element of a linked list
    of length N is the [N / 2] + 1-th
    element from the head of the list.

    struct Node {
      int val;
      struct Node* next;
      Node(int x){
        val = x;
        next = NULL;
      }
    }

  ======================================
*/
int getMiddleElement(Node* head){
  Node* visitor = head;
  int length = 0; int N = 0;
  while (visitor) { length++; visitor = visitor->next; }
  N = length / 2; visitor = head;
  while (N) {  visitor = visitor->next; N--; }
  return visitor->val;
}
