// lists in C++

#include <bits/stdc++.h>
using namespace std;

void explainList() {
    list<int> l1; // exactly same as vector except the front functions

    l1.push_back(1);
    l1.emplace_back(2);
    l1.push_front(3); // for this to do in the vector we need insert function
    // offers better time complexity

    // similarly we have deque
    deque<int> dq;
}



int main() {
    explainList();
    return 0;
}