#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;

    /*
      ======================================
        Chef and Morty are playing a game
        and they have somee rules for scoring
        points. We need to figure out who's
        the winner and what points do they have.
      ======================================
    */

    std::map<std::string, long long> score;

    for (long long i = 0; i < N; i += 1) {
      long long Ai, Bi; std::cin >> Ai >> Bi;
      long long PAi = 0, PBi = 0;
      while (Ai > 0) { PAi += (Ai % 10); Ai /= 10; }
      while (Bi > 0) { PBi += (Bi % 10); Bi /= 10; }
      if (PAi >  PBi) { score["A"]++; }
      if (PAi <  PBi) { score["B"]++; }
      if (PAi == PBi) { score["A"]++; score["B"]++; }
    }

    long long points = score["A"] > score["B"] ? score["A"] : score["B"] > score["A"] ? score["B"] : score["A"];
    std::string winner = score["A"] > score["B"] ? "0" : score["B"] > score["A"] ? "1" : "2";
    std::cout << winner << " " << points << std::endl;

  }
  return 0;
}
