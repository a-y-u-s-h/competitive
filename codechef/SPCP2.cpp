#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float X, N;
    std::cin >> X >> N;
    /*
      ======================================
        An airline operates X aircraft every
        day. Each aircraft can carry up to
        100 passengers. One day, N passengers
        would like to travel to same destination.
        What is the minimum number of new planes
        that the airline must buy to carry all
        N passengers?
      ======================================
    */
    int answer = (N <= X * 100) ? 0 : std::ceil((N - (X * 100)) / 100);
    std::cout << answer << std::endl;
  }
  return 0;
}
