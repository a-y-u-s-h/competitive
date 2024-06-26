#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N1, N2;
  std::cin >> N1 >> N2;
  /*
    ======================================
      Write a program to take two numbers
      as input and print their difference
      if the first number is greater than
      the second number otherwise print
      their sum.
    ======================================
  */
  if (N1 > N2) std::cout << (N1 - N2) << std::endl;
  if (N1 <= N2) std::cout << (N1 + N2) << std::endl;
  return 0;
}
