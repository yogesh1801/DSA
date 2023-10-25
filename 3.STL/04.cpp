// stack in C++
#include <bits/stdc++.h>
using namespace std;


void explainStack() {
    stack<int> st ;
    // LIFO - last in first out

    st.push(1); //nothing like pushback
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout << st.top(); // return the top element means the last element entered

    st.pop() ; //  removes the topmost item

    cout << st.size(); //  returns the size
    cout << st.empty(); //  makes the stack empty

    // swapping the stack

    stack<int>st1,st2;
    st1.swap(st2);

}

int main () {
    explainStack();

}

// no indexing is used in stack only above commands can be used 