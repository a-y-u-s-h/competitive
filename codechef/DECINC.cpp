#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      If N is divisible by 4, then we need
      to increment its value by 1 otherwise
      we need to decrement its value by 1.
    ======================================
  */
  N % 4 == 0 ? N++ : N--;
  std::cout << N << std::endl;
  return 0;
}
