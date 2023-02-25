#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <queue>
using namespace std;
int main(int argc, char** argv){
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> qq;
    qq.push(7);
    qq.push(8);
    qq.emplace(9);
    q.push(7);
    q.push(8);
    q.emplace(9);
    
    while (q.size()) {
        cout << q.front() << ' ';
        q.pop();
    }

    while (qq.size()) {
        cout << qq.top() << ' ';
        qq.pop();
    }
    return 0;
}