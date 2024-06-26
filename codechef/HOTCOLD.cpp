#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int C;
    std::cin >> C;
    /*
      ======================================
        Chef considers the climate HOT if
        the temperature is above 20, otherwise
        he considers it COLD. You are given
        temperature C, find whether the
        climate is HOT or COLD.
      ======================================
    */
    std::map<std::string, bool> conditions = {
      { "HOT"   , C > 20  },
      { "COLD"  , C <= 20 }
    };

    std::map<std::string, bool> matching;

    std::copy_if(
      std::begin(conditions),
      std::end(conditions),
      std::inserter(matching, std::end(matching)),
      [] (auto const &condition) { return condition.second == true; }
    );

    for (auto condition : matching) {
      std::cout << condition.first << std::endl;
    }
  }
  return 0;
}
