#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are N children and Chef wants
        to given them 1 candy each. Chef already
        has X candies with him. To buy the rest,
        he visits a candy shop, packets
        containing exactly 4 candies are available.
        Determine the minimum number of candy
        packets Chef must buy so that he is
        able to give 1 canndy to each of
        the N children.
      ======================================
    */
    int answer = N > X ? std::ceil((N - X) / 4) : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
