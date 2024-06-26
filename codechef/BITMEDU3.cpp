#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Input 3 numbers N, L, and R from user.
      First, right shift N by R positions,
      and then left-shift it by L positions.
      Print the final result.
    ======================================
  */
  int N, L, R;
  std::cin >> N >> L >> R;
  std::cout << ((N >> R) << L) << std::endl;
  return 0;
}
