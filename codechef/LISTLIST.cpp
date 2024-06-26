#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A; std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); frequencies[Ai]++; }
    /*
      ======================================
        You're given a positive integer N
        and an array A of size N. There are
        N lists L1, L2, L3...Ln. Initially,
        Li = [Ai]. You can perform the
        following operation any number of times
        as long as there aree at least 2 lists:

        1. Select 2 (non-empty) lists Li and Lj (i != j).
        2. Append Lj to Li and remove list Lj.
           Note that this means Lj cannot be chosen
           in any future operation.

        Find the minimum number of operations
        required to obtain a set of lists that
        satisfies the following conditions:

        1. The 1st & last element of each list are equal.
        2. The first element of all the lists is same.

        Print -1 if it is not possible to achieve
        this via any sequence of operations.
      ======================================
    */

    /*
      ======================================
        Observations:

        1) If all the elements in A are same,
        then 0 operations are needed because
        each list already satisfies the condition.

        2) If all the elements in A are distinct,
        then it is impossible to satisfy
        the conditions since there won't be
        any lists where the first and last
        elements are the same.

        3) For the general case, where there are
        duplicates but not all elements are same:

        3.1) Count the number of frequency of each
             element in array A. The element with
             the highest frequency will be used to
             form the base of required list.

        3.2) Calculate the number of operations
             by maximizing the number of single
             element lists that can be created
             from the most frequent element.
             This will minimize the number of
             operations needed to merge the
             remaining lists.

      ======================================
    */

    bool C0 = frequencies.size() == 1;
    bool Cn = frequencies.size() == N;
    int maximum = (*std::max_element(std::begin(frequencies), std::end(frequencies), [] (auto const &a, auto const &b) { return b.second > a.second; })).second;
    int operations = N - (maximum - 1);
    int answer = C0 ? 0 : (Cn ? -1 : operations);
    std::cout << answer << std::endl;
  }
  return 0;
}
