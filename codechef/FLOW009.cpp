#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    double quantity, price;
    std::cin >> quantity >> price;

    /*
      ======================================
        Straight-forward logic. If quantity
        is more than 1000 then we offer
        a discount of 10%, otherwise we don't.
      ======================================
    */
    double expenses = 0, discount = 0;
    if (quantity > 1000) discount = 10;
    expenses = (quantity * price) * (1 - (discount * 0.01));
    std::cout << std::fixed << std::setprecision(6) << expenses << std::endl;
  }
  return 0;
}
