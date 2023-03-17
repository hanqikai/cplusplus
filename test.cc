#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <typeinfo>
#include <memory>
#include <functional>
using namespace std;
// 普通函数
int add(int i, int j) { return i + j; }
class a{
public:
    int a = 9;
    int f() {return this->b;}
protected:
    int c = 8;
private:
    int b = 0;
};


// lambda，其产生一个未命名的函数对象类
auto mod = [](int i, int j) { return i % j;};
//函数对象类
struct divide {
    int operator() (int denominator, int divisor) {
        return denominator / divisor;
    }
};
int main(int argc, char** argv){
function<int(int, int)> f1 = add;  // 函数指针
function<int(int, int)> f2 = divide();  // 函数对象类的对象
function<int(int, int)> f3 = [](int i, int j) { return i * j; };  // lambda
function<int(int, int)> f4 = mod;
cout << f1(4, 2) << endl;  // 打印6
cout << f2(4, 2) << endl;  // 打印2
cout << f3(4, 2) << endl;  // 打印8
cout << f4(4, 2) << endl;  // 打印0
a A;
cout << A.f() << endl;
    return 0;
}