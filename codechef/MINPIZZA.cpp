#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Each pizza has 4 slices. There are N
        friends and each friend needs exactly
        X slices. Find the minimum number of
        pizzas they should order to satisfy
        the appetite.
      ======================================
    */
    int answer = std::ceil(X * N / 4);
    std::cout << answer << std::endl;
  }
  return 0;
}
