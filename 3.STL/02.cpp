// learning vectors

# include<bits/stdc++.h>
using namespace std;

void explainvector(){
    // vector are dynamic in nature
    vector<int> v; //  creates a empty cotainer
    v.push_back(1); // enters 1 in the container
    v.emplace_back(2); // same as push back but is faster somehow read it
    v.push_back(3);

    // vector of a pair datatype
    vector<pair<int,int>> v2;
    v2.push_back({1,2}); // need to pass the pair
    v2.emplace_back(1,2); // assumes it to be a pair

    vector<int> v3(5,100); // vector with size 5 and each entry as 100

    vector<int> v4(5) ;// vector of size 5 with 0 entires

    vector<int> v5(v3) ; // copy of v3

    // even after telling the size the push back works perfectly

    // accessing the vector

    cout << v[0] << " " << v.at(0) << endl; // both are correct

    // using iterators important

    vector<int> :: iterator it = v.begin(); // it points to the memory of first element of the same
    it ++ ; // moves to the next memory
    cout << *(it) << " ";


    // other iterators

    vector<int> :: iterator it = v.end(); // starts from memory after the last element

    // read rend and rbegin not much used 

    cout << v.back() << " " << endl ;// means the last element

    // printing the vector ,use indexing or iterations

    for (vector<int> :: iterator itr = v.begin() ; itr !=v.end() ; itr++ ){
        cout << *(it) << endl;
    }

    // better sytnax
    // using auto , datatype is automatically assigned 
    for (auto itr = v.begin() ; itr != v.end() ; itr ++) {
        cout << *(itr) << endl;
    }

    // using for each loop
    for (auto i : v) { // this means for each i in v , here auto gives integer datatype
        cout << i << " ";
    }

    // delete in the vector

    v.erase(v.begin() +2); // vector automatically gets reshuffled

    // remove multiple entries using the start end 

    v.erase(v.begin()+1 , v.begin()+3); // last one is not included hence only 2nd and 3rd element gets deleted 4th is still there

    // insert function in vectors
    vector<int> v6 (2,100); // two instances of 100
    v6.insert(v6.begin() , 300); // element inserted at first position of v6
    v6.insert(v.begin()+1 , 2,10); //  two occurances of 10 added

    vector<int> copy(2,10);
    v6.insert(v6.begin()+1 ,copy.begin() , copy.end()); // a vector added to the vector

    // size of vector
    cout << v.size();

    // removing last element of vector
    v.pop_back();
    // swap swap two vectors v1 and v2
    v3.swap(v4);
    // clearing the whole vector
    v.clear();

    cout << v.empty(); //  return boolean if vector is empty or not





}

int main() {
    explainvector();

    return 0;
}