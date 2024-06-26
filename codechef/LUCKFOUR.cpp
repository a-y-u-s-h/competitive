#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int64_t n;
    std::cin >> n;

    /*
      ======================================
        For every test case, we get a number.
        We go through every digit of that number
        and find out the number of '4's it has,
        by storing the count in a variable and then
        print it.
      ======================================
    */
    int count = 0;
    while (n > 0) {
      if (n % 10 == 4) count++;
      n /= 10;
    }

    std::cout << count << std::endl;
  }
  return 0;
}
