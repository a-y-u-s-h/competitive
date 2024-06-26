#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Chef is confused by all the different
        formats dates can be written in. Here's
        a simple problem Chef wants you to solve.

        You're given a date string S. The date
        follows the "Gregorian Calendar", the
        one used in most parts of the world.
        Identify, whether it is of the form
        DD/MM/YYYY or MM/DD/YYYY or if it can
        be of both forms. Here DD denotes the
        2 digit day, MM denotes the 2 digit month
        and YYYY denotes the 4 digit year.

        It is guaranteed that S is a valid date
        taking at least one of those forms.
      ======================================
    */
    /*
      ======================================
        Let the string be of the form:
        AA/BB/CCCC. Then, we need to first
        extract out those substrings AA, BB
        and CCCC and then, convert it to
        integers and check whether they're
        all valid.
      ======================================
    */
    int AA   = std::stoi(S.substr(0, 2));
    int BB   = std::stoi(S.substr(3, 2));
    int CCCC = std::stoi(S.substr(6, 4));

    bool DDMMYYYY = AA == std::clamp(AA, 0, 31) && BB == std::clamp(BB, 1, 12);
    bool MMDDYYYY = BB == std::clamp(BB, 0, 31) && AA == std::clamp(AA, 1, 12);

    std::string answer = ( DDMMYYYY && !MMDDYYYY) ? "DD/MM/YYYY"
                       : (!DDMMYYYY &&  MMDDYYYY) ? "MM/DD/YYYY"
                       : ( DDMMYYYY &&  MMDDYYYY) ? "BOTH"
                       : "NEITHER";

    std::cout << answer << std::endl;
  }
  return 0;
}
