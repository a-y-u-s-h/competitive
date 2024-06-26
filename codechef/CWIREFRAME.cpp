#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, M, X;
    std::cin >> N >> M >> X;
    /*
      ======================================
        Chef has a rectangular plate of length
        Ncm and width Mcm. He wants to make
        a wireframe around the plate. The
        wireframe costs X per cm. Determine
        the cost Chef needs to incur to buy the
        wireframe.
      ======================================
    */
    int answer = 2 * (N + M) * X;
    std::cout << answer << std::endl;
  }
  return 0;
}
