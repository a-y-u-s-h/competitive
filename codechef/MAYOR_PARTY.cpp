#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int Pa, Pb, Pc;
    std::cin >> Pa >> Pb >> Pc;
    /*
      ======================================
        There are 3 distinct regions in a
        city namely A, B and C comprising of
        Pa, Pb and Pc number of people respec-
        -tively. However, people of region B
        are in conflict with people of regions
        A and C. And So, there will be a conflict
        if people from region B are present at
        the party along with people from A or C.
        Mayor wants to invite as many people as
        possible and also avoid any conflicts.
        Help him invite maximum number of people
        to the party.
      ======================================
    */
    int answer = Pa + Pc >= Pb ? Pa + Pc : Pb;
    std::cout << answer << std::endl;
  }
  return 0;
}
