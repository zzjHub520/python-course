#include <iostream>
#include <fstream>
#include <regex>
#include <vector>

using namespace std;

int main() {
    ifstream input(INPUT_FILENME);

    string line;
    vector<string> vecStr;
    regex regMath(R"(^zzjHub520.*)");
    while (getline(input, line)) {
        if (regex_match(line, regMath)) {
            line = "git clone git@github.com:" + line + ".git";
            vecStr.push_back(line);
        }
    }
    input.close();
    sort(vecStr.begin(), vecStr.end());
    ofstream output(OUTPUT_FILENME);
    for (int i = 0; i < vecStr.size(); ++i) {
        output << vecStr[i] + "\n";
    }
    output.close();
    return 0;
}
