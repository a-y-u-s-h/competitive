#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, A;
    std::cin >> N >> A;
    /*
      ======================================
        There are N people out which A are
        infected. It is observed that the
        only way for a person to get infected
        is if he comes in contact with an
        already infected person, and both
        of them are NOT wearing a mask.

        The mayor of the city wants to make
        a new Mask Policy and find out the
        minimum number of people that will
        be required to wear a mask to avoid
        the further spread of the virus.
        Help the mayor in finding this number.

        Note: The only aim of the mayor is
        to stop virus spread, not to mask
        every infected person.
      ======================================
    */
    int answer = std::min(A, N - A);
    std::cout << answer << std::endl;
  }
  return 0;
}
