#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::map<long long, long long> X, Y;
    for (long long n = 0; n < N; n++) { long long Xi, Yi; std::cin >> Xi >> Yi; X[Xi]++; Y[Yi]++; }
    /*
      ======================================
        Given N points of the form (Xi, Yi)
        on a 2D plane. From each point, you
        draw 2 lines one horizontal and one
        vertical. Now some of the lines may
        overlap each other, therefore you
        are required to print the number of
        distinct lines you can see on the plane.
      ======================================
    */
    long long answer = X.size() + Y.size();
    std::cout << answer << std::endl;
  }
  return 0;
}
