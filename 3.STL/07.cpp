#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    // sets hold unique values in a sorted manner 

    set<int>s;
    s.insert(1);
    s.emplace(5);
    s.insert(3);
    // will keep it sorted 
    s.insert(5); // doesnt insert the duplicate values

    auto it11 = s.find(3); //  gives the iterator hence a pointer

    auto it = s.find(6); // if element is not found it will return the end that is after last element

    s.erase(5); // deletes and maintain the order

    // we can also use iterator to remove the element

    s.erase(it);

    // start end erase

    auto it1 = s.find(1);
    auto it2 = s.find(3);
    s.erase(it1,it2); // gives first and last thing , doesnt delete it2

    auto it3 = s.lower_bound(2);
    auto it4  = s.upper_bound(3);

    // see in another video


    

    



    }

int main () {
    explainSet();
}