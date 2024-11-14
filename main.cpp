#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void readfromfile(vector<string>& lines) {

}

void printlines(const vector<string>& lines) {
    for (const auto& line:lines) {
        cout << line << endl;
    }
}

void writetowile(const vector<string>& lines) {

}

int main() {

    vector<string> lines;
    readfromfile(lines);
    printlines(lines);
    writetowile(lines);
    return 0;

}
