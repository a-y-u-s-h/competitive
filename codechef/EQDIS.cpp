#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); frequencies[Ai]++; }
    /*
      ======================================
        Let F(S) denote the number of distinct
        elements in the array S. You're given
        an array A containing N integers. Find
        if it is possible to divide the elements
        of the array into two arrays B and C
        such that:

        1. Every element of the array A belongs
           either to array B or to array C.

        2. F(B) = F(C).

        Solution: The answer is NO if and only
        if N is odd and all the elements of
        A are distinct.
      ======================================
    */
    bool condition = !(N % 2 == 1 && frequencies.size() == N);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
