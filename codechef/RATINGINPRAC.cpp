#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> R;
    for (int n = 0; n < N; n++) { int Ri; std::cin >> Ri; R.push_back(Ri); }
    /*
      ======================================
        Our Chef has some students in his
        coding class who are practicing problems.
        Given the difficulty of the problems
        that the students have solved in order,
        help the Chef identify if they are
        solving them in non-decreasing order
        of difficulty. Non-decreasing means that
        the values in an array is either increasing
        or remaining the same, but not decreasing.

        That is, the students should not solve
        a problem with difficulty d1, and then
        later a problem with difficulty d2, where
        d1 > d2.

        Output “Yes” if the problems are attempted
        in non-decreasing order of difficulty
        rating and “No” if not.
      ======================================
    */
    bool condition = std::is_sorted(std::begin(R), std::end(R));
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
