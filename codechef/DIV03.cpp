#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    /*
      ======================================
        First line contains 10 space separated
        integers and second line contains a
        number K.
      ======================================
    */
    int K, N = 10;
    std::vector<int64_t> contest;
    for (int i = 0; i < N; i += 1) {
      /*
        ======================================
          Problem says that there's some guy
          who is always busy creating contest problems.
          Chef assigns each problem some difficulty
          - which is an integer between 1 and 10,
          both inclusive. For each valid i, there
          are Ai problems with some difficulty i.
        ======================================
      */
      int64_t Ai;
      std::cin >> Ai;
      contest.push_back(Ai);
    }
    std::cin >> K;
    /*
      ======================================
        Some hacker got hold of the account and
        he can delete upto K problems from document
        in order to reduce the difficulty of contest
        for himself and his friends.
        We need to find the smallest possible value
        of the difficulty of the most difficult problem
        which remains after removing K.

        'contest' is a huge vector representing
        difficulties of all problems in the contest.
        We simply remove as much as we can from the back
        and return the last element of what remains in
        the contest.
      ======================================
    */
    int64_t answer;

    for (int i = contest.size() - 1; i >= 0; i -= 1) {
      int64_t difficulty = i + 1;
      int64_t problems = contest[i];
      /*
        ======================================
          We update K = K - problems.
          If K is greater than or equal to zero,
          it means that we haven't fully exhausted K,
          so we proceed to next loop, until we find negative
          K. Negative K would mean that we've found the
          problem difficulty that'll remain.
        ======================================
      */
      K = K - problems;
      if (K >= 0) continue;
      if (K < 0) {
        answer = difficulty;
        break;
      };
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
