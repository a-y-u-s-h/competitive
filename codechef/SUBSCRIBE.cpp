#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef wants to setup a meeting of X
        minutes. The meeting platform supports
        a maximum of 30 minutes without subscription
        and of unlimited duration with
        subscription. Determine whether Chef
        needs to take a subscription or not for setting
        up the meet.
      ======================================
    */
    bool condition = X > 30;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
