#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N;
  std::cin >> N;
  std::vector<long long> C;
  std::vector<long long> T;
  for (long long n = 0; n < N; n++) { long long Ci; std::cin >> Ci; C.push_back(Ci); }
  for (long long n = 0; n < N; n++) { long long Ti; std::cin >> Ti; T.push_back(Ti); }
  /*
    ======================================
      There are N workers, each worker is
      of one of the following three types:

      1. A translator translates some text
      from Chef's language to another language.

      2. An author writes some text in Chef's
      language.

      3. An author-translator can both write
      a text in Chef's language and translate
      it to another language.

      Chef wants to have some text written
      and translated into some language (different
      from Chef's language). Chef can't do
      either of those tasks, but he can hire
      workers. For each i (1 <= i < N), if
      he hires the i-th worker, he must pay
      that worker Ci coins. Help Chef find
      the minimum total number of coins he
      needs to pay to have a text written
      and translated. It is guaranteed that
      it is possible to write and translate
      a text.
    ======================================
  */
  long long Am = 10e9, Bm = 10e9, Tm = 10e9;

  for (long long i = 0; i < N; i += 1) {
    if (T[i] == 1) Tm = std::min(Tm, C[i]);
    if (T[i] == 2) Am = std::min(Am, C[i]);
    if (T[i] == 3) Bm = std::min(Bm, C[i]);
  }

  long long answer = std::min(Bm, Am + Tm);

  std::cout << answer << std::endl;
  return 0;
}
