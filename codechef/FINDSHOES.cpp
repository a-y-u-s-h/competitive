#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Chef has N friends. Chef promised that
        he would gift a pair of shows (one L and
        one R shoe) to each of his N friends.
        Chef remembers he already had M left shoes.
        What is the minimum number of extra shoes
        that Chef will have to buy to be able
        to gift a pair to each of his N friends.
      ======================================
    */
    int answer = M <= N ? (N - M) + N : N;
    std::cout << answer << std::endl;
  }
  return 0;
}
