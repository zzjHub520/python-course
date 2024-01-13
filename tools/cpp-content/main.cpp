#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

int main() {
    ifstream input(INPUT_FILENME);

    string line;
    string allText;
    regex regMath(R"(^P\d+$)");
    while (getline(input, line)) {
        if (regex_match(line, regMath)) {
            line = "ASDF# " + line;
        }
        allText += line + " ";
    }
    input.close();

    regex regReplace(R"(ASDF)");
    string dealStr = regex_replace(allText, regReplace, "\n\n");
    cout << dealStr;

    ofstream output(OUTPUT_FILENME);
    output << dealStr;
    output.close();
    return 0;
}
