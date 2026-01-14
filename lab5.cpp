#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readFile(const string& fname, vector<string>& s) {
    ifstream file(fname, ios::binary);
    if (!file) {
        cerr << "Ошибка открытия файла!" << endl;
    }
    string line;
    while (getline(file, line)) {
        s.push_back(line);
    }
    file.close();
};


void printStr(const vector<string>& s) {

};

void writeStr(const vector<string>& s) {

};

int main() {
    printStr(fStr);
    writeStr(fStr);
}

