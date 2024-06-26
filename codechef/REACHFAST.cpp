#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double X, Y, K;
    std::cin >> X >> Y >> K;
    /*
      ======================================
        Chef is standing at coordinate A while
        Chefina is standing at coordinate B.
        In one step, Chef can increase or
        decrease his coordinate by at most K.
        Determine the minimum number of steps
        required by Chef to reach Chefina.
      ======================================
    */
    int answer = std::ceil(std::abs(X - Y) / K);
    std::cout << answer << std::endl;
  }
  return 0;
}
