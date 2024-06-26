#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Given a number N, flip its most
      significant bit and least significant
      bit. Then print out the number.
    ======================================
  */

  /*
    ======================================
      Approach, find out locations of LSB
      (right-most) and MSB (left-most)
      digit. And then take XORs
      with 1 shifted by position amounts to
      flip the digit at that location.
    ======================================
  */
  int M = N;
  int LSB = 0;
  int MSB = 0; while (M > 0) { M >>= 1; MSB++; } MSB -= 1;

  N = N ^ (1 << MSB);
  N = N ^ (1 << LSB);
  std::cout << N << std::endl;
  return 0;
}
