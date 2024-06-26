#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You've an array A of size N, an array
        B (initially empty) and a stack S
        (initially empty). You're allowed to
        do the following operations:

        1. Take the first element of array A
           and push it into S and remove from A.
        2. Take the top element from stack S,
           append it to the end of array B and
           remove it from S.

        You've to tell if it is possible to
        move all the elements of the array A
        to array B using the above operations
        such that finally the array B is sorted
        in ascending order.
      ======================================
    */

    /*
      ======================================
        We use a stack to hold elements
        temporarily, we also use a variable
        "expectation" to keep track of
        the next expected number that should
        be placed in the array B. Then
        we push every element of A in S one
        by one, and check if it meets our
        expectations, if it doesn't, we do
        nothing, we keep adding more elements
        of A to stack. If it does though, we'll
        pop it from our stack assuming we have
        pushed it to the array B.
      ======================================
    */
    bool possible = true; std::stack<int> stack; int expectation = 1;
    for (int i = 0; i < N; i++) { stack.push(A[i]); while (!stack.empty() && stack.top() == expectation) { stack.pop(); expectation++; }}
    if (!stack.empty()) { possible = false; }
    std::cout << (possible ? "YES" : "NO") << std::endl;

  }
  return 0;
}
