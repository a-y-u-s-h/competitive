#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int R1, R2, R3;
    std::cin >> R1 >> R2 >> R3;
    /*
      ======================================
        There are 3 companies in the market,
        each of whose revenues are denoted
        by R1, R2, R3. A company is said to
        have a monopolistic advantage if its
        revenue is strictly greater than
        the sum of the revenues of its
        competitors. Given revenues, help
        Chef determine if any of them
        has monopolistic advantage.
      ======================================
    */
    bool condition = (R1 > R2 + R3) || (R2 > R3 + R1) || (R3 > R2 + R1);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
