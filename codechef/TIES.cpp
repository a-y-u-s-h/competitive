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
        On a Halloween evening, young Tim
        embarks on a candy filled quest with
        his friends, dressed as ghouls and
        witches. There are N friends, initially
        the i-th of them has Ai candies.

        To truly savor the spooky spirit, Tim
        wishes for everyone to have an equal
        number of candies. To achieve this,
        he is armed with a magical operation
        which is as follows:

        1. First, Tim chooses two integers i
           and j (1 <= i, j <= N) denoting the
           indices of two of his friends.

        2. Next, he chooses an integer K,
           that's at least 1, while also
           satisfying pow(2, k) <= Ai, that
           is, the inequality 2 <= pow(2, k) <= Ai
           should hold.

        3. Finally, Tim takes away pow(2, k)
           candies from a friend i and gives them
           to the friend j. That is, their candy
           counts change to (Ai - pow(2, k)) and
           (Aj + pow(2, k)) respectively.

        Determine whether all of Tim's friends
        can have an equal number of candies in
        the end, after some (possibly zero)
        operations are performed.
      ======================================
    */

    int S = std::accumulate(std::begin(A), std::end(A), 0);
    if (S % N != 0) { std::cout << "NO" << std::endl; continue; }
    int target = S / N; bool possible = true;
    for (int i = 0; i < N; i += 1) { if (std::abs(A[i] -  target) % 2 != 0) { possible = false; break; } }
    std::cout << (possible ? "YES" : "NO") << std::endl;
  }
  return 0;
}
