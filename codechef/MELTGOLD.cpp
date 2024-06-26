#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef ha an ore with melting point of
        X degrees. Chef's kiln has an initial
        temperature of Y degrees. The temperature
        of kiln increases by i degrees after ith
        minute. Find the minimum time in minutes
        after which the ore starts melting.
      ======================================
    */
    int answer = 0;
    if (Y < X) { while(answer * (answer + 1) < 2 * (X - Y)) { answer += 1; }; }
    std::cout << answer << std::endl;
  }
  return 0;
}
