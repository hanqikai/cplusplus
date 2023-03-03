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
    for (auto x = m.begin(); x != m.end(); x++){
        cout << (*x).first << "  " << (*x).second << endl;
    }
    auto d = m.find(1);
    cout << d->first << " eee " << d->second;
    return 0;
}