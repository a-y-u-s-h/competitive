#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N, K;
    std::cin >> N >> K;
    std::vector<int64_t> A;
    for (int64_t n = 0; n < N; n++) { int64_t Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef decided to go on a diet during
        the following N days (1..N). Part of
        the diet is to eat K grams of protein
        during each day. For each valid i,
        Chef wants to buy Ai grams of protein
        in the morning of the ith day and then
        eaat K grams of protein as his dinner.
        If he has any protein remaining, he can
        store it and use it in later dinners.
        Initially Chef is storing 0 grams of
        protein.

        Determine whether Chef will have
        enough protein all the time during
        his diet. In case he will not have
        enoguh, find the first day on
        which Chef will be unable to eat K grams
        of protein.
      ======================================
    */
    std::transform(std::begin(A), std::end(A), std::begin(A), [K](auto const &Ai) { return Ai - K; });

    int day = 0;
    for (int i = 0; i < N; i += 1) { if (std::accumulate(std::begin(A), std::begin(A) + i + 1, 0) < 0) { day = i + 1; break; } }
    if (day == 0) std::cout << "YES" << std::endl;
    if (day >  0) std::cout << "NO " << day << std::endl;
  }
  return 0;
}
