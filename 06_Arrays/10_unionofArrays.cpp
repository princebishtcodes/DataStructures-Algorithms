#include <bits/stdc++.h>
using namespace std;

// Brute Force : Insert all the Elements in a Set
// vector<int> unionArray(vector<int> &v1, vector<int> &v2)
// {
//     set<int> s;
//     for (int i = 0; i < v1.size(); i++)
//     {
//         s.insert(v1[i]);
//     }
//     for (int i = 0; i < v2.size(); i++)
//     {
//         s.insert(v2[i]);
//     }
//     vector<int> result;
//     for (auto it : s)
//     {
//         result.push_back(it);
//     }
//     return result;
// }

// Optimal Approach : Using two pointers approach
vector<int> unionArray(vector<int> &v1, vector<int> &v2)
{
    vector<int> unionArr;
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != v1[i])
            {
                unionArr.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != v2[j])
            {
                unionArr.push_back(v2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.back() != v1[i] || unionArr.size() == 0)
        {
            unionArr.push_back(v1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArr.back() != v2[j] || unionArr.size() == 0)
        {
            unionArr.push_back(v2[j]);
        }
        j++;
    }
    return unionArr;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2 = {2, 3, 4, 8, 9};
    vector<int> result = unionArray(v1, v2);

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}