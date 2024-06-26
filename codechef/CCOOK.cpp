#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;

  for (int t = 0 ; t < T; t += 1) {

    std::vector<int> A;
    for (int i = 0; i < 5; i++) { int Ai; std::cin >> Ai; A.push_back(Ai); }

    /*
      ======================================
        Chef has obtained results of a past
        cook-off. He wants to estimate the
        skill level of each contestant. The
        contestants can be classified with
        high probability based on the number
        of solved problems. Chef has given
        us labels and conditions for those
        labels and wants us to classify
        contestants based on his criteria.
      ======================================
    */

    int C1 = std::count(std::begin(A), std::end(A), 1);
    std::map<std::string, bool> conditions = {
      { "Beginner"          , C1 == 0 },
      { "Junior Developer"  , C1 == 1 },
      { "Middle Developer"  , C1 == 2 },
      { "Senior Developer"  , C1 == 3 },
      { "Hacker"            , C1 == 4 },
      { "Jeff Dean"         , C1 == 5 }
    };

    auto answer = std::find_if(std::begin(conditions), std::end(conditions), [](auto const &condition) { return condition.second == true; });
    std::cout << answer -> first << std::endl;
  }

  return 0;
}
