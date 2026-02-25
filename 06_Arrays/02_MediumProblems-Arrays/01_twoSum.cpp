#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach : Using two For Loops
// vector<int> twoSum(vector<int>&arr, int target){
//     for(int i = 0 ; i < arr.size(); i+=1){
//         for(int j = i+1; j < arr.size(); j++){
//             if(arr[i]+arr[j] == target){
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// Better Approach : Using Hashmap
vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> um;
    for (int i = 0; i < arr.size(); i++)
    {
        int rem = target - arr[i];
        if (um.find(rem) != um.end())
        {
            return {um[rem], i};
        }
        um[arr[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 7, 11, 5};
    vector<int> result = twoSum(arr, 9);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}