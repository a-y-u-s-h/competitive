#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int p;
    std::cin >> p;

    /*
      ======================================
        Starting from the maximum available
        item price, we find out how many items
        can come with that item price by dividing
        the target price. And then we replace p
        with whatever's left (remainder) and then move on
        to next item price. We could have stored
        all prices in an array, but since they're
        all exponents of 2, we can simply divide price
        by 2 to get the next one.
      ======================================
    */
    int price = 2048, answer = 0;

    while (p > 0) {
      answer = answer + (p / price);
      p = p % price;
      price = price / 2;
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
