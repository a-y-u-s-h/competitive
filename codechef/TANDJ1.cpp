#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int a, b, c, d, K;
    std::cin >> a >> b >> c >> d >> K;
    /*
      ======================================
        Tom is riding in a train, currently
        in cell (a,b), and Jerry is tied up
        in a different cell (c,d), unable to
        move. The train has no breaks. It shall
        move exactly K steps, and then its fuel
        will run out and it shall stop. In one
        step, the train must move to one of its
        neighboring cells, sharing a side. Tom
        can’t move without the train, as the
        grid is covered in tracks. Can Tom reach
        Jerry’s cell after exactly K steps?

        Note: Tom can go back to the same
        cell multiple times.
      ======================================
    */
    int H = std::abs(c - a);
    int V = std::abs(b - d);
    int remaining = K - (H + V);
    bool condition = remaining >= 0 ? remaining % 2  == 0 : false;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
