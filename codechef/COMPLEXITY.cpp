#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        A sorting algorithm "A" is said to
        have more time complexity than a
        sorting algorithm "B" if it uses more
        number of comparisons for sorting
        the same array than algorithm "B".

        Given that algorithm "A" uses "X"
        comparisons to sort an array, and algorithm
        "B" uses Y comparisons to sort the
        same array, find whether algorithm "A"
        has more time complexity.
      ======================================
    */
    bool condition = X > Y;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
