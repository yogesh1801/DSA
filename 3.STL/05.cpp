#include <bits/stdc++.h>
using namespace std;
// queues in C++


void explainQueues() {

    // almost same as stack except the FIFO
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3); // pushing the values into the queue

    q.back() +=5; // adding 5 to the list 

    cout << q.back();

    cout << q.front();

    q.pop(); // deletes the first guy
    cout << q.front();
}

int main (){

}