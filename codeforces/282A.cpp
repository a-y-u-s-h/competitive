#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;

  /*
    ======================================
      A programming language has exactly
      one variable, called X. Also there
      are two possible operations:
      1. ++ operation increases value by 1.
      2. -- operation decreases value by 1.

      A statement in language is a sequence,
      consisting of exactly one operation
      and one variable x. The statement is
      written without spaces, that is, it
      can contain characters "+", "-", "X".
      Executing a statement means applying
      the operation it contains.

      A program in the language is a sequence
      of statements, each of them needs to be
      executed. Executing the programme means
      executing all the statements it contains.
      You're given a program in language. The
      initial value of X is 0. Execute the program
      and find its final value.
    ======================================
  */

  std::vector<std::string> program;

  for (int n = 0 ; n < N; n += 1) {
    std::string statement;
    std::cin >> statement;
    program.push_back(statement);
  }

  /*
    ======================================
      Count ++ and -- operations in the
      whole program and so the final
      value of X must be Cp - Cm, where
      Cp = count of ++, Cm = count of --.
    ======================================
  */
  auto Cp = std::count_if(std::begin(program), std::end(program), [](auto const &statement) { return statement.find("++") != std::string::npos; });
  auto Cm = std::count_if(std::begin(program), std::end(program), [](auto const &statement) { return statement.find("--") != std::string::npos; });
  std::cout << Cp - Cm << std::endl;

  return 0;
}
