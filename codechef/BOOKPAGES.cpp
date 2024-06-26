#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> P;
    for (int n = 0; n < N; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    /*
      ======================================
        Chef has N books such that the i-th
        book has Ai pages, He wants to divide
        all the books between Alice and Bob
        such that -

        1) Both Alice and Bob get at least 1 book.
        2) The number of pages allotted to Alice
           and Bob are either both odd or both even.

        Find whether such distribution exists.
      ======================================
    */
    int O = std::count_if(std::begin(P), std::end(P), [] (auto const &Pi) { return Pi % 2 == 1; });
    bool condition = O % 2 == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
