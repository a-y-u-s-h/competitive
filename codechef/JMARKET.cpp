#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, A, B, C;
    std::cin >> X >> A >> B >> C;
    /*
      ======================================
        There is an infinite supply of 3
        different kinds of fruit with prices
        A, B and C. He needs to buy a total
        of X fruits having at least 2 different
        kinds of fruits. What is the least
        amount of money he can spend to buy
        fruits?

        ax1 + bx2 + cx3 = X

        if a == 0, b, c > 0;
        if b == 0, a, c > 0;
        if c == 0, a, b > 0;
      ======================================
    */
    std::vector<int> P = { A, B, C };
    std::sort(std::begin(P), std::end(P));
    int answer = P[0] * (X - 1) + P[1];
    std::cout << answer << std::endl;
  }
  return 0;
}
