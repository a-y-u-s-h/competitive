#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int Xa, Xb, Xc;
    std::cin >> Xa >> Xb >> Xc;
    /*
      ======================================
        Labels and conditions are given to us.
        We need to print out the label if the
        condition corresponding to it is met.
      ======================================
    */
    std::map<std::string, bool> conditions = {
      { "A"     , Xa > 50 },
      { "B"     , Xb > 50 },
      { "C"     , Xc > 50 },
      { "NOTA"  , Xa <= 50 && Xb <= 50 && Xc <= 50 }
    };

    auto answer = std::find_if(std::begin(conditions), std::end(conditions), [](auto const &condition) { return condition.second == true; });
    std::cout << answer -> first << std::endl;
  }
  return 0;
}
