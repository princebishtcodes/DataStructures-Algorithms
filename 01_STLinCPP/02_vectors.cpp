#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector is a dynamic array, which is flexible and changes its size according to input.
    vector<int> v = {1, 2, 3, 4, 5, 6};

    vector<int> arr(5);       // A vector of size 5 is declared with 5 instances of 0 or garbage value
    vector<int> arr1(6, 100); // A vector of size 6 with 6 instances of 100

    vector<pair<int, int>> v1; // A vector with  pair datatype
    // v.size(); // Used to find out the size of vector
    // cout << v.size() << endl;

    // ***************Methods**************
    // INSERTION
    // 1. v.push_back(4): Pushes the value 4 at the end of vector v but as an object
    v.push_back(10);
    v1.push_back({1, 2});

    // 2. v.emplace_back(5): Pushes the value 5 at the end but directly and much more fast
    arr.emplace_back(9);
    v1.emplace_back(3, 4);

    // 3. v.insert(v.begin()+2, 34) : Inserts the 34 at 2nd index
    v.insert(v.begin() + 4, 34);

    // If we want to copy whole vector inside another vector
    vector<int> copy(3, 50);
    arr.insert(arr.begin() + 1, copy.begin(), copy.end());
    // Write the index with begin to insert the elements and then run the iterator from begin to end

    // DELETION
    // 1. v.erase(v.begin()) : To remove one Element give the specific index to delete from
    v.erase(v.begin() + 2); // Deletes the element at 2nd Index
    // To delete multiple elements v.erase(v.begin()+1, v.begin()+3), it deletes the element from i 1 to i 2;
    v.erase(v.begin() + 1, v.begin() + 2);

    // 2. v.pop_back() : removes the element from the last
    arr.pop_back();

    // ***************Iterators**************
    vector<int>::iterator it = v.begin();
    // Here the v.begin() points to address of 1st element at 0 index
    cout << *(it) << " ";
    // That's why we dereference the address using *...
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v.end();
    // (IMP), The v.end() points at the index after last index, it1-- is needed to be used to get the last element
    it1--;
    cout << *(it1) << " " << endl;

    // Instead of using full vector<int>::iterator we can use auto keyword
    auto it2 = v1.begin();

    // Accessing Elements in an Vector: for Each loop can be used
    for (auto it : arr)
    {
        cout << it << " ";
    }

    // Other Imp Functions
    // 1. v.clear() : Clears the vector, all the elements
    arr.clear();

    // 2. v.swap(12, 32) : Swaps the elements

    // 3. v.empty() : If no element is present then it returns 1, else return 0, kinda boolean

    return 0;
}