#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      N is the number of rounds two players
      played. For every round we get their scores -
      Si, Ti. The rules of determining a winner
      is as follows -

      1. For every round, the difference between
      cumulative scores (including scores from the previous rounds)
      gives you the lead for that round.

      2. Among all rounds, you need to find the maximum
      lead obtained by a player, that player will be the
      winner W (1 or 2), and their lead will be L.
      Output will be a single line containing W and L.
    ======================================
  */
  int N;
  std::cin >> N;
  std::vector<int> S, T;

  for (int i = 0; i < N; i += 1) {
    int Si, Ti;
    std::cin >> Si >> Ti;
    S.push_back(Si);
    T.push_back(Ti);
  }

  /*
    ======================================
      At this point, we have all scores.
      We need to find the cumulative sum
      of their scores and then the differences
      between cumulative sums of each round.
      You also need to resize vectors below
      to what they'll eventually be.
    ======================================
  */
  std::vector<int> Cs, Ct;
  std::vector<int> differences;

  Cs.resize(N);
  Ct.resize(N);
  differences.resize(N);

  std::partial_sum(std::begin(S), std::end(S), std::begin(Cs), std::plus<int>());
  std::partial_sum(std::begin(T), std::end(T), std::begin(Ct), std::plus<int>());
  std::transform(Cs.begin(), Cs.end(), Ct.begin(), differences.begin(), std::minus<int>());

  /*
    ======================================
      Differences could be both positive
      or negative. If absolute value of
      maximum number is greater than absolute
      value of minimum number, then player 1
      is the winner and lead is absolute value
      of whichever has a greater modulus.
    ======================================
  */
  int W, L;
  int max = *std::max_element(differences.begin(), differences.end());
  int min = *std::min_element(differences.begin(), differences.end());
  if (std::abs(max) > std::abs(min)) W = 1, L = std::abs(max);
  if (std::abs(max) < std::abs(min)) W = 2, L = std::abs(min);
  std::cout << W << " " << L << std::endl;

  return 0;
}
