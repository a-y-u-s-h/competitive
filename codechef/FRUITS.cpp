#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, M, K;
    std::cin >> N >> M >> K;

    /*
      ======================================
        There are N apples, M oranges.

        When Chef wants to buy either 1 apple or 1 orange
        he has to pay 1 gold coin and he can purchase
        a fruit at most K times (he has K gold coins).
        He wants to purchase so that he minimizes the
        difference between N and M (by increasing either of them).
        We need to find minimum possible difference that the
        chef can achieve.

        Maximum possible difference = abs(N - M)
        Minimum possible difference =
          | 0              if abs(N - M) - K < 0
          | abs(N - M) - K if abs(N - M) - K >= 0
      ======================================
    */

    int difference = std::abs(N - M);
    int answer = K > difference ? 0 : difference - K;
    std::cout << answer << std::endl;
  }
  return 0;
}
