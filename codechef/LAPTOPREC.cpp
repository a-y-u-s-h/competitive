#include <bits/stdc++.h>

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
        We have to find out the element in
        the vector provided to us (which we
        have stored in a frequency table)
        that has the maximum frequency.
      ======================================
    */
    auto D = std::set(std::begin(A), std::end(A)); std::vector<int> F (D.size()); std::transform(std::begin(D), std::end(D), std::begin(F), [A](auto const &d) { return std::count(std::begin(A), std::end(A), d); });
    auto frequent = std::max_element(std::begin(F), std::end(F));
    bool confused = std::count(std::begin(F), std::end(F), *frequent) > 1;
    int element = *std::find_if(std::begin(D), std::end(D), [A, frequent](auto const &d) { return std::count(std::begin(A), std::end(A), d) == *frequent; });
    std::cout << (confused ? "CONFUSED" : std::to_string(element)) << std::endl;
  }
  return 0;
}
