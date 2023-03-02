#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main(int argc, char** argv){
    
    map<int, int> m;
    for(vector<int>::size_type i = 10; i != 0; i--) {
        m[i] = i;
    }
    for (auto x: m){
        cout << x.first << "  " << x.second << endl;
    }
    return 0;
}