#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, Y;
    std::cin >> N >> X >> Y;
    /*
      ======================================
        There are N problems, each carry X
        marks. In each problem, Chef either
        received X marks or 0 marks. Determine
        whether it is possible for Chef to
        achieve exactly Y marks.
      ======================================
    */
    bool condition = (Y / X <= N) && (Y % X == 0);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
