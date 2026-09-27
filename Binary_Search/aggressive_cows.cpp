#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsValid(vector<int>& arr, int sz, int c, int min_distance)
{
    int cows = 1;
    int last_stall = arr[0];
    for(int i = 0; i<sz; i++)
    {
        if(arr[i]-last_stall >= min_distance)
        {
            cows++;
            last_stall = arr[i];
        }
        if(cows == c) return true;
    }
    return false;
}

int GetDistance(vector<int>& arr, int sz, int c)
{
    sort(arr.begin(), arr.end());
    int start = 1, ans = 0;

    int end = arr[sz-1] - arr[0];
    
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if (IsValid(arr, sz, c, mid))
        {
            ans = mid;
            start = mid+1;
        }
        else end = mid-1;
    }
    return ans;
}

int main()
{
    vector<int> arr {1, 2, 8, 4, 9};
    int sz = 5;
    int c = 3;
    cout<<GetDistance(arr, sz, c)<<endl;
}