#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        A picture is provided in the question
        of layout of seats of a bus with 30
        seats. Bus is divided into two decks,
        upper and lower (with 15 seats each).
        Some seats are single and some are
        double as in the image. We're given N,
        a seat number, we have to classify it
        as one of 4 types: "LOWER SINGLE",
        "LOWER DOUBLE", "UPPER SINGLE",
        "UPPER DOUBLE".
      ======================================
    */
    std::vector<int> LS (5); std::iota(std::begin(LS), std::end(LS), 11);
    std::vector<int> LD (10); std::iota(std::begin(LD), std::end(LD), 1);
    std::vector<int> US (5); std::iota(std::begin(US), std::end(US), 26);
    std::vector<int> UD (10); std::iota(std::begin(UD), std::end(UD), 16);

    auto present = [] (int E, std::vector<int> S) { return std::find(std::begin(S), std::end(S), E) != std::end(S); };

    std::string answer = present(N, LS) ? "Lower Single"
                       : present(N, LD) ? "Lower Double"
                       : present(N, US) ? "Upper Single"
                       : present(N, UD) ? "Upper Double" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
