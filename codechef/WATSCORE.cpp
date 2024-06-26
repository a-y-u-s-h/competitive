#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        Put data related to all submisisons
        in a vector of pairs where the first
        element represents problem number and
        the second one represents the score
        on that problem.
      ======================================
    */

    std::vector<std::pair<int,int>> submissions;

    for (int i = 0; i < N; i += 1) {
      int Pi, Si;
      std::cin >> Pi >> Si;
      submissions.push_back(std::make_pair(Pi, Si));
    }

    /*
      ======================================
        We have another vector that simply
        contains number of all possible problems
        that can arrive as input, we will iterate
        on this and replace it with scores
        associated with each of those problems.
        The index will remain same, so we can
        get the problem number back.
      ======================================
    */
    std::vector<int> problems (11); std::iota(std::begin(problems), std::end(problems), 1);


    /*
      ======================================
        Here, we're iterating over problems,
        for each problem, we want to figure
        out what's the relevant submission
        and for each of those submissions,
        we'll return a score. If the problem
        is not submitted, the score on that
        problem should be zero.
      ======================================
    */
    std::transform(std::begin(problems), std::end(problems), std::begin(problems), [N, submissions](auto const &p) {
      std::vector<std::pair <int, int>> relevant (N); std::copy_if(std::begin(submissions), std::end(submissions), std::inserter(relevant, std::end(relevant)), [p](auto const &submission) { return submission.first == p; });
      auto score = *std::max_element(std::begin(relevant), std::end(relevant), [](auto const &a, auto const &b) { return b.second > a.second; });
      return score.second;
    });

    /*
      ======================================
        The score should be calculated for
        first 8 problems, not the remaining
        ones. The remaining must be
        excluded from total score.
      ======================================
    */
    int answer = std::accumulate(std::begin(problems), std::begin(problems) + 8, 0);

    /*
      ======================================
        Finally, we print out the answer.
      ======================================
    */
    std::cout << answer << std::endl;
  }

  return 0;
}
