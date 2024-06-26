#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      Vasya is very upset that many people
      on the Net mix uppercase and lowercase
      letters in one word. That's why he decided
      to invent an extension for his favorite
      browser that would change the letters'
      register in every word so that it either
      only consisted of lowercase letters or,
      vice versa, only of uppercase ones. At
      that as little as possible letters should
      be changed in the word. For example,
      the word HoUse must be replaced with house,
      and the word ViP — with VIP. If a word contains
      an equal number of uppercase and lowercase
      letters, you should replace all the letters
      with lowercase ones. For example, maTRIx
      should be replaced by matrix.
      Your task is to use the given
      method on one given word.
    ======================================
  */
  std::regex uppercase ("[A-Z]");
  std::regex lowercase ("[a-z]");
  auto CU = std::distance(std::sregex_iterator(std::begin(S), std::end(S), uppercase), std::sregex_iterator());
  auto CL = std::distance(std::sregex_iterator(std::begin(S), std::end(S), lowercase), std::sregex_iterator());
  if (CL >= CU) std::transform(std::begin(S), std::end(S), std::begin(S), [] (auto const &Si) { return std::tolower(Si); });
  if (CU >  CL) std::transform(std::begin(S), std::end(S), std::begin(S), [] (auto const &Si) { return std::toupper(Si); });
  std::cout << S << std::endl;
  return 0;
}
