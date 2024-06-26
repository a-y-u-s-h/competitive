#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    std::vector<int> B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        The most popular feature on snapchat
        is Snapchat Streak. A streak is
        maintained between wto people if both
        of them send at least one snap to
        each other daily. If, on any day, either
        person forgets to send at least one
        snap, the streak breaks and the streak
        count is set to 0.

        Chef and Chefina like maintaining their
        snapchat streak. You observed the snap
        count of both of them for N consecutive
        days. On the i-th day, Chef send Ai snaps
        to Chefina while Chefina sent Bi snaps
        to Chef. Find the maximum streak count
        they achieved those N days.
      ======================================
    */
    int streak = 0; int maximum = 0;
    for (int i = 0; i < N; i += 1) { if (A[i] > 0 && B[i] > 0) { streak++; maximum = std::max(streak, maximum); } else { streak = 0; } }
    std::cout << maximum << std::endl;
  }
  return 0;
}
