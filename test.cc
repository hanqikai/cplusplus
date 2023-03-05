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
using namespace std;

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
    std::string& deref() const;
    StrBlobPtr& incr();  // 前缀递增
    


private:
    // 若检查成功，check返回一个指向vector的shared_ptr
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    // 保存一个weak_ptr，意味着底层vector可能会被销毁
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;  // 在数组中的当前位置
};



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