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
        Codechef offers a feature called streak
        count. A streak is maintained if you
        solve at least one problem daily.
        Om and Addy actively maintain their
        streaks on Codechef. Over a span of N
        consecutive days, you have observed
        the count of problems solved by each
        of them.

        Your task is to determine the maximum
        streak achieved by Om and Addy and
        find who had the longer maximum streak.
      ======================================
    */
    int Sa = 0, Sb = 0; int Ma = 0, Mb = 0;

    for (int i = 0; i < N; i += 1) {
      if (A[i] >  0) { Sa++; Ma = std::max(Ma, Sa); }
      if (A[i] == 0) { Sa = 0; }
      if (B[i] >  0) { Sb++; Mb = std::max(Mb, Sb); }
      if (B[i] == 0) { Sb = 0; }
    }

    std::string answer = Ma > Mb  ? "OM"
                       : Mb > Ma  ? "ADDY"
                       : Ma == Mb ? "DRAW" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
