#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Let's create a matrix of all zeroes
        first, and then we can place the
        'pook' at different squares, and for
        each of those squares, we can find fill
        squares that are threatened with 1. And
        then count the squares which still aren't
        threatened. This way, we'll get a bunch
        of counts (for each square) and then
        we can find the maximum of those counts.

        Identify the pattern and write down the
        answer.
      ======================================
    */
    int answer = N == 2 || N == 3 ? N - 1 : N;
    std::cout << answer << std::endl;
  }
  return 0;
}
