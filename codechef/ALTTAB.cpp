#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  /*
    ======================================
      Gigi got bored and started to open/reopen
      some programs on his computer. By reopening
      a program, we mean that the program was
      previously opened, wasn't closed in the
      meantime, and is brought into attention again.

      After a while, Gigi wants to know the
      order in which the programs show up if
      he were to press alt + tab. Note that the
      alt + tab function displays a list of all
      unique active programs where the most
      recently opened or reopened program
      occupies the top of the list.

      Given that Gigi opened/reopened N programs
      where the name of the i-th program is denoted by
      Si, find the order in which the programs
      are displayed when pressing alt + tab.

      To keep the output dimensions small,
      you must print only the last two
      characters from each program name.
      Please refer to the output format
      for details.
    ======================================
  */
  std::vector<std::string> programs;
  for (int t = 0 ; t < T; t += 1) { std::string S; std::cin >> S; programs.push_back(S);  }
  std::set<std::string> seen; std::vector<std::string> uniques;
  for (auto program = std::rbegin(programs); program != std::rend(programs); program += 1) { if (seen.find(*program) == seen.end()) { uniques.push_back(*program); seen.insert(*program); }}
  for (auto program = std::begin(uniques); program != std::end(uniques); program += 1) { std::cout << (*program).substr((*program).size() - 2); } std::cout << std::endl;

  return 0;
}
