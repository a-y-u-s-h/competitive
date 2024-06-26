#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, X;
  std::cin >> N >> X;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      You're given an array A of size N
      and an element X. Your task is to
      find whether the array A contains
      the element X or not.
    ======================================
  */
  bool condition = std::find(std::begin(A), std::end(A), X) != std::end(A);
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
