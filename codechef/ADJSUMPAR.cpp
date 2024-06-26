#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<int> B;
    for (int n = 0; n < N; n++) {
      int Bi; std::cin >> Bi;
      B.push_back(Bi);
    }

    /*
      ======================================
        Chef has an array of length N. Chef
        forms a binary array B of length N
        using the parity of the sums of adjacent
        elements in A. Formally,
        Bi = (Ai + A(i+1)) % 2 for 1 <= i <= N - 1
        Bn = (An + A1) % 2

        x % y  denotes the remainder obtained when
        x is divided by y. Chef lost the array A and
        needs your help. Given array B, determine
        whether there exists any valid array A which
        could have formed B. Since B is cyclic, let's
        just push first element of B to last so
        that we can apply sliding window.
      ======================================
    */
    bool condition = std::accumulate(std::begin(B), std::end(B), 0) % 2 == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
