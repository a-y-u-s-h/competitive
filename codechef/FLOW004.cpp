#include <iostream>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      For every test case you get a number.
      You need to find sum of its first and
      last digits.
    ======================================
  */
  int t;
  std::cin >> t;

  for (int i = 0; i < t; i += 1) {
    int n, first = 0, last = 0;
    std::cin >> n;

    /*
      ======================================
        Last digit is simply n % 10.
        To find out first digit, we keep dividing
        n until n isn't greater than 10 anymore,
        what remains is the first digit.
      ======================================
    */
    last = n % 10;
    while (n > 0) {
      first = n % 10;
      n = n / 10;
    }
    std::cout << (first + last) << std::endl;
  }
  return 0;
}
