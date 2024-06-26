#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N, K;
  std::cin >> N >> K;
  /*
    ======================================
      Little girl Tanya is learning how to
      decrease a number by one, but she
      does it wrong with a number consisting
      of two or more digits. Tanya subtracts
      one from a number by the following
      algorithm:

      1. If the last digit of the number is
      non-zero, she decreases the number by 1.
      2. If the last digit of the number is
      zero, she divides the number by 10, or
      in other words, removes the last digit.

      You're given an integer number N. Tanya
      will subtract one from it K times. Your
      task is to print the result after all
      K subtractions. It is guaranteed that
      the result will be a positive integer.
    ======================================
  */
  while (K) { N % 10 == 0 ? N /= 10 : N -= 1; K--; }
  std::cout << N << std::endl;
  return 0;
}
