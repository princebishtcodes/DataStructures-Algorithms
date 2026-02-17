#include <bits/stdc++.h>
using namespace std;

int countFrequency(vector<int> &arr)
{
    int n = arr.size();
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 3)
        {
            counter++;
        }
    }
    return counter;
}

vector<int> hashFrequency(vector<int> &arr)
{
    int n = arr.size();
    vector<int> hashArray(10, 0);
    // Pre-computation part
    for (int i = 0; i < n; i++)
    {
        hashArray[arr[i]] += 1;
    }
    return hashArray;
}

int main()
{
    // Hashing is a technique used in data structures to store and retrieve data in quick and efficient way.
    // It allows for quick access in data structures.

    vector<int> arr = {1, 2, 3, 2, 4, 5, 3, 2, 3, 1};
    // How many times does 3 repeats in array
    // cout << countFrequency(arr) << endl;
    // But its tc is high and not efficient
    // Here, we use hashing -> pre-computing and fetching

    int n;
    cin >> n;
    // Fetching Part
    vector<int> hashArray = hashFrequency(arr);
    cout << hashArray[n] << endl;
    // This is also known as number hashing.
    return 0;
}