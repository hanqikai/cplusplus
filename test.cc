#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
struct A
{
    
    
    int i;
    char c1;
    
};
struct B
{
    char c1;
    int i;
    char c2;
    double d;
};
void fcn3() {
    size_t v1 = 42;  // 局部变量
    // f可以改变它所捕获的变量的值
    auto f = [v1] () mutable { return ++v1; };
    v1 = 0;
    auto j = f();  // j为43
    cout << j << endl;
}
int main(int argc, char** argv){
    //fcn3();
    vector<int> vi{1, 2, 3, 4, 5, 6, -2, -3, -4, -5, -6};
    transform(vi.begin(), vi.end(), vi.begin(),
        [=](int i) -> int
        { if (i < 0)    return -i; else return i; });
    for(auto x: vi){
        cout << x << ' ';
    }
    return 0;
}