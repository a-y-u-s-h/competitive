#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Linear Kingdom has exactly one tram
      line. It has n stops, numbered from
      1 to n in the order of tram's movement.
      At the i-th stop ai passengers exit
      the tram, while bi passengers enter it.

      The tram is empty before it arrives at
      the first stop. Also, when the tram
      arrives at the last stop, all passengers
      exit so that it becomes empty.

      Your task is to calculate the tram's
      minimum capacity such that the number
      of people inside the tram at any time
      never exceeds this capacity. Note that
      at each stop all exiting passengers
      exit before any entering passenger
      enters the tram.
    ======================================
  */
  long long maximum = 0, total = 0;
  for (int n = 0; n < N; n++) { int Ai, Bi; std::cin >> Ai >> Bi; total += (Bi - Ai); maximum = std::max(maximum, total); }
  std::cout << maximum << std::endl;
  return 0;
}
