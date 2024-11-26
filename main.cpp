#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void readfromfile(vector<string>& lines) {
    ifstream in("file1.txt");
    string line;
    while (getline(in, line)){
        lines.push_back(line);
    }
    in.close();
}

void printlines(const vector<string>& lines) {

}

void writetowile(const vector<string>& lines) {
    ofstream out;
    out.open("file2.txt");
    for (const auto& line : lines){
        out << line << endl;
    }
    out.close();
}

int main() {

    vector<string> lines;
    readfromfile(lines);
    printlines(lines);
    writetowile(lines);
    return 0;

}
