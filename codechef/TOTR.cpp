#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T; std::string M;
  std::cin >> T >> M;


  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;

    /*
      ======================================
        Note: There are constraints given
        in the problem on input which you
        must see after reading the statement.

        A tourist is visiting Byteland. The
        tourist knows English very well. The
        language of Byteland is rather different
        from English. To be exact it differs in
        following points:

        1. Bytelandian alphabet has the same
        letters as English one, but possibly
        different in meaning. Like 'A' in Bytelandian
        may be 'M' in English. However this does
        not mean that 'M' in babylandian must be
        'A' in English. More formally, Bytelandian
        alphabet is a permutation of English
        alphabet. It will be given to you and
        could be any possible permutation.
        Don't assume any other condition.

        2. People of Byteland don't like to use
        invisible character for separating words.
        Hence instead of space (' ') they use
        underscore ('_'). Other punctuation symbols,
        like '?', '!' remain the same as in English.

        The tourist is carrying "The dummies guide
        to Bytelandian", for translation. The
        book is serving his purpose nicely. But he
        is addicted to sharing on BaceFook, and
        shares his numerous conversations in Byteland
        on it. The conversations are rather long,
        and it is quite tedious to translate for
        his English friends, so he asks you to
        help him by writing a program to do the same.
      ======================================
    */

    /*
      ======================================
        First, we'll make a translation map.
      ======================================
    */
    std::string alphabets ("abcdefghijklmnopqrstuvwxyz");
    std::map<char, char> translations;
    translations['_'] = ' ';

    for (int i = 0; i < 26; i += 1) {
      char MU = std::toupper(M[i]);
      char ML = std::tolower(M[i]);
      char TU = std::toupper(alphabets[i]);
      char TL = std::tolower(alphabets[i]);
      translations[TU] = MU;
      translations[TL] = ML;
    }

    /*
      ======================================
        Then, we'll apply that map to string.
      ======================================
    */
    for (int i = 0; i < S.size(); i += 1) { if (translations.count(S[i])) { S[i] = translations[S[i]]; }}

    /*
      ======================================
        Then, we'll output the result.
      ======================================
    */
    std::cout << S << std::endl;
  }
  return 0;
}
