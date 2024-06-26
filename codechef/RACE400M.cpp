#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Alice, Bob and Charlie participated
        in a 400-metre race. The time taken
        by Alice, Bob and Charlie to complete
        the race was X, Y and Z seconds
        respectively. Note that X, Y and Z are
        distinct. Determine the person having
        the highest average speed in the race.
      ======================================
    */

    std::map<std::string, int> speeds = {
      { "ALICE"  , X },
      { "BOB"    , Y },
      { "CHARLIE", Z }
    };

    auto winner = *std::min_element(std::begin(speeds), std::end(speeds), [] (auto const &a, auto const &b) { return b.second > a.second; });

    std::cout << winner.first << std::endl;
  }
  return 0;
}
