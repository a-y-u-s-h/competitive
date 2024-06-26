#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;

  /*
    ======================================
      Very straightforward: Find out
      number of digits in a number, and then
      output as given in the instructions.
      In this solution, I've simply converted
      the number to string and found the length.
    ======================================
  */
  std::string number = std::to_string(N);
  int length = number.length();
  if (length <= 3) std::cout << length << std::endl;
  if (length > 3) std::cout << "More than 3 digits" << std::endl;
  return 0;
}
