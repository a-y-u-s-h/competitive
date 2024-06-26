#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string N;
    std::cin >> N;

    /*
      ======================================
        You're given a large number N. You
        need to print the number N + 1. Note:
        The number is very large and it will
        not fit in the standard inteeger data
        type. You have to take the input as
        string and then manipulate the digits
        to convert it to N + 1.
      ======================================
    */

    std::map<char, std::string> replacement = {
      { '0', "1" },
      { '1', "2" },
      { '2', "3" },
      { '3', "4" },
      { '4', "5" },
      { '5', "6" },
      { '6', "7" },
      { '7', "8" },
      { '8', "9" },
      { '9', "0" },
    };

    /*
      ======================================
        Use a for-loop with reverse iterators
        and iterator based functions to replace
        characters. '9' is a special case, we
        must keep finding 9s and replace them
        with zeroes. For the rest we can quit
        after replacing them once.
      ======================================
    */

    for (auto i = std::rbegin(N); i != std::rend(N); i++) {
      char digit = *i;
      N.replace((i + 1).base(), i.base(), replacement.at(*i));
      if (digit != '9') break;
    }

    /*
      ======================================
        If at the end of it all, we still
        find a '0' (because it was all
        continuous 9s), we will insert 1 at
        the beginning of the string.
      ======================================
    */

    if (N[0] == '0') N.insert(std::begin(N), '1');
    std::cout << N << std::endl;

  }
  return 0;
}
