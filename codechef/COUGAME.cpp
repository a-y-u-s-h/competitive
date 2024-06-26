#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int G, B;
    std::cin >> G >> B;
    /*
      ======================================
        There are G girls and B boy students
        such that B > G. If ICM were a team
        game where teams could only be of size
        2, having exactly 1 girl student
        and 1 boy student, what would be
        the minimum number of boy students
        who would not be able to participate.
      ======================================
    */
    int answer = B - G;
    std::cout << answer << std::endl;
  }
  return 0;
}
