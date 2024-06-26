#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, K;
    std::cin >> N >> K;
    /*
      ======================================
        Finally, college has started calling
        students back to campus. There are so
        many students and thus due to some
        safety measures the college can't call
        back all the students on the same day.
        It currently has the capacity of
        screening K students on a single day.
        There is a total of N students. What's
        the minimum number of days required
        for all the students to get back?
      ======================================
    */
    int answer = std::ceil(N / K);
    std::cout << answer << std::endl;
  }
  return 0;
}
