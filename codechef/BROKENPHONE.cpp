#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Uttu broke his phone. He can get it
        repaired by spending X rupees or he
        can buy a new phone by spending Y rupees.
        Uttu wants to spend as little money
        as possible. Find out if it is better
        to get the phone repaired or to
        buy a new phone.
      ======================================
    */
    std::string answer = (X < Y) ? "REPAIR"
                       : (Y < X) ? "NEW PHONE"
                       : "ANY";
    std::cout << answer << std::endl;
  }
  return 0;
}
