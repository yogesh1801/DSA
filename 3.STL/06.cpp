#include <bits/stdc++.h>
using namespace std;

void explainPQ () {
    // also called max heap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(8);
    pq.emplace(5);

    // note the largest element stays at the top



    cout << pq.top(); // returns last element entered like the stack
    pq.pop(); // pops the first element in the queue

    // elements are maintained in a tree fashion

    // storing minimum element at the top using priority queue

    // also called minimum heap
    
    priority_queue<int , vector<int> , greater<int>> pq1;

    pq1.push(1);
    pq1.push(2);
    pq1.emplace(3); //  this will store 2 at the top??

    // how ? read the logic behind it

    cout << pq1.top();

}

int main() {
    explainPQ();
    return 0;
}
