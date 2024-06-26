#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      To set a specific bit in a binary
      number, you can use the bitwise OR
      operator. Here's how you can set a
      bit at a particular position:

      number = number | (1 << position)

      To unset (clear) a specific bit in
      the binary number, you can use the
      bitwise AND operator along with
      bitwise NOT operator. Here's how
      you can unset a bit at a particular
      position:

      number = number & ~(1 << position)

      To flip (toggle) a specific bit in
      a binary number, you can use the bitwise
      XOR operator. Here's how you can flip
      a bit at a particular position:

      number = number ^ (1 << position)

      Task:

      Given a number N, perform the following
      operations - set the first bit, unset the
      second bit and flip the third bit from
      the right hand side. Then print the number.
    ======================================
  */

  int N;
  std::cin >> N;

  N = N |  (1 << 0);
  N = N & ~(1 << 1);
  N = N ^  (1 << 2);

  std::cout << N << std::endl;

  return 0;
}
