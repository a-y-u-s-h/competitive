#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;

    /*
      ======================================
        Two sisters, A and B, play the piano
        every day. During the day, they can
        play in any order. That is, A might
        play first and then B, or it could
        be B first and then A. But each one
        of them plays the piano exactly once
        per day. They maintain a common log,
        in which they write their name
        whenever they play.

        You are given the entries of the log,
        but you're not sure if it has been
        tampered with or not. Your task is
        to figure out whether these entries
        could be valid or not.
      ======================================
    */


    bool valid = true;

    for (int i = 0; i < S.size(); i += 2) {
      std::string slice (std::begin(S) + i, std::begin(S) + i + 2);
      bool condition = slice == "AB" || slice == "BA";
      if (!condition) { valid = false; break; }
    }

    std::cout << (valid ? "yes" : "no") << std::endl;
  }
  return 0;
}
