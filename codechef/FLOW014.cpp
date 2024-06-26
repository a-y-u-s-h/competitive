#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float H, C, S;
    std::cin >> H >> C >> S;
    /*
      ======================================
        H is hardness, C is carbon content
        and S is tensile strength of steel.
        We need to grade the steel as per
        numerous conditions given to us in
        the problem statement.
      ======================================
    */

   bool HC = H > 50;
   bool CC = C < 0.7;
   bool SC = S > 5600;

   std::map<int, bool> grades = {
    { 5 , !HC    &&    !CC    &&  !SC    },
    { 6 , (HC  && !CC  && !SC) || (!HC  && CC  && !SC) || (!HC  && !CC  && SC) },
    { 7 ,  HC    &&    !CC   &&    SC    },
    { 8 , !HC    &&    CC    &&    SC    },
    { 9 ,  HC    &&    CC    &&    !SC   },
    { 10,  HC    &&    CC    &&    SC    }
   };

   std::map<int, bool> matching;
   std::copy_if(std::begin(grades), std::end(grades), std::inserter(matching, std::end(matching)), [](auto const &condition) { return condition.second == true; });
   for (auto i : matching) { std::cout << i.first << " "; } std::cout << std::endl;

  }
  return 0;
}
