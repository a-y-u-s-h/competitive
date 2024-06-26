#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        In programming a collection of 4 bits
        is called a nibble. Given a program
        takes N bits of memory, determine
        whether it is "GOOD" or "NOT GOOD".

        Chef defines a program as "GOOD" if
        it takes exactly X nibbles of memory
        where X is a positive integer, and
        "NOT GOOD" otherwise.
      ======================================
    */
    bool condition = N % 4 == 0;
    std::cout << (condition ? "GOOD" : "NOT GOOD") << std::endl;
  }
  return 0;
}
