#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;;
    std::cin >> N;
    std::vector<int64_t> S;
    for (int64_t n = 0; n < N; n++) { int64_t Si; std::cin >> Si; S.push_back(Si); }
    /*
      ======================================
        Having already mastered cooking, Chef
        has now decided to learn how to play
        the guitar. Often while trying to play
        a song, Chef has to skip several strings
        to reach the string he has to pluck. Eg.
        he may have to pluck the 1st  string and
        then the 6th  string.

        This is easy in guitars with only 6 strings; but,
        Chef is playing a guitar with 10^6  strings.
        In order to simplify his task, Chef wants
        you to write a program that will tell
        him the total number of strings he has
        to skip while playing his favourite song.
      ======================================
    */

    int64_t answer = 0;
    for (int64_t i = 0; i < N - 2 + 1; i += 1) { answer += std::abs(S[i + 1] - S[i]) - 1; }
    std::cout << answer << std::endl;
  }
  return 0;
}
