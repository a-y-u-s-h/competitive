#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {

    std::map<std::string, int> scores = {
      { "RealMadrid",  0 },
      { "Malaga"    ,  0 },
      { "Barcelona" ,  0 },
      { "Eibar"     ,  0 }
    };

    for (int i = 0; i < 4; i += 1) {
      std::string label; int score;
      std::cin >> label;
      std::cin >> score;
      scores[label] = score;
    }

    /*
      ======================================
        Today is the final round of La Liga,
        the most popular professional football
        league in the world. Real Madrid is
        playing against Malaga and Barcelona
        is playing against Eibar. These two
        matches will decide who wins the league
        title. Real Madrid is already 3 points
        ahead of Barcelona in the league standings.

        In fact, Real Madrid will win the league
        title, except for one scenario: If Real
        Madrid loses against Malaga, and Barcelona
        wins against Eibar, then the La Liga title
        will go to Barcelona. In any other combination
        of results, Real Madrid will win the title.

        You will be given multiple scenarios for
        these two games, where in each one you
        will be given the number of goals each
        team scored in their respective match.
        A team wins a match if it scores more
        than the opponent. In case they score
        the same number of goals, it's a draw.
        Otherwise, the team loses the game. You
        are asked to tell the winner of the La
        Liga title in each scenario.

        Each test case is a scenario where you
        are given labels (names) & scores
        of different teams.
      ======================================
    */

   bool B = (scores["RealMadrid"] < scores["Malaga"]) && (scores["Barcelona"] > scores["Eibar"]);
   std::string answer = B ? "Barcelona" : "RealMadrid";
   std::cout << answer << std::endl;

  }
  return 0;
}
