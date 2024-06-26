#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> S;
    for (int n = 0; n < N; n++) { int Si; std::cin >> Si; S.push_back(Si); }

    /*
      ======================================
        In the bustling CodeChef office, the
        entrance is equipped with a high-tech
        card swipe system. Each employee is
        assigned a unique ID card that they
        use to swipe in and out of the building.

        The system records every swipe, capturing
        the first swipe of an ID as in, second as
        out, third as in, and so on. Given an array
        A consisting of N IDs denoting N swipes
        throughout the day, find the maximum number
        of people in the office at any time.

        Note that there is nobody inside the
        office before the first swipe.
      ======================================
    */

    std::map<int, bool> office;
    int answer = 0;

    for (auto Si = std::begin(S); Si != std::end(S); Si += 1) {
      office.count(*Si) ? office.erase(*Si) : office[*Si] = true;
      int present = office.size();
      if (answer < present) answer = present;
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
