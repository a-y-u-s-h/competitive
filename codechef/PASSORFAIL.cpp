#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, P;
    std::cin >> N >> X >> P;
    /*
      ======================================
        Chef is struggling to pass a certain
        college course. The test has a total
        of N questions, each question carries
        3 marks for a correct answer and -1
        for an incorrect answer. Chef is a risk
        averse person so he decided to attempt
        all the questions. It is known that Chef
        got X questions correct and the rest
        of them incorrect. For Chef to pass the
        course he must score at least P marks.
        Will Chef be able to pass the exam or not?
      ======================================
    */
    bool condition = (3 * X - (N - X)) >= P;
    std::cout << (condition ? "PASS" : "FAIL") << std::endl;
  }
  return 0;
}
