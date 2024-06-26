#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    /*
      ======================================
        Chef opted for Bio-Statistics as an
        Open-Elective course in his university,
        but soon got bored, and decided to
        text his friends during lectures.
        The instructor caught Chef, and decided
        to punish him, by giving him
        a special assignment.

        There are N numbers in a list A (A1 to An).
        Chef needs to find the mode of the
        frequencies of the numbers. If there
        are multiple modal values, report the
        smallest one. In other words, find the
        frequency of all the numbers, and then
        find the frequency which has the highest
        frequency. If multiple such frequencies
        exist, report the smallest (non-zero) one.

        More formally, for every v such that
        there exists at least one i such that
        Ai = v, find the number of j such that
        Aj = v, and call that the frequency of v,
        denoted by freq(v). Then find the value
        w such that freq(v) = w for the most
        number of vs considered in the previous
        step. If there are multiple values w
        which satisfy this, output the smallest
        among them.

        As you're one of Chef's friends, help
        him complete the assignments.
      ======================================
    */
    std::map<int, int> F; for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; F[Ai]++; }
    std::map<int, int> FF; for (auto const &[item, frequency]: F) { FF[frequency]++; }
    auto answer = *std::max_element(std::begin(FF), std::end(FF), [] (auto const &a, auto const &b) { return b.second > a.second; });
    std::cout << answer.first << std::endl;
  }
  return 0;
}
