#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    /*
      ======================================
        Two TVs have a cost of A and B. They
        have discounts of C and D respectively.
        We need to find the cheaper one.
      ======================================
    */
    std::string answer = (A - C < B - D) ? "First"
                      :  (A - C > B - D) ? "Second"
                      : "Any";

    std::cout << answer << std::endl;
  }
  return 0;
}
