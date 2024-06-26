#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float N;
    std::cin >> N;
    /*
      ======================================
        1 car can accomodate 4 people.
        N friends want to go to a restaurant
        for a party. Find the minimum number of
        cars required to accomodate all friends.
      ======================================
    */
    int answer = std::ceil(N / 4);
    std::cout << answer << std::endl;
  }
  return 0;
}
