#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    /*
      ======================================
        Chef has fallen in love with Chefina,
        and wants to buy N gifts for her. On
        reaching the gift shop, Chef got to
        know the following two things:
        1. The cost of each gift is 1 coin.
        2. On the purchase of every 4th gift,
        the 5th gift is free of cost.

        What is the minimum number of coins
        that Chef will require in order to
        come out of the shop carrying N gifts.
      ======================================
    */
    int answer = N - std::floor(N / 5);
    std::cout << answer << std::endl;
  }
  return 0;
}
