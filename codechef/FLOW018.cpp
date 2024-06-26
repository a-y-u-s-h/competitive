#include <bits/stdc++.h>

#include <boost/multiprecision/cpp_int.hpp>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      For every test case, you get a number.
      You need to find factorial of that number.
    ======================================
  */
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    boost::multiprecision::cpp_int n, factorial = 1;
    std::cin >> n;

    /*
      ======================================
        Since factorial of large numbers like 100
        go over maximum amount of digits that C++ allows,
        i.e. 20, we need to manually store digits of multiplication
        and carries in some variables, and then proceed with calculation.
        100! has 158 digits, so it's better to use a larger integer type.
      ======================================
    */
    while (n > 0) {
      factorial *= n;
      n--;
    }

    std::cout << factorial << std::endl;
  }
  return 0;
}
