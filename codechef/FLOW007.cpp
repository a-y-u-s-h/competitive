#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int n;
    std::cin >> n;

    /*
      ======================================
        After getting the number, store its
        (from the end) digits in a vector.
        You don't need to reverse the resulting
        vector, because you're already inserting
        digits from the end.
      ======================================
    */
    std::vector<int> digits;
    while (n > 0) {
      int digit = n % 10;
      digits.push_back(digit);
      n /= 10;
    }

    /*
      ======================================
        You cannot simply print out
        the vector, because of some edge cases -
        if you have number like 2300, then you
        need to print '32', not '0032'. Do accomplish
        that, let's just get
        the reversed number back and print it directly.
      ======================================
    */

    int number = 0;
    for (int i = 0; i < digits.size(); i += 1) {
      int multiplier = std::pow(10, (digits.size() - i - 1));
      int digit = digits[i];
      number += digit * multiplier;
    }

    std::cout << number << std::endl;
  }
  return 0;
}
