/*
  ======================================
    Given the head of a linked list,
    find the number of critical points
    (The starting and end are not considered
    critical points).  Local minima or
    local maxima are called critical points.

    A node is called a local minima if
    both next and previous elements are
    greater than the current element.
    A node is called a local maxima if
    both next and previous elements are
    smaller than the current element.
  ======================================
*/

int solve(Node* head) {
  Node* current  = head;
  Node* previous = NULL;

  int criticals = 0;

  while (current) {
    bool minima = false;
    bool maxima = false;

    if (previous && current->next) {
      minima = (current->data < previous->data) && (current->data < current->next->data);
      maxima = (current->data > previous->data) && (current->data > current->next->data);
    }

    bool critical = minima || maxima;
    if (critical) criticals++;

    previous = current;
    current = previous->next;
  }

  return criticals;
}
