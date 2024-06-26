#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, M, K;
    std::cin >> N >> M >> K;
    /*
      ======================================
        There is a group of N friends who wish
        to enroll in a course together. The
        course has a maximum capacity of M
        students that can register for it. If
        there are K other students who have
        already enrolled in the course, determine
        if it will still be possible for all the
        N friends to do so or not.
      ======================================
    */
    bool condition = (M - K) >= N;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
