#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        A participant can make 1 submission
        every 30 seconds. If a contest test
        for X minutes, what is the maximum
        number of submissions that the
        participant can make during it?
        If is also given that the participant
        cannot make any submission in the last
        5 seconds of the contest.
      ======================================
    */
   int answer = 1 + (((X * 60) - 5) / 30);
   std::cout << answer << std::endl;

  }
  return 0;
}
