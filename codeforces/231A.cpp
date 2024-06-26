#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;

  int answer = 0;
  for (int n = 0; n < N; n += 1) {
    int P, V, T;
    std::cin >> P >> V >> T;
    /*
      ======================================
        P, V and T are either 0 or 1 and they
        denote whether or not Petya, Vasya
        or Tonya think that they are sure about
        a problem's solution or not (1 = positive).
        They will implement the solution if
        at least two of them are sure about the
        solution, otherwise they won't write
        the problem's solution. Determine whether
        or not they will write the solution.
      ======================================
    */
    std::vector<int> confidence = { P, V, T };
    int C1 = std::count(begin(confidence), end(confidence), 1);
    answer += C1 >= 2 ? 1 : 0;
  }
  std::cout << answer << std::endl;
  return 0;
}
