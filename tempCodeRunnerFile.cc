#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <typeinfo>
using namespace std;
int main(int argc, char** argv){

    char a ='1';
    int b = 1;
    cout << "char a's type is " << typeid(a).name() << endl;
    cout << "int b's type is " << typeid(b).name() << endl;
    cout << "after operator" << endl;
    cout << "char a's type is " << typeid(a - '0').name() << endl;
    cout << "int b's type is " << typeid(char('0' + b)).name() << endl;
    return 0;
}