#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Write a program that takes an input
      N and prints the count of the
      set bits present in the number.

      To check if a specific bit is set (equals 1)
      or not in a binary representation, you
      can use the bitwise AND operator (&).
      Here's how you can do it in pseudocode:

      function is_bit_set(number, position):
          mask = 1 << position
          return (number & mask) != 0

      In this pseudocode, (1 << position)
      creates a mask with a 1 at the specified
      position by left shifting the binary
      digit 1 to the left by the given position.

      (number & mask) != 0 checks if the bit
      at the specified position is set by performing
      a bitwise AND operation. If the result
      is not zero, it means that the bit is set.

      Write a program that takes an input
      integer N and prints the count of the
      set bits present in the number.
    ======================================
  */

  int position = 1, answer = 0;
  while (position <= N) { if ((N & position) != 0) { answer++; } position <<= 1; }
  std::cout << answer << std::endl;
  return 0;
}
