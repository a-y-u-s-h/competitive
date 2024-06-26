#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int TC;
  std::cin >> TC;
  for (int tc = 0 ; tc < TC; tc += 1) {
    int N, K;
    std::cin >> N >> K;

    /*
      ======================================
        Chef has recently got a broadband
        internet connection. His history of
        internet data usage is provided as below.

        During the first T1 minutes, the internet
        data used was D1 MBs per minute, and during
        the next T2 minutes, it was D2 MBs per minute,
        and so on till during last TN minutes it
        was DN MBs per minute.

        The internet provider charges the Chef 1
        dollar for every 1 MB data used, except
        for the first K minutes, when the internet
        data is free as part of the plan provided
        to Chef.

        Please find out the total amount that
        Chef has to pay the internet provider
        (in dollars).
      ======================================
    */

    int charges = 0;

    for (int i = 0; i < N; i += 1) {
      int Ti, Di, Tik;
      std::cin >> Ti >> Di;
      Tik = Ti > K ? Ti - K : 0;
      K  = Ti > K ? 0 : K - Ti;
      charges += Di * Tik;
    }

    std::cout << charges << std::endl;

  }
  return 0;
}
