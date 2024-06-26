#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Chef is confused whether to go out
        and eat at the restaurant or order
        food online. THe online order costs
        N rupees while the cost of eating
        at the restaurants is M rupees.
        However, Chef has a discount coupon
        with which he can awail flat 10% off
        on his online order.

        Find the cheaper option for Chef to
        eat, i.e. whether to order food online
        or eat at the restaurant.
      ======================================
    */
    std::string answer = (N * 0.9 < M) ? "ONLINE" : (N * 0.9 > M) ? "DINING" : "EITHER";
    std::cout << answer << std::endl;
  }
  return 0;
}
