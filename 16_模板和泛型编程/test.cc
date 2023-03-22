#include <iostream>
#include <string>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main(){
    string a = "hello, ";
    string b = "world!";
    cout << add(1, 2) << endl;
    cout << add(a, b) << endl;
    cout << add(1.3, 2.0) << endl;
    return 0;
}