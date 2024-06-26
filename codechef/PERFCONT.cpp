#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, P;
    std::cin >> N >> P;
    std::vector<int> C;
    for (int n = 0; n < N; n++) { int Ci; std::cin >> Ci; C.push_back(Ci); }
    /*
      ======================================
        Chef wants to organize a contest.
        Predicting difficulty levels of the
        problems can be a daunting task.
        Chef wants his contests to be
        balanced in terms of difficulty
        levels of the problems.

        Assume a contest had total P
        participants. A problem that was
        solved by at least half of the
        participants (i.e. P / 2 (integer division))
        is said to be cakewalk difficulty.
        A problem solved by at max P / 10
        (integer division) participants is
        categorized to be a hard difficulty.

        Chef wants the contest to be balanced.
        According to him, a balanced contest must
        have exactly 1 cakewalk and exactly 2 hard
        problems. You are given the description of
        N problems and the number of participants
        solving those problems. Can you tell whether
        the contest was balanced or not?
      ======================================
    */
    int Cc = std::count_if(std::begin(C), std::end(C), [P](auto const &solvers) { return solvers >= P / 2; });
    int Ch = std::count_if(std::begin(C), std::end(C), [P](auto const &solvers) { return solvers <= P / 10; });
    bool condition = Cc == 1 && Ch == 2;
    std::cout << (condition ? "yes" : "no") << std::endl;
  }
  return 0;
}
