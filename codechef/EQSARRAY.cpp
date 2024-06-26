#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given an array A of size N
        and integer K. You can perform the
        following operation on the given array
        any number of times (possibly zero).

        Choose two integers L and R
        (1 <= L <= R <= N). Then for each i such
        that L <= i <= R, set Ai to A(floor((L + R)/2)).
        That is, apply the following to the subarray:

        If this subarray has odd length, set
        all its elements to be equal to the middle
        element. If it has even length, set
        all its elements to be equal to the left
        one among the two middle elements.

        Is it possible to make all the array
        elements equal to K after performing
        some number of operations?
      ======================================
    */
    bool C1 = std::find(std::begin(A), std::end(A), K) != std::end(A);
    bool C2 = std::find(std::begin(A), std::end(A), K) - std::begin(A) < N - 1;
    bool condition = C1 && (C2 || N == 1);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
