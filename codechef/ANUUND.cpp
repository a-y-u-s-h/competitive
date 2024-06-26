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
        You'll be given a zero-indexed array A.
        You need to rearrange its elements in
        such a way that the following conditions
        are satisfied:

        1) A[i] <= A[i + 1] if i is even.
        2) A[i] >= A[i + 1] if i is odd.

        In other words, the following inequality
        should hold: A[0] <= A[1] >= A2 <= A3 >= A4,
        and so on. Operations <= and >= should alter.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    if (N % 2 == 0) { for (int i = 1; i < N - 1; i += 2) { std::swap(A[i], A[i + 1]); } }
    if (N % 2 == 1) { for (int i = 1; i < N - 0; i += 2) { std::swap(A[i], A[i + 1]); } }
    for (auto i : A) { std::cout << i << " "; } std::cout << std::endl;

  }
  return 0;
}
