#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Chef wants to cross a hallway of N
        doors. These N doors are represented
        as a string. Each door initially
        is either open or close, represented
        by 1 or 0 respectively. Chef is
        required to go through all the doors
        one by one in order that they appear,
        starting from the leftmost door and
        moving only rightwards at each step.

        To make the journey easier, Chef has
        a magic want, using which Chef can
        flip the status of all the doors at
        once. Determine the minimum number of
        times Chef has to use this want to
        cross the hallway of doors.

        For example, the doors are 10011. Chef
        will start from the left and enter the
        first door. After passing through that
        door, the magic wand is waved. This
        flips the string to 01100. Now Chef
        passes through the next two doors in
        one go. Again, just before reaching
        the 4th door, the magic wand is waved.
        Now that the string is in its original
        state, Chef passes through the last
        two doors as well. The minimum
        number of times the magic wand needed to
        be used here was 2.
      ======================================
    */
    char current = S[0]; int transitions = S[0] == '0' ? 1 : 0;
    for (int i = 1; i < S.size(); i += 1) { if (S[i] != current) { current = S[i]; transitions++; }}
    std::cout << transitions << std::endl;
  }
  return 0;
}
