#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A1, A2, A3;
    int B1, B2, B3;
    std::cin >> A1 >> A2 >> A3;
    std::cin >> B1 >> B2 >> B3;
    /*
      ======================================
        For this problem, the problem statement
        simply asks to check whether counts of
        1s and 0s in old saint's actual answers
        to the questions (A1, A2, A3) are equal to
        counts of 1s and 0s in the answers given by
        the Hero. Hero will pass if those counts are
        same, because the old saint only remembers how
        many 1s and 0s were there in actual answers.

        Ca1 = count of 1s in actual answers.
        Ca0 = count of 0s in actual answers.
        Cg1 = count of 1s in given answers.
        Cg0 = count of 0s in given answers.
      ======================================
    */
    std::vector<int> actual = {A1, A2, A3};
    std::vector<int> given = {B1, B2, B3};
    int Ca1 = std::count(begin(actual), end(actual), 1);
    int Ca0 = std::count(begin(actual), end(actual), 0);
    int Cg1 = std::count(begin(given), end(given), 1);
    int Cg0 = std::count(begin(given), end(given), 0);
    bool passed = Ca1 == Cg1 && Ca0 == Cg0;
    std::cout << (passed ? "Pass" : "Fail") << std::endl;
  }
  return 0;
}
