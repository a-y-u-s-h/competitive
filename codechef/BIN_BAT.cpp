#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, A, B;
    std::cin >> N >> A >> B;
    /*
      ======================================
        N teams have come to participate in
        a competitive coding event. It is a
        single-elimination tournament consisting
        of several rounds. It is known that
        N is a power of 2.

        In one round, each team will be paired
        up with and compete against one of the
        other teams. If there are X teams before
        the start of a round, (X/2) matches are
        held simultaneously during the round
        between (X/2) pairs of teams. The winning
        team of each match will move on to the
        next round, while the losing team of each
        match will be eliminated. There are no ties
        involved. The next round will then take place
        in the same format between the remaining teams.

        The process will continue until only one
        team remains, which will be declared the
        overall winner. The organizers want to find
        the total time the event will take to
        complete. It is given that each round spans A
        minutes, and that there is a break of B minutes
        between every two rounds (no break after
        the last round).

        Can you help the organizers determine
        how long the event will take to finish?
      ======================================
    */
    int Nr = std::log2(N);
    int answer = (Nr - 1) * B + A * Nr;
    std::cout << answer << std::endl;
  }
  return 0;
}
