#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      When preparing a tournament, Codeforces
      coordinators try treir best to make the
      first problem as easy as possible. This
      time the coordinator had chosen some
      problem and asked N people about their
      opinions. Each person answered whether
      this problem is easy or hard.

      If at least one of these N people has
      answered that the problem is hard,
      the coordinator decides to change
      the problem. For the given responses,
      check if the problem is easy enough.
    ======================================
  */
  bool condition = true; for (int i = 0; i < N; i++) { int Ai; std::cin >> Ai; if (Ai == 1) { condition = false; break; }  }
  std::cout << (condition ? "EASY" : "HARD") << std::endl;
  return 0;
}
