#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      Gien a list of numbers, you have to
      sort them in non-decreasing order.
    ======================================
  */
  std::sort(std::begin(A), std::end(A));
  for (auto const &Ai : A) { std::cout << Ai << std::endl; }
  return 0;
}
