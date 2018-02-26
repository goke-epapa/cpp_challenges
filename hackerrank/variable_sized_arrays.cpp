#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    int n, q;
    
    cin >> n;
    cin >> q;
    getchar();
    
    vector<vector<int>> varArr;
    
    for(int i = 0; i < n; i++) {
        int input;    
        vector<int> queries;
        string line;
        getline(cin, line);
        
        stringstream lineStream(line);
        int numberOfItems;
        lineStream >> numberOfItems;
        
        for(int i = 0; i < numberOfItems; i++) {
            lineStream >> input;
            queries.push_back(input);
        }
        varArr.push_back(queries);
    }
    
    for(int count = 0; count < q; count++) {
        int i, j;
        scanf("%d", &i);
        scanf("%d", &j);
        
        cout << varArr.at(i).at(j) << endl;
    }
    return 0;
}

