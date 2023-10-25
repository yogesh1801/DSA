#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int,int> mpp; // key value pairs
    // keys are unique

    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2; // {1,2}
    mpp.emplace(2,3); // error in striver video
    mpp.insert({3,4});
    // maps stores unqiue keys in sorted order

    mpp2[{2,3}] = 10;
    
    // iterating through the map
    for(auto it : mpp) {
        std :: cout << it.first << " " << it.second << std :: endl ;
    }

    // here the it is the datatype in called pair (key : value pair)

    auto itr = mpp.find(2); // find through the key
    std :: cout << (*itr).first <<  std::endl; // note *(itr) may not work in cout

    // upper bound , lower bound
 

}

void otherMaps() {
    // similarly we have
    multimap<int , int>mulmap;
    // multiple keys allowed but then app[key] cannot be used anymore

    unordered_map<int,int> unmap;

    //same as ordered and unordered set;
    


}

// using namespace can create problems , keep a check on this





int main() {

}

// std is