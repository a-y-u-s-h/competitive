#include <bits/stdc++.h>

std::vector<int> locations (std::string S, char X) {
  int count = std::count(begin(S), end(S), X);
  std::vector<int> positions;
  int position = S.find(X, 0);
  while(position != std::string::npos) { positions.push_back(position); position = S.find(X, position + 1); }
  return positions;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        You're given the sequence of nucleotides
        of one strand of DNA through a string S
        of length N. S contains the character
        A, T, C, G only. Chef knows that:

        1. A is complimentary to T.
        2. T is complimentary to A.
        3. C is complimentary to G.
        4. G is complimentary to C.

        Using string S, determine the sequence of
        the complimentary strand of DNA.
      ======================================
    */

    std::map<char, std::pair<char, std::vector<int>>> data = {
      { 'A', { 'T', locations(S, 'A') } },
      { 'T', { 'A', locations(S, 'T') } },
      { 'G', { 'C', locations(S, 'G') } },
      { 'C', { 'G', locations(S, 'C') } }
    };

    std::string answer (S);

    for (auto token : data) {
      auto X = token.first;
      auto C = token.second.first;
      auto L = token.second.second;
      for (auto l : L) { answer[l] = C; }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
