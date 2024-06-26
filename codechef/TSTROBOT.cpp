#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Chef has bought a new robot, which
        will be used for delivering dishes to
        his customers. He started testing
        the robot by letting it move on a line.

        Initially, the robot is placed at
        coordinate x = X. Then, it should
        execute a sequence of N commands,
        described by the string S, with length
        N. Each character of this string is
        either 'L' or 'R', denoting that the
        robot should walk one step to the left
        (decreasing x by 1) or to the right
        (increasing x by 1), respectively.

        How many distinct points are visited
        by the robot when it has executed all
        the commands? A point p is visited by
        the robot if p is an integer and the
        robot's position before or after
        executing some command is x = p.
      ======================================
    */
    std::vector<int> positions; positions.push_back(X);
    for (int i = 0; i < N; i++) { X += S[i] == 'L' ? -1 : S[i] == 'R' ? 1 : 0; positions.push_back(X); }
    std::set<int> visited (std::begin(positions), std::end(positions));
    int answer = visited.size();
    std::cout << answer << std::endl;
  }
  return 0;
}
