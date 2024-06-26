#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, H, X;
  std::cin >> N >> H >> X;
  std::vector<int> Z;
  for (int n = 0; n < N; n++) { int Zi; std::cin >> Zi; Z.push_back(Zi); }

  /*
    ======================================
      Only X hours are left for a competition
      to finish. Chef is only left with the
      last problem unsolved. However he is
      sure that he cannot solve the problem
      in the remaining time. From experience,
      he figures out he needs exactly H hours
      to solve the problem.

      Now Chef finally decides to use his
      special power which he has gained through
      years of intense yoga. He can travel
      back in time when he concentrates.
      Specifically, his power allows him to
      travel to N different time zones, which
      are Z1, Z2, Z3...Zn hours respectively
      behind his current time. Find out whether
      Chef can use one of the available time
      zones to solve the problem and submit
      before the contest ends.
    ======================================
  */

  std::string answer = X >= H ? "YES"
                     : std::find_if(std::begin(Z), std::end(Z), [H, X](auto const &Zi) { return Zi >= std::abs(H - X); }) != std::end(Z) ? "YES"
                     : "NO";

  std::cout << answer << std::endl;

  return 0;
}
