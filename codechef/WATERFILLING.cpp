#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int B1, B2, B3;
    std::cin >> B1 >> B2 >> B3;
    /*
      ======================================
        Chef has 3 water bottles. At any
        point, if at least 2 of them are empty,
        she will fill them up. But if at most
        one bottle is empty, she will wait and
        not fill them up now.

        1. If B1 = 1, it means first bottle is full.
        2. If B1 = 0, it means that first bottle is empty.
        And so on...
        We need to find out whether it's time to
        fill up the bottles or not.
      ======================================
    */
    std::vector<int> bottles = { B1, B2, B3 };
    int empty = std::count(begin(bottles), end(bottles), 0);
    bool condition = empty >= 2;
    std::cout << (condition ? "Water filling time" : "Not now") << std::endl;
  }
  return 0;
}
