#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string N;
    std::cin >> N;
    /*
      ======================================
        There are 20 officers in Chefland
        who can link the PAN to Aadhar. N
        applications were received for linking
        PAN. However, due to an internal conflict,
        each officer intends to process
        exactly the same number of applications.

        Determine the minimum number of applications
        that would remain unprocessed. Not that
        N can be huge and might not fit in
        an integer.

        Approach: Get the last two digits (XY)
        of the number and then take modulo 20.
      ======================================
    */
    char Y = *std::rbegin(N);
    char X = std::next(std::rbegin(N)) != std::rend(N) ? *std::next(std::rbegin(N)) : '0';
    int answer = std::stoi(std::string() + X + Y) % 20;
    std::cout << answer << std::endl;
  }
  return 0;
}
