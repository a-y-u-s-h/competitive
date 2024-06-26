#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Chef has a message, which is a string
        S with length N containing only
        lowercase English letters. It should
        be encoded in two steps as follows:

        1. Swap the first and second character
        of the string S, then swap the 3rd and
        4th character, then the 5th and 6th
        character and so on. If the length of S
        is odd, the last character should not
        be swapped with any other.

        2. Replace each occurence of the letter
        'a' in the message obtained after the
        first step by the letter 'z', each
        occurence of 'b' by 'y', each occurence
        of 'c' by 'x', etc and each occurence
        of 'z' in the message obtained after
        first step by 'a'.

        The string produced in the second step
        is the encoded message. Help Chef and
        find this message.
      ======================================
    */

    std::string solution;

    for (int i = 0; i < N; i += 2) {
      bool swappable = i != N - 1 ? true : N % 2 == 0;
      if (swappable) {
        std::string slice (std::begin(S) + i, std::begin(S) + 2 + i);
        std::reverse(std::begin(slice), std::end(slice));
        solution += slice;
      } else {
        solution += S[i];
      }
    }

    std::transform(std::begin(solution), std::end(solution), std::begin(solution), [](auto const &c) { return 'a' + 'z' - c; });
    std::cout << solution << std::endl;
  }
  return 0;
}
