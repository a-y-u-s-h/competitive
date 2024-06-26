#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::vector<int> S, J;
    std::cin >> N;

    /*
      ======================================
        You have been recently hired as a
        developer in CodeChef. Your first
        mission is to implement a feature
        that will determine the number of
        submissions that were judged late
        in a contest.

        There are N submissions, numbered 1
        through N. For each valid i, the
        i-th submission was submitted at time
        Si and judged at time Ji (in minutes).
        Submitting and judging both take zero
        time. Please determine how many submissions
        received their verdicts after a delay
        of more than 5 minutes.
      ======================================
    */
    int answer = 0;

    for (int n = 0; n < N; n++) {
      int Si, Ji;
      std::cin >> Si;
      std::cin >> Ji;
      S.push_back(Si);
      J.push_back(Ji);
      if (Ji - Si > 5) answer += 1;
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
