#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, L, X;
    std::cin >> N >> L >> X;
    /*
      ======================================
        Chef has N slippers, L of which are
        left slippers and the rest are right
        slippers. Slippers must always be sold
        in pairs, where each pair contains one
        left and one right slipper. If each pair
        of slipper costs X rupees, what is the
        maximum number of rupees that Chef can
        get for these slippers?
      ======================================
    */
    int answer = X * (L < (N - L) ? L : N - L);
    std::cout << answer << std::endl;
  }
  return 0;
}
