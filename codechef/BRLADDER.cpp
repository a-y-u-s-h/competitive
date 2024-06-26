#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int Q;
  std::cin >> Q;
  for (int q = 0 ; q < Q; q += 1) {
    int a, b;
    std::cin >> a >> b;
    std::string answer = (a % 2 == 0  && b % 2 == 0) && (std::abs(a - b) == 2) ? "YES"
                       : (a % 2 == 1  && b % 2 == 1) && (std::abs(a - b) == 2) ? "YES"
                       : ((a % 4 == 1 && b % 4 == 2) || (b % 4 == 1 && a % 4 == 2)) && (std::abs(a - b) == 1) ? "YES"
                       : ((a % 4 == 3 && b % 4 == 0) || (b % 4 == 3 && a % 4 == 0)) && (std::abs(a - b) == 1) ? "YES"
                       : "NO";

    std::cout << answer << std::endl;
  }
  return 0;
}
