#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> W;
    for (long long n = 0; n < N; n++) { long long Wi; std::cin >> Wi; W.push_back(Wi); }
    /*
      ======================================
        Chef and his girlfriend are going to
        have a promenade. They are walking
        along the straight road which consists
        of segments placed one by one. Before
        walking Chef and his girlfriend stay
        at the beginning of the first segment,
        they want to achieve the end of the
        last segment. There are few problems:

        1. At the beginning, Chef should choose
        constant integer - the velocity of
        moving. It can't be changed inside one
        segment.

        2. The velocity should be decreased by
        at least 1 after achieving the end of
        some segment.

        3. There is exactly one shop on each
        segment. Each shop has an attractiveness.
        If it's attractiveness is W and Chef
        and his girlfriend move with velocity V,
        then if V < W, girlfriend will run away
        into the shop and the promenade will
        become ruined.

        Chef doesn't want to lose her girl in
        such a way, but he is an old one, so
        you should find the minimum possible
        velocity at the first segment to
        satisfy all conditions.
      ======================================
    */

    long long U = *std::max_element(std::begin(W), std::end(W));
    long long answer = U;
    for (long long i = 0; i < N; i += 1) { if (U - i < W[i]) answer = std::max(answer, W[i] + i); }
    std::cout << answer << std::endl;
  }
  return 0;
}
