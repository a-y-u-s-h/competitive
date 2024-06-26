#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N1, N2, N3;
  std::cin >> N1 >> N2 >> N3;

  std::vector<int> V1, V2, V3;
  std::map<int,std::tuple<bool,bool,bool>> voters;
  for (int n = 0; n < N1; n++) { int V1i; std::cin >> V1i; V1.push_back(V1i); std::get<0>(voters[V1i]) = true; }
  for (int n = 0; n < N2; n++) { int V2i; std::cin >> V2i; V2.push_back(V2i); std::get<1>(voters[V2i]) = true; }
  for (int n = 0; n < N3; n++) { int V3i; std::cin >> V3i; V3.push_back(V3i); std::get<2>(voters[V3i]) = true; }
  /*
    ======================================
      We're given 3 vectors, and we have
      formed a table called `voters` that
      keeps track of what ID is present
      in which Official's list. If an ID
      is present in at least 2 out of three
      of those lists, we need to keep it.
      So, next we'll count if some condition
      is met, on a tuple that we've created.
    ======================================
  */
  std::vector<std::pair<int,std::tuple<bool,bool,bool>>> answer;
  std::copy_if(std::begin(voters), std::end(voters), std::inserter(answer, std::end(answer)), [](auto const &v) { return std::get<0>(v.second) + std::get<1>(v.second) + std::get<2>(v.second) >= 2; });
  auto M = std::count_if(std::begin(voters), std::end(voters), [](auto const &v) { return std::get<0>(v.second) + std::get<1>(v.second) + std::get<2>(v.second) >= 2; });

  std::cout << M << std::endl;
  for (auto i : answer) { std::cout << i.first << std::endl; }

  return 0;
}
