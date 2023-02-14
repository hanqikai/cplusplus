#include <iostream>
int reused = 42;  // reused拥有全局作用域
int main(){
    int unique = 0;  // unique拥有块作用域
    std::cout << reused << " " << unique << std::endl;  // 42 0
    int reused = 0;  //新建局部变量reused，覆盖了全局变量reused
    std::cout << reused << " " << unique << std::endl;  // 0 0
    std::cout << ::reused << " " << unique << std::endl;  // 42 0
    return 0;
}