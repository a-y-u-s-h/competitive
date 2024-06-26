#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef is hungry and wants to each home.
        Chef can travel upto 5 km/L of fuel
        with his motorcycle. Currently, his
        vehicle is filled with X litres of fuel
        and his home is Y km away. Determine
        whether Chef can reach his home on his
        motorcycle or not.
      ======================================
    */
    bool condition = (X * 5 >= Y);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
