#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Chef has N candies. He has to distribute
        them to exactly M of his friends such
        that each friend gets equal number of
        candies and each friend gets even number
        of candies. Determine whether it is
        possible to do so. Chef will not take
        any candies himself and will distribute
        all the candies.
      ======================================
    */
    bool condition = N % M == 0 && (N / M) % 2 == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
