#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readFile(const string& fname, vector<string>& s) {
    ifstream file(fname, ios::binary);
    if (!file) {
        cerr << "file not found!" << endl;
    }
    string line;
    while (getline(file, line)) {
        s.push_back(line);
    }
    file.close();
};

void printStr(const vector<string>& s) {
    for (int i=0; i<s.size(); ++i) {
        cout << s[i] <<endl;
    }
};

void writeStr(const vector<string>& s) {
    ofstream file("newfile.txt", ios::binary);
    if (!file) {
        cerr << "file not found!!" << endl;
    }
    for (int i=0; i<s.size(); ++i) {
        file << s[i] <<endl;
    }
    file.close();
};

int main() {
    vector<string> fStr;
    readFile("tv.txt", fStr);
    ifstream file(fname, ios::binary);
    string line;
    while (getline(file, line)) {
        s.push_back(line);
    }
    file.close();
};

