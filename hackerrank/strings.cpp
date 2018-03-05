#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   // Complete the program
    string a, b;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    
    stringstream streamC; 
    string c;
    streamC << b[0];
    for(int i = 1; i < a.size(); i++) {
        streamC << a[i];
    }
    streamC >> c;
    
    stringstream streamD; 
    string d;
    streamD << a[0];
    for(int i = 1; i < b.size(); i++) {
        streamD << b[i];
    }
    streamD >> d;
    
    cout << c << " " << d << endl;
    
    return 0;
}

