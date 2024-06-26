#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long K, N, W;
  std::cin >> K >> N >> W;
  /*
    ======================================
      A soldier wants to buy W bananas in
      the shop. He has to pay K dollars
      for the first banana, 2K dollars for
      the second one and so on (in other
      words, he has to pay i * k dollars
      for the i-th banana). He has n dollars.
      How many dollars does he have to borrow
      from his friend soldier to buy W bananas?
    ======================================
  */
  long long answer = std::abs(std::min((long long) 0, N - ((K * W * (W + 1)) / 2)));
  std::cout << answer << std::endl;
  return 0;
}
