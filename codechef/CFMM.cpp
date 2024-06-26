#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Today, Chef decided to cook some
        delicious meals from the ingredients
        in his kitchen. There are N ingredients,
        represented by strings. Chef took all
        the ingredients, put them into a cauldron
        and mixed them up.

        In the cauldron, the letters of the strings
        representing the ingredients completely mixed,
        so each letter appears in the cauldron as many
        times as it appeared in all the strings in
        total; now, any number of times, Chef can
        take one letter out of the cauldron
        (if this letter appears in the cauldron
        multiple times, it can be taken out that
        many times) and use it in a meal. A complete
        meal is the string "codechef". Help Chef
        find the maximum number of complete meals
        he can make!
      ======================================
    */
    std::map<char, int> letters;
    for (int i = 0; i < N; i += 1) { std::string Si; std::cin >> Si; for (int j = 0; j < Si.size(); j += 1) { letters[Si[j]]++; }}

    /*
      ======================================
        Since, Chef we want to find how many
        "codechef" strings we can make, we have
        to find how many distinct characters
        of "codechef" are available to us first.
        Then, we can find the answer;
      ======================================
    */
    int Ac = letters['c'];
    int Ao = letters['o'];
    int Ae = letters['e'];
    int Ad = letters['d'];
    int Ah = letters['h'];
    int Af = letters['f'];


    /*
      ======================================
        To calculate the answer, we need to
        divide these numbers by our requirement
        of each letters and then find out
        the minimum number among them.
      ======================================
    */
    std::vector<int> available = { Ac / 2, Ao, Ae / 2, Ad, Ah, Af };
    int answer = *std::min_element(std::begin(available), std::end(available));
    std::cout << answer << std::endl;
  }
  return 0;
}
