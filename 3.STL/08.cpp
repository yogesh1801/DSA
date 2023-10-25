# include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    multiset<int>ms;
    // obeys the sortedness but not unqiueness.
    ms.insert(1);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);


    ms.erase(1); // Deletes all occurances of 1
    int count = ms.count(1);

    ms.erase(ms.find(1)); // delete only first occurance of 1 because find return itr that is the address and it erases that address only
    
    // ms.erase(ms.find(1) , ms.find(1) + 1); some errorenous code need to check;
}

void explainUset(){
    unordered_set<int>st;
    //works like set except the fact that it is not sorted 
    // upper_bound and lower_bound functions do not work;
}


int main() {
    explainMultiSet();
    return 0;
}