#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    std::vector<int> B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        You're gien two arrays A and B of
        size N. Given a function F, such that
        F(i, j) = Ai + Bj, reorder the arrays
        A and B such that F(i, j) >= F(j, i)
        for 1 <= i <= N, 1 <= j <= N, i < j.
      ======================================
    */
    std::sort(std::begin(A), std::end(A), std::greater<int>());
    std::sort(std::begin(B), std::end(B));
    for (auto i : A) { std::cout << i << " "; } std::cout << std::endl;
    for (auto i : B) { std::cout << i << " "; } std::cout << std::endl;

  }
  return 0;
}
