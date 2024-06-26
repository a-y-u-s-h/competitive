#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> An;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; An.push_back(Ai); }

    /*
      ======================================
        There are initially X people in
        a room. You're given an array A of
        length N which decribes the following
        events, like so:

        If Ai >= 0, then Ai people enter the
        room at i-th minute. For e.g. If A2 = 3,
        then 3 people enter the room at the 2nd
        minute.

        If Ai < 0, then |Ai| people leave the
        room at i-th minute. Here |Ai| denotes
        the absolute value of Ai. For example:
        if A4 = -2, then 2 people leave the room
        at the 4th minute.

        Determine the maximum number of people
        in the room at any moment of time.
      ======================================
    */

    int answer  = X;
    int present = X;

    for (auto Ai = std::begin(An); Ai != std::end(An); Ai += 1) {
      present += *Ai;
      if (present > answer) answer = present;
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
