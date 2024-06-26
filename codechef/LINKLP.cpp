/*
  ======================================
    Given a linked list, there may exist
    a single loop or no loop. If there
    are a total of X elements present in
    a loop, return X-1 as your answer;
    otherwise, in case no loop exists,
    return -1.

    To solve this problem, complete the
    function present in the submit
    solution tab. Node is defined as:

    struct Node{
      int data=0;
      Node* next;
      Node(){
            this->data = 0;
            this->next = nullptr;
      }
      Node(int data){
          this->data = data;
          this->next = nullptr;
      }
    };

  ======================================
*/

int solve(Node* head){
  /*
    ======================================
      We need to keep a track of elements
      that we see as we visit nodes. If
      we see the same element back again,
      we need to stop visiting nodes, and
      then process the vector/set of elements
      that we've already visited.
    ======================================
  */
  std::unordered_set<Node*> visited;
  Node* current = head; bool present = false;

  while (current) {

    if (visited.find(current) != std::end(visited)) {
      Node* start = current; int length = 0;
      do { current = current->next; length++; } while (current != start);
      return length;
    };

    visited.insert(current);
    current = current->next;
  }

  return -1;
}
