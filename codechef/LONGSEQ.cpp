#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string N;
    std::cin >> N;
    /*
      ======================================
        Chef has a number D containing only
        digits 0's and 1's. He wants to make
        the number to have all the digits same.
        For that, he will change exactly one
        digit, i.e. from 0 to 1 or from 1 to 0.
        If it is possible to make all digits
        equal (either all 0's or all 1's) by
        flipping exactly 1 digit then output
        "Yes", else print "No" (quotes for clarity)
      ======================================
    */
    int C0 = std::count(std::begin(N), std::end(N), '0');
    int C1 = std::count(std::begin(N), std::end(N), '1');
    bool condition = C0 == 1 || C1 == 1;
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
