#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  std::cin.ignore(1, '\n');

  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::getline(std::cin, S, '\n');
    /*
      ======================================
        Nitika was once reading a history
        book and wanted to analyze it. So she
        asked her brother to create a list of
        names of the various famous personalities
        in the book. Her brother gave Nitika the
        list. Nitika was furious when she saw
        the list. The names of the people were
        not properly formatted. She doesn't like
        this and would like to properly format it.

        A name can have at most three parts: first
        name, middle name and last name. It will
        have at least one part. The last name is
        always present. The rules of formatting a
        name are very simple:

        Only the first letter of each part of the
        name should be capital.

        All the parts of the name except the last
        part should be represented by only two characters.
        The first character should be the first
        letter of the part and should be capitalized.
        The second character should be ".". Let us
        look at some examples of formatting
        according to these rules:

        gandhi -> Gandhi
        mahatma gandhI -> M. Gandhi
        Mohndas KaramChand ganDhi -> M. K. Gandhi
      ======================================
    */
    std::regex expression ("\\w+");
    auto count = std::distance(std::sregex_iterator(std::begin(S), std::end(S), expression), std::sregex_iterator());
    auto titlecase = [&] (std::string input) -> std::string { std::transform(std::begin(input), std::end(input), std::begin(input), ::tolower); return std::string(1, (char) std::toupper(input[0])) + input.substr(1, input.size() - 1); };
    auto abbreviate = [&] (std::string input) -> std::string { return std::string(1, (char) std::toupper(input[0])) + "."; };

    if (count == 1) { S = titlecase(S); }

    std::string result = "";
    for (auto i = std::sregex_iterator(std::begin(S), std::end(S), expression); i != std::sregex_iterator(); i++) {
      std::string word = (*i).str();
      result += (count != 1) ? abbreviate(word) + " " : titlecase(word);
      count--;
    }

    std::cout << result << std::endl;
  }
  return 0;
}
