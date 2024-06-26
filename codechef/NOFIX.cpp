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
        Chef has a sequence of N integers:
        A = [A1, A2, A3, A4...An]. He can
        perform the following operations any
        number of times (possibly zero):

        Choose any positive integer K and
        insert it at any position of the sequence
        (possibly the beginning or end of the
        sequence, or in between any two elements).

        For example, if A = [5, 3, 4] and chef
        selects K = 2, then after operation he
        can obtain one of the sequences [2, 5, 3, 4],
        [5, 2, 3, 4], [5, 3, 2, 4] or [5, 3, 4, 2].

        Chef wants this sequence to satisfy
        the following condition:
        for each 1 <= i <= |A|, Ai != i. Here,
        |A| denotes the length of A.

        Help Chef to find the minimum number
        of operations that he has to perform
        to achieve this goal. It can be proved
        that under the constraints of the problem,
        it's always possible to achieve this goal
        in a finite number of operations.
      ======================================
    */

    int inserted = 0;
    for (int i = 0; i < N; i += 1) { if (A[i] == (i + 1) + inserted) inserted++; }
    std::cout << inserted << std::endl;
  }
  return 0;
}
