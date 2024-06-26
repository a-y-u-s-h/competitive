#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      The least significant bit (LSB) of
      a binary number is the rightmost bit.
      You can calculate it using the bitwise
      AND opeartions with 1.

      LSB = number & 1

      The most significant bit (MSB) of a
      binary number is the leftmost bit.
      You can calculate it with following
      pseudocode:

      if number <= 0: error, input must be >= 0.
      otherwise, keep a position variable,

      MSB = 0
      while (number > 0) { number >>= 1; MSB++; }
      return MSB - 1 (0-based position)

      Task:

      Write a program to input an integer N.
      Print the position of MSB and LSB.
    ======================================
  */
  int N;
  std::cin >> N;
  int LSB = N & 1;
  int MSB = 0; while (N > 0) { N >>= 1; MSB++; } MSB -= 1;
  std::cout << MSB  << " " << LSB << std::endl;

  return 0;
}
