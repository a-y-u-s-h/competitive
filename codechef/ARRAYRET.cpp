#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> B;
    /*
      ======================================
        Chef has an array A of length N.
        Let f(i) denote the sum [A1 to Ai] and
        g(i) denote the sum [Ai to An]. Chef
        creates another array B of length N
        such that Bi = f(i) + g(i) for all
        1 <= i <= N. Now Chef has lost the
        original array A and needs your help
        to recover it. Given array B. It
        is guaranteed that Chef has obtained
        the array B from a valid array A.
      ======================================
    */
    long long Sb = 0;
    for (long long n = 0; n < N; n++) { long long Bi; std::cin >> Bi; B.push_back(Bi); Sb += Bi; }
    long long Sa = Sb / (N + 1);
    std::transform(std::begin(B), std::end(B), std::begin(B), [Sa](auto const &Bi) { return Bi - Sa; });
    for (auto i : B) { std::cout << i << " "; } std::cout << std::endl;

  }
  return 0;
}
