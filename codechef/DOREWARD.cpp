#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Ranges and Labels are given for blood
        donors. If the donation number is X:
        1. If X <= 3          , medal = BRONZE.
        2. If X > 3 && X <= 6 , medal = SILVER.
        3. If X > 6           , medal = GOLD.
        Find out the badge that a person donating
        X will receive.

        An easier way to describe several conditions
        and find out one label depending on value
        would be to make a map of labels and conditions
        and then find the element based on a value.
        When multiple conditions are true, we can
        iterate over each one of them and do things
        with them.
      ======================================
    */

    std::map<std::string, bool> conditions = {
      { "BRONZE", X <= 3          },
      { "SILVER", X > 3 && X <= 6 },
      { "GOLD"  , X > 6           },
    };

    std::map<std::string, bool> filtered;

    std::copy_if(
      std::begin(conditions),
      std::end(conditions),
      std::inserter(filtered, std::end(filtered)),
      [] (auto const &pair) { return pair.second == true; }
    );

    for (auto condition : filtered) {
      std::cout << condition.first << std::endl;
    }
  }
  return 0;
}
