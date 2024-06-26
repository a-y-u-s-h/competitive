#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  std::cin.ignore(1, '\n');

  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        For a positive integer M, MoEngage
        defines digitSum(N) as the sum of
        the digits of the number M (when
        written in decimal). For example:
        digitSum(1023) = 1 + 0 + 2 + 3 = 6.
        Given a positive integer N, find the
        smallest integer X strictly greater
        than N such that digit sum (N) and
        digitSum(X) have different parity,
        i.e. one of them is odd and one of
        them is even.
      ======================================
    */
    std::string Ln = std::to_string(N);
    std::vector<int> Dn (Ln.size()); std::transform(std::begin(Ln), std::end(Ln), std::begin(Dn), [](char c) { return std::stoi(std::string(1, c)); });
    int Sn = std::accumulate(std::begin(Dn), std::end(Dn), 0);

    int answer = N + 1;

    while (true) {
      std::string La = std::to_string(answer);
      std::vector<int> Da (La.size()); std::transform(std::begin(La), std::end(La), std::begin(Da), [](char c) { return std::stoi(std::string(1, c)); });
      int Sa = std::accumulate(std::begin(Da), std::end(Da), 0);
      if (Sn % 2 == 0 && Sa % 2 == 1) { break; }
      if (Sn % 2 == 1 && Sa % 2 == 0) { break; }
      answer += 1;
    }

    std::cout << answer << std::endl;
  }

  return 0;
}
