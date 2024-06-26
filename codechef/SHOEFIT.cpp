#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        You have 3 shoe lying around. Each
        shoe is either a left shoe (represented by 0)
        or a right shoe (represented by 1). Given
        A, B, C representing each shoe, we need to
        find out whether we can go out wearing
        one left and one  right shoe.
      ======================================
    */
    std::vector<int> shoes = {A, B, C};
    int left = std::count(begin(shoes), end(shoes), 0);
    int right = std::count(begin(shoes), end(shoes), 1);
    bool possible = (left >= 1 && right >= 1) ? 1 : 0;
    std::cout << possible << std::endl;
  }
  return 0;
}
