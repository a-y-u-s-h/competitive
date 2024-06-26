#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    std::string number;
    std::cin >> number;
    /*
      ======================================
        We're given a number for every test
        case, we need to find out how many
        digits are the number '4', so we simply
        take the number as a string and count
        how many 4 characters it contains.
      ======================================
    */
    int fours = std::count(std::begin(number), std::end(number), '4');
    std::cout << fours << std::endl;
  }
  return 0;
}
