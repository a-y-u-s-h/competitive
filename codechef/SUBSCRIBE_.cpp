#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float N, X;
    std::cin >> N >> X;
    /*
      ======================================
        N friends want to buy subscriptions.
        We know that 6 people can share one
        subscription. Also cost of one
        subscription is X. Determine the total
        cost that the group of N friends will
        incur so that everyone in the group is
        able to use subscription.
      ======================================
    */
    int cost = X * std::ceil(N / 6);
    std::cout << cost << std::endl;
  }
  return 0;
}
