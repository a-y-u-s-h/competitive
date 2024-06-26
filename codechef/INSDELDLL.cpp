/*
  ======================================
    You're given the head of a doubly
    linked list A of length N. The
    values in the list are A1, A2, A3,
    ...An respectively. You need to
    complete a function that inserts
    a node with a given value at the
    given position and a function that
    deletes a node at the given position.
    The positions are numbered from 1 to N.

    struct Node {
      int val;
      struct Node* next;
      struct Node* prev;
      Node(int x){
        val = x;
        next = NULL;
        prev = NULL;
      }
    };
  ======================================
*/

Node* insertNode(Node* head, int position, int value){
  /*
    ======================================
      Since, we have a doubly linked list,
      we'll have to keep track of the
      previous element so that we can
      point it to our new element and also
      the next element from that position
      so that we can connect next one to
      the newly inserted one.
    ======================================
  */
  Node* member = new Node(value);

  if (position == 1) {
    member->next = head;
    if (head != NULL)  { head->prev = member; }
    return member;
  }

  Node* previous = NULL; Node* current = head; int K = position - 1;
  for (int K = position - 1; K > 0; K--) { previous = current; current = current->next; }
  previous->next = member;
  member->next = current;
  member->prev = previous;
  if (current != NULL) current->prev = member;

  return head;
}

Node* deleteNode(Node* head, int position){
  /*
    ======================================
      Since, we have a doubly linked list,
      we'll have to delete the node at a
      given position and then connect the
      previous (if we have any) and next one
      (if we have any) with each other.
    ======================================
  */
  Node* previous = NULL; Node* current = head; Node* next = current ? current->next : NULL;

  if (position == 1) {
    next = head->next;
    if (next) next->prev = NULL;
    delete head;
    return next;
  }

  for (int K = position - 1; K > 0; K--) { previous = current; current = current->next; if (current != NULL) next = current->next;  }

  if (current) {
    if (previous) previous->next = current->next;
    if (next)     next->prev     = current->prev;
    delete current;
  }

  return head;
}
