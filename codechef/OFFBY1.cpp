#include <iostream>

int main(int argc, char const *argv[]) {
  int A, B;
  std::cin >> A >> B;
  /*
    ======================================
      A calculator has a bug. It appends
      "1" string at the end of sum of
      two numbers. Ex: 3 + 5 becomes 81,
      4 + 12 becomes 161. We need to predict
      what's going to be the output in general.
    ======================================
  */

  printf("%d1\n", A + B);

  return 0;
}
