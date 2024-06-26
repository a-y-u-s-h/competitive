#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Write a program to input an integer N
      in decimal form, convert it to binary,
      and then print the result.
    ======================================
  */
  int decimal;
  std::cin >> decimal;
  std::string binary;

  /*
    ======================================
      Keep finding out remainder as you
      divide the decimal number by 2 and
      then the binary numer is simply this
      remainder string, but reversed.
    ======================================
  */
  while (decimal) { binary += std::to_string((decimal % 2)); decimal /= 2; }
  std::reverse(std::begin(binary), std::end(binary));
  std::cout << binary << std::endl;
  return 0;
}
