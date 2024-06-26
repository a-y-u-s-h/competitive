#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        On every CodeChef user's profile page,
        the list of problems that they have set,
        tested, and written editorials for,
        is listed at the bottom.

        Given the number of problems in each of
        these 3 categories as X, Y, and Z respectively
        (where all three integers are distinct),
        find if the user has been most active
        as a Setter, Tester, or Editorialist.
      ======================================
    */
    std::map<std::string, bool> conditions = {
      { "Setter"      ,  X > Y && X > Z  },
      { "Tester"      ,  Y > X && Y > Z  },
      { "Editorialist",  Z > X && Z > Y  },
    };

    std::map<std::string, bool> filtered;

    std::copy_if(
      std::begin(conditions),
      std::end(conditions),
      std::inserter(filtered, std::end(filtered)),
      [] (auto const &condition) { return condition.second == true; }
    );

    for (auto condition : filtered) {
      std::cout << condition.first << std::endl;
    }
  }
  return 0;
}
