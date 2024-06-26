/*
  ======================================
    Alice has a "strange singly linked
    list". A "usual singly linked list"
    or a "not-strange linked list" consists
    of nodes pointing to exactly one
    node (except for the tail node which
    points to null). However, in case
    of "strange singly linked list", instead
    of pointing towards a single linked
    list node, some nodes of the linked
    list are pointing towards two nodes.
    Each node in the "strange linked list"
    has two pointers named: next, child.

    The "child" pointer of a node may again
    point towards a strange singly linked
    list. Alice wants to restructure this
    linked-list into a "not-strange linked
    list". While doing so, she must follow
    the following rules:

    Let "current" be a node in the structured
    linked list, then:

    1. current.next must occur after current
       in the restructured linked list.
    2. All the nodes (if any) which are a
       part of current.child linked list
       must occur after the node "current"
       and before the node "current.next"
       in the restructured linked list.
    3. Let current be a node in the structured
       linked list, then current.child must be
       "null".

       class Node {
        public:
        int val;
        Node* next;
        Node* child;
        Node(int val) {
            next = child = NULL;
            this->val = val;
        }
      };

  ======================================
*/

Node* flatten(Node* head) {
  Node* current = head;

  if (!head) return nullptr;

  while (current) {
    Node* next = current->next;

    if (current->child) {
      Node* branch = flatten(current->child);
      current->next = branch;
      current->child = nullptr;
      Node* visitor = branch; while (visitor->next) { visitor = visitor->next; } visitor->next = next;
    }

    current = next;
  }

  return head;
}
