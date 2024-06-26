#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        One day, Saeed was teaching a string
        compression algorithm. This algorithm
        finds all maximal substrings which
        contains only one character repeated
        one or more times (a substring is
        maximal if we cannot add one character
        to its left or right without breaking
        this property) and replaces each
        such substring by the string "cK", where
        K is the length of the substring and c
        is the only character it contains. For
        example, "aabaaa" is compressed to "a2b1a3".

        Saeed wanted to check if the students
        understood the algorithm, so he wrote
        a stirng S on the board and asked the
        students if the algorithm is effective
        on S, i.e. if the string created by
        compressing S is strictly shorter than S.
        Help them answer this question.
      ======================================
    */

    char current = S[0]; int count = 0; std::string output;

    for (int i = 0; i < S.size(); i += 1) {
      if (S[i] == current) { count++; }
      if (S[i] != current) { output += std::string() + current + std::to_string(count); current = S[i]; count = 1; }
      if (i == S.size() - 1) { output += std::string() + current + std::to_string(count); }
    }

    bool condition = output.size() < S.size();
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
