#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int P, Q;
    std::cin >> P >> Q;
    /*
      ======================================
        Alice and Bob are playing a game of
        table tennis where irrespective of the
        point scored, every player makes 2
        consecutive serves before the service
        changes. Alice makes the first serve
        of the match. Therefore the first 2
        serves will be made by Alice, then
        the next 2 serves will be made by
        Bob and so on.

        After the score reaches P and Q for
        Alice and Bob respectively, both players
        forgot whose serve it is. Help them
        determine whose service it is.
      ======================================
    */
    std::string answer = ((P + Q) / 2) % 2 == 0 ? "ALICE"
                       : ((P + Q) / 2) % 2 == 1 ? "BOB" : "";
    std::cout << answer << std::endl;
  }
  return 0;
}
