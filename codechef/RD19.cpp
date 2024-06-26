#include <bits/stdc++.h>

bool primality (int N) {
  if (N == 1) return false;
  if (N == 2) return true;
  for (int i = 2; i < N; i += 1) { if (N % i == 0) return false; }
  return true;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given a sequence A of positive
        integers with size N. You're allowed
        to delete upto N-1 elements from this
        sequence. (i.e. you may delete any
        number of elements, including zero,
        as long as the resulting sequence is
        non-empty.)

        Please find the minimum number of
        elements which have to be deleted so
        that the GCD of the resulting sequence
        would be equal to 1, or determine that
        it is impossible.
      ======================================
    */
    int Cp = std::count_if(std::begin(A), std::end(A), [] (auto const &Ai) { return primality(Ai); });
    bool O = std::any_of(std::begin(A), std::end(A), [](auto const &Ai) { return Ai == 1; });
    int answer = O ? 0 : (Cp > 1 ? N - Cp : -1);
    std::cout << answer << std::endl;
  }
  return 0;
}
