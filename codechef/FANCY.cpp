#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  std::cin.ignore(1, '\n');

  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::getline(std::cin, S, '\n');
    /*
      ======================================
        Chef was reading some quotes by great
        people. Now, he is interested in
        classifying all the fancy quotes he
        knows. He thinks that all fancy
        quotes which contain the word "not"
        are "Real Fancy"; quotes that do not
        contain it are "regularly fancy". You're
        given some quotes. For each quote, you
        need to tell Chef if it is Real Fancy
        or just regularly fancy.
      ======================================
    */
    auto RF = std::regex_search(S, std::regex("(^|\\s)not(\\s|$)"));
    std::cout << (RF ? "Real Fancy" : "regularly fancy") << std::endl;
  }
  return 0;
}
