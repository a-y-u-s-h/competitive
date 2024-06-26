#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int X, N, M;
  std::cin >> X >> N >> M;
  /*
    ======================================
      Chef has Rs. X. He wants to gift a
      laptop worth Rs. N to his girlfriend.
      Chef has access to some club's funds,
      which has Rs. M in it and he can use
      them as much as he wants. Find whether
      Chef can figt his girlfriend a new laptop.
    ======================================
  */
  bool condition = (X  + M) >= N;
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
