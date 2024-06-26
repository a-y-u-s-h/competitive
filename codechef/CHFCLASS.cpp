#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    /*
      ======================================
        Akash loves going to school but not
        on weekends. A week consists of 7
        days, Monday to Sunday. Akash takes
        a leave every Saturday. If a month
        consists of N days and the first day
        of the month is Monday. Find the number
        of days, Akash would take a leave in
        the whole month.
      ======================================
    */
    int answer = (N / 7) + (N % 7 >= 6 ? 1 : 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
