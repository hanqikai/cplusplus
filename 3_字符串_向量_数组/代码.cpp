#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
int a = 1;
int main(){
    string res;
    res = 'a' * 10;
    cout << res;
    return 0;
    int ia[3][4] = {0};
    int (*p)[4] = ia;
    cout << *p[0] << *p[1] << *p[2] << *p[3];
    
    return 0;
}