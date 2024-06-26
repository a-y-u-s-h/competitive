#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        There are conditions and labels given
        to us, we need to find out whether some
        integer lies under what label.
      ======================================
    */
    std::map<std::string, bool> conditions = {
      { "OVERLOAD" , X > 65              },
      { "UNDERLOAD", X < 35              },
      { "NORMAL"   , !(X > 65 || X < 35) },
    };

    std::map<std::string, bool> matching;
    std::copy_if(std::begin(conditions), std::end(conditions), std::inserter(matching, std::end(matching)), [](auto const &condition) { return condition.second == true; });
    for (auto condition : matching) { std::cout << (condition.first) << std::endl; }


  }
  return 0;
}
