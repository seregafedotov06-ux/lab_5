#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readFile(const string& fname, vector<string>& s) {

};

void printStr(const vector<string>& s) {
    for (int i=0; i<s.size(); ++i) {
        cout << s[i] <<endl;
    }
};

void writeStr(const vector<string>& s) {
    ofstream file("newfile.txt", ios::binary);
    if (!file) {
        cerr << "Ошибка открытия файла!" << endl;
    }
    for (int i=0; i<s.size(); ++i) {
        file << s[i] <<endl;
    }
    file.close();
};

int main() {
    vector<string> fStr;
    readFile("tv.txt", fStr);
    printStr(fStr);
    writeStr(fStr);
}
