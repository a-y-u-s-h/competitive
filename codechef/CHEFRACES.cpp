#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, A, B;
    std::cin >> X >> Y >> A >> B;
    /*
      ======================================
        Given X, Y, A, B where X, Y are the
        races that Chef participates in, and
        A, B are the races that Chef's arch-rival
        participates in, find the maximum number
        of gold medals (first place) that
        Chef can win. Arch-rival of Chef is
        better than him in all kinds of races.
      ======================================
    */
    std::vector<int> C { X, Y };
    std::vector<int> R { A, B };
    std::vector<int> intersection;

    std::sort(std::begin(C), std::end(C));
    std::sort(std::begin(R), std::end(R));
    std::set_intersection(std::begin(C), std::end(C), std::begin(R), std::end(R), std::back_inserter(intersection));

    int answer = C.size() - intersection.size();
    std::cout << answer << std::endl;
  }
  return 0;
}
