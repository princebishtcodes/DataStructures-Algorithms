#include <bits/stdc++.h>
using namespace std;

// Better Approach : Using Hash Map
// int singleNumber(vector<int> &arr)
// {
//     unordered_map<int, int> um;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         um[arr[i]]++;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (um[arr[i]] == 1)
//         {
//             return arr[i];
//         }
//     }
//     return 0;
// }

// Optimal Approach : Using XOR
int singleNumber(vector<int>&arr){
    int XOR = 0;
    for(int i = 0; i < arr.size(); i++){
        XOR = XOR^arr[i];
    }
    return XOR;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    cout << singleNumber(arr) << endl;
    return 0;
}