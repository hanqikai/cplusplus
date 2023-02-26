#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
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
int main(int argc, char** argv){
    cout << "A's size: " << sizeof(A) << endl;
    cout << "B's size: " << sizeof(B) << endl;
    return 0;
}