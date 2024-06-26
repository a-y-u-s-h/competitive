#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef has a sequence [A1, A2, ... An].
        He needs to find the number of pairs
        (i, j) (1 <= i < j <= N) such that
        Ai + Aj = Ai * Aj. However, he is busy
        so he asks for your help.

        (a + b) = 2 * AM, a * b = GM.
        (a + b) = a b
        a = a (b - 1)
        a != 0, b = 2 or b != 0 and a == 2.

        So, we just need to count nC2 for
        number of zeroes and number of 2s.
      ======================================
    */
    long long C2 = std::count(std::begin(A), std::end(A), 2);
    long long C0 = std::count(std::begin(A), std::end(A), 0);
    long long pairs = (C2 * (C2 - 1) + C0 * (C0 - 1)) / 2;
    std::cout << pairs << std::endl;
  }
  return 0;
}
