#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::map<int, int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A[Ai]++; }
    /*
      ======================================
        There are N animals in
        a pet store. Alice decides to buy
        some of these N animals (say, x). Boib decides
        that he will buy ALL the animals *left*
        in the store after Alice has made the
        purchase, so (N - x). We want to know
        whether it is possible that Alice
        and Bob end up with exactly same
        multiset of animals.
      ======================================
    */
    bool condition = std::all_of(std::begin(A), std::end(A), [](auto const &a) { return a.second % 2 == 0; });
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
