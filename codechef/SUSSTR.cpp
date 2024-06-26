#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::deque<char> S;
    while (N--) { char letter; std::cin >> letter; S.push_back(letter); }

    /*
      ======================================
        Alice and Bob are playing a game
        with a binary string S of length N
        and an empty string T. They both
        take turns and Alice plays first.

        1) In Alice's turn, she picks the
           first character of string S, appends
           the character to either the front
           of back of the string T and
           deletes the chosen character from
           string S.

        2) In Bob's turn, he picks the last
           character of string S, appends the
           character to either the front or back
           of string T and deletes the chosen
           character from the string S.

        The game stops when S becomes empty.
        Alice wants the resultant string T
        to be lexicographically smallest, while
        Bob wants the resultant string T to
        be lexicographically largest possible.

        Find the resultant string T, if both
        of them play optimally.
      ======================================
    */

    int turn = 0; std::deque<char> R;

    while (S.size() > 0) {
      if (turn % 2 == 0) {
        char letter = S.front(); S.pop_front();
        if (letter == '1') { R.push_back(letter); }
        if (letter == '0') { R.push_front(letter); }
      } else {
        char letter = S.back(); S.pop_back();
        if (letter == '1') { R.push_front(letter); }
        if (letter == '0') { R.push_back(letter); }
      }
      turn++;
    }

    for (auto const &letter : R) { std::cout << letter; } std::cout << std::endl;


  }
  return 0;
}
