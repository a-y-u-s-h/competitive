#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string A, B;
    std::cin >> A;
    std::cin >> B;
    /*
      ======================================
        As we all know, Chef is cooking string
        for long days, his new discovery on
        string is the longest common pattern
        length. The longest common pattern length
        between two strings is the maximum number
        of characters that both strings have in
        common. Characters are case sensitive,
        that is, lower case and upper case
        characters are considered as different.

        Note that characters can repeat in a
        string and a character might have one
        or more occurrence in common between
        two strings. For example, if Chef has
        two strings A = "Codechef" and B = "elfedcc",
        then the longest common pattern length
        of A and B is 5 (common characters are
        c, d, e, e, f).

        Chef wants to test you with the problem
        described above. He will give you two
        strings of Latin alphabets and digits,
        return him the longest common pattern length.
      ======================================
    */
    std::map<char, int> Fa, Fb; int answer = 0;
    for (auto a = std::begin(A); a != std::end(A); a += 1) { Fa[*a]++; }
    for (auto b = std::begin(B); b != std::end(B); b += 1) { Fb[*b]++; }
    for (auto const &[Ai, Cai]: Fa) { for (auto const &[Bi, Cbi]: Fb) { if (Ai == Bi) { answer += std::min(Cai, Cbi); }}}
    std::cout << answer << std::endl;

  }
  return 0;
}
