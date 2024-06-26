#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::string S, R;
    std::cin >> N;
    std::cin >> S >> R;
    /*
      ======================================
        Kulyash stays in room that has a single
        bulb and N buttons. The bulb is initially on.

        The initial states of the buttons are
        stored in a binary string S of length
        N — if Si is 0, the i-th button is off,
        and if Si is 1, the i-th button is on. If
        Kulyash toggles any single button then
        the state of the bulb reverses i.e. the
        bulb lights up if it was off and vice versa.

        Kulyash has toggled some buttons and the
        final states of the buttons are stored
        in another binary string R of length N.
        He asks you to determine the final
        state of the bulb.
      ======================================
    */
    int changes = 0;
    for (int i = 0; i < S.size(); i += 1) { if (S[i] != R[i]) changes++;  }
    bool on = changes % 2 == 0;
    std::cout << on << std::endl;
  }
  return 0;
}
