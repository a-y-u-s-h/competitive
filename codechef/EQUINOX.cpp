#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, A, B;
    std::cin >> N >> A >> B;
    std::vector<std::string> S;
    /*
      ======================================
        Sarthak and Anuradha are very good
        friends and are eager to participate
        in an event called Equinox. It is
        a game of words. In this game, N strings
        S1, S2, ...Sn are given. For each string
        Si, if it starts with one of the letters
        of the word "EQUINOX", Sarthak gets A
        points and if not, Anuradha gets B points.
        The one who has more points at the
        end of the game wins. If they both get
        the same number of points, the game is draw.
        Print the winner and if draw, print "DRAW".
      ======================================
    */
    std::vector<char> equinox = { 'E', 'Q', 'U', 'I', 'N', 'O', 'X' };
    std::map<std::string, long long> scoresheet = {{ "SARTHAK", 0 }, { "ANURADHA", 0 }};
    auto present = [equinox] (std::string s) { return std::find(std::begin(equinox), std::end(equinox), s.front()) != std::end(equinox); };
    for (long long n = 0; n < N; n += 1) { std::string Si; std::cin >> Si; if (present(Si)) { scoresheet["SARTHAK"] += A; } else { scoresheet["ANURADHA"] += B; }  }

    std::string winner = scoresheet["SARTHAK"] == scoresheet["ANURADHA"] ? "DRAW"
                       : scoresheet["SARTHAK"] >  scoresheet["ANURADHA"] ? "SARTHAK"
                       : scoresheet["SARTHAK"] <  scoresheet["ANURADHA"] ? "ANURADHA": "";

    std::cout << winner << std::endl;
  }
  return 0;
}
