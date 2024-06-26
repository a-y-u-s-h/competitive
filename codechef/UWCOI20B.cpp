#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Using his tip-top physique, Kim has
        now climbed up the mountain where the
        base is located. Kim has found the door
        to the (supposedly) super secret base.
        Well, it is super secret, but obviously
        no match for Kim's talents.

        The door is guarded by a row of N buttons.
        Every button has a single number Ai written
        on it. Surprisingly, more than one button
        can have the same number on it. Kim
        recognises this as Soum's VerySafe door,
        for which you need to press two buttons
        to enter the password. More importantly,
        the sum of the two numbers on the buttons
        you press must be odd. Kim can obviously
        break through this door easily, but he
        also wants to know how many different
        pairs of buttons he can pick in order
        to break through the door.

        Can you help Kim find the number of
        different pairs of buttons he can press
        to break through the door?

        Note: Two pairs are considered different
        if any of the buttons pressed in the
        pair is different (by position of the
        button pressed). Two pairs are not
        considered different if they're the
        same position of buttons, pressed
        in a different order.

        Please refer to the samples for more details.
      ======================================
    */
    long long O = std::count_if(std::begin(A), std::end(A), [] (auto const &Ai) { return Ai % 2 == 1; });
    long long E = std::count_if(std::begin(A), std::end(A), [] (auto const &Ai) { return Ai % 2 == 0; });
    long long answer = O * E;
    std::cout << answer << std::endl;
  }
  return 0;
}
