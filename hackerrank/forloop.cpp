#include <iostream>
#include <cstdio>
using namespace std;

string getNumberInWords(int n);
string getNumberInWords(int n) {
    switch(n) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return n & 1 == 1 ? "odd" : "even";
    }
    return "";
}

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++) {
        cout << getNumberInWords(i) << endl;
    }
    return 0;
}

