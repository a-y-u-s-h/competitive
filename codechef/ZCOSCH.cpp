#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int R;
  std::cin >> R;
  /*
    ======================================
      The ZCO Scholarship Contest has just
      finished, and you finish with a rank of R.
      You know that Rank 1 to Rank 50 will
      get 100% scholarship on the ZCO exam
      fee and Rank 51 to Rank 100 will get
      50% percentage scholarship on the ZCO
      exam fee. The rest do not get any scholarship.
      What percentage of scholarship will you get ?
    ======================================
  */
  int scholarship = (R >= 1 && R <= 50) ? 100 : (R >= 51 && R <= 100) ? 50 : 0;
  std::cout << scholarship << std::endl;
  return 0;
}
