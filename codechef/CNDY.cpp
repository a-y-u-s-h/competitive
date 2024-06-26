#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;
    for (int64_t n = 0; n < 2 * N; n++) { int64_t Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Abhi is a salesman. He was given
        two types of candies, which he
        is selling in N different cities.
        For the prices of candies to be valid,
        Abhi's boss laid down the following
        condition:

        1. A given type of candy must have
        distinct prices in all N cities.

        In his excitement, Abhi wrote down
        the prices of both the candies on
        the same page and in random order
        instead of writing them on
        different pages. Now he is asking
        for your help to find out if the
        prices he wrote are valid or not.

        You are given an array A of size 2N.
        Find out whether it is possible to
        split A into two arrays, each of
        length N, such that both
        arrays consist of distincct elements.
      ======================================
    */
    std::set<int64_t> P (std::begin(A), std::end(A));
    bool answer = std::none_of(std::begin(P), std::end(P), [A](auto const &p) { return std::count(std::begin(A), std::end(A), p) > 2; });
    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
