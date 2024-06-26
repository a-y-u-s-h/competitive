#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, K;
    std::cin >> N >> X >> K;
    /*
      ======================================
        Chef has N empty bottles where each
        bottle has a capacity of X litres.
        There is a water tank in Chefland
        having K litres of water. Chef wants
        to fill the empty bottles using the
        water in the tank. Assuming that Chef
        does not spill any water while filling
        the bottles, find out the maximum
        number of bottles Chef can fill completely.
      ======================================
    */
    int answer = N > K / X ? K / X : N;
    std::cout << answer << std::endl;
  }
  return 0;
}
