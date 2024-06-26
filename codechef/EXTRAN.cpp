#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A; std::map<long long, long long> F;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); F[Ai]++; }

    /*
      ======================================
        A sequence is called nice if its
        elements are distinct consecutive numbers,
        possibly in changed order. For example,
        both (6, 7, 8) and (15, 13, 16, 14) are
        nice, while (4, 6), (4, 5, 5, 6) and
        (15, 16, 15) are not.

        Limak has a nice sequence. While he was
        in school today, someone inserted one
        extra number in the sequence. Limak has
        just returned and realized that the
        sequence isn't nice anymore! He wants to
        remove the inserted number and make his
        sequence nice again. Can you help him to
        find the number that he should remove?

        Formally, in each test case you are given
        a sequence of N numbers A1, A2, ..., AN.
        Your task is to find the value X, such that
        removing one occurrence of X would make the
        sequence nice. It's guaranteed that
        exactly one solution exists.
      ======================================
    */


    long long answer;

    auto repeating = std::find_if(std::begin(F), std::end(F), [](auto const &Fi) { return Fi.second > 1; });

    if (repeating != std::end(F)) { std::cout << (repeating->first) << std::endl; continue; }

    std::sort(std::begin(A), std::end(A));
    for (long long i = 0; i < N - 3 + 1; i += 1) {
      long long L = A[i], M = A[i + 1], R = A[i + 2];
      long long Dl = std::abs(M - L), Dr = std::abs(R - M);
      if (Dr == 1 && Dl != 1) { answer = L; break; }
      if (Dr != 1 && Dl != 1) { answer = M; break; }
      if (Dr != 1 && Dl == 1) { answer = R; break; }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
