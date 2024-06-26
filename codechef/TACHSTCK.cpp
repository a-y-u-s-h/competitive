#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N, D;
  std::cin >> N >> D;
  std::vector<long long> L;
  for (long long n = 0; n < N; n++) { long long Li; std::cin >> Li; L.push_back(Li); }
  /*
    ======================================
      Actually, the two sticks in a pair of
      chopsticks need not be of the same
      length. A pair of sticks can be used
      to eat as long as the difference in
      their length is at most D. The Chef
      has N sticks in which the ith stick
      is L[i] units long. A stick can't be
      part of more than one pair of chopsticks.
      Help the Chef in pairing up the sticks
      to form the maximum number of usable
      pairs of chopsticks.
    ======================================
  */
  long long pairs = 0;
  std::sort(std::begin(L), std::end(L));
  for (long long i = 0; i < N - 1;) { if (L[i + 1] - L[i] <= D) { pairs++; i += 2; } else { i++; } }
  std::cout << pairs << std::endl;
  return 0;
}
