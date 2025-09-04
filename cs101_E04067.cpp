#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    while (true) {
        vector<int> digits;
        string s;
        cin >> s;
        istringstream iss(s);
        char c;
        while (iss >> c) {
            if (isdigit(c)) {
                digits.push_back(c - '0');
            }
        }
        vector<int> reversedigits;
        reversedigits = digits;
        reverse(reversedigits.begin(), reversedigits.end());
        if (reversedigits == digits) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }
}
