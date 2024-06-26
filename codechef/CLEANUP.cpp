#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  assert(T <= 50);

  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    assert(M >= 1 && N >= 1 && M <= 1000 && N <= 1000);
    /*
      ======================================
        After a long and successful day of
        preparing food for the banquet, it is
        time to clean up. There is a list of N
        jobs to do before the kitchen can be
        closed for the night. These jobs are
        indexed from 1 to N.

        Most of the cooks have already left
        and only the Chef and his assistant
        are left to clean up. Thankfully, some
        of the cooks took care of some of the
        jobs before they left so only a subset
        of the N jobs remain. The Chef and his
        assistant divide up the remaining jobs
        in the following manner. The Chef takes
        the unfinished job with least index,
        the assistant takes the unfinished job
        with the second least index, the Chef
        takes the unfinished job with the third
        least index, etc. That is, if the
        unfinished jobs were listed in increasing
        order of their index then the Chef would
        take every other one starting with the
        first job in the list and the assistant
        would take every other one starting
        with the second job on in the list.

        The cooks logged which jobs they
        finished before they left. Unfortunately,
        these jobs were not recorded in
        any particular order. Given an
        unsorted list of finished jobs,
        you are to determine which jobs
        the Chef must complete and which
        jobs his assitant must complete
        before closing the kitchen for the evening.

        N is the total number of jobs that
        must be completed before closing
        and M is the number of jobs that have
        already been completed.
      ======================================
    */
    std::vector<int> jobs (N, 0); std::set<int> C, A;
    for (int m = 0; m < M; m++) { int Fi; std::cin >> Fi; jobs[Fi - 1] = 1; }
    for (int n = 0, steps = 0; n < N; n++) { if (jobs[n] == 0) { if (steps % 2 == 0) { C.insert(n + 1); steps++; } else { A.insert(n + 1); steps++; } }}
    if (C.size() > 0) { for (auto const &job : C) { std::cout << job << " "; } } else { std::cout << -1; } std::cout << std::endl;
    if (A.size() > 0) { for (auto const &job : A) { std::cout << job << " "; } } else { std::cout << -1; } std::cout << std::endl;
  }

  return 0;
}
