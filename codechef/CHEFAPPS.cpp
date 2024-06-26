#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int S, X, Y, Z;
    std::cin >> S >> X >> Y >> Z;
    /*
      ======================================
        Chef's phone has a total storage of
        S mb. Also, Chef has 2 apps already
        installed on his phone which occupy
        X mb and Y mb respectivley. He wants
        to install another app on his phone
        whose memory requirement is Z mb.
        For this he might have to delete the
        apps already installed on his phone.
        Determine the minimum number of apps he has to
        delete from his phone so that he
        has enough memory to install the 3rd app.
      ======================================
    */
    int answer = (Z <= S - X - Y)                   ? 0
               : (S - X - Z >= 0 || S - Y - Z >= 0) ? 1
               : (Z - Z >= 0)                       ? 2
               : -1;
    std::cout << answer << std::endl;
  }
  return 0;
}
