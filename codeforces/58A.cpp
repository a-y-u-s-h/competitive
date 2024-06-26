#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      Vasya has recently learned to type
      and log on to the Internet. He
      immediately entered a chat room and
      decided to say hello to everybody.

      Vasya typed the word S. It is considered
      that Vasya managed to say hello if
      several letters can be deleted from
      the typed word so that it resulted in
      the word "hello". For example, if Vasya
      types the word "ahhellllloou", it will
      be considered that he said hello, and
      if he types "hlelo", it will be considered
      that Vasya got misunderstood and he
      didn't manage to say hello. Determine
      whether Vasya managed to say hello
      by the given word s.
    ======================================
  */
  std::vector<char> message = { 'h', 'e', 'l', 'l', 'o' };
  std::stack<char, std::vector<char>> stack (message);
  for (auto i = std::rbegin(S); i != std::rend(S); i += 1) { if (stack.top() == *i) { stack.pop(); }  }
  bool condition = stack.empty();
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
