#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      Petya started to attend programming
      lessons. On the first lesson his task
      was to write a simple program. The
      program was supposed to do the following:
      in the given string, consisting if
      uppercase and lowercase Latin letters, it:

      1. Deletes all the vowels,
      2. Inserts a character "." before each consonant,
      3. Replaces all uppercase consonants with corresponding lowercase ones.

      Vowels are letters "A", "O", "Y", "E", "U", "I",
      and the rest are consonants. The program's input
      is exactly one string, it should return the output
      as a single string, resulting after the program's
      processing the initial string. Help Petya cope
      with this easy task.

      Tricky: They have included Y as a vowel.
    ======================================
  */
  S = std::regex_replace(S, std::regex("([aeiouAEIOUyY])"), "");
  S = std::regex_replace(S, std::regex("([bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ])"), ".$1");
  for (auto Si = std::begin(S); Si != std::end(S); Si += 1) { if (std::isupper(*Si)) *Si = std::tolower(*Si); }
  std::cout << S << std::endl;
  return 0;
}
