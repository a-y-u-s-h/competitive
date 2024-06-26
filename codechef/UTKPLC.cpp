#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::vector<char> P;
    std::vector<char> O;

    for (int i = 0; i < 3; i++) { char Pi; std::cin >> Pi; P.push_back(Pi); }
    for (int i = 0; i < 2; i++) { char Oi; std::cin >> Oi; O.push_back(Oi); }

    /*
      ======================================
        Utkarsh has applied for 3 companies
        A, B, C. You know Utkarsh's order of
        preference among these 3 companies,
        given to you as characters in `first`,
        `second` and `third` variables or
        (`P` vector variable denoting preferences)

        You also know Utkarsh has received
        offers from exactly 2 of these 3
        companies, given to you as characters
        x and y. (Or `O` vector, denoting offers).
        Utkarsh will accept offer from whichever
        company is highest on his preference
        list. Which company will he join?
      ======================================
    */

    auto answer = std::find_first_of(std::begin(P), std::end(P), std::begin(O), std::end(O));
    std::cout << *answer << std::endl;


  }
  return 0;
}
