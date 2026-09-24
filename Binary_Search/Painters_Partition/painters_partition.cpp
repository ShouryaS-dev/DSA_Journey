#include <iostream>
#include <vector>
using namespace std;

bool IsValid(vector<int>& arr, int sz, int m, int max_time)
{
    int painter = 1, time = 0;
    for(int i = 0; i<sz; i++)
    {
        if(time+arr[i]<=max_time)
            time+=arr[i];
        else
        {
            painter+=1;
            time = arr[i];
        }
    }
    if (painter > m) return false;
    else return true;
}

int MinTimeToPaint(vector<int>& arr, int sz, int m)
{
    int sum = 0, end = 0, start = 0;
    int ans = 0;
    for(int i = 0; i<sz; i++)
    {
        sum+=arr[i];
        if(arr[i]>start) start = arr[i];
    }
    end = sum;
    //initialized value of start and end

    while(start<end)
    {
        int mid = start + (end-start)/2;
        if(IsValid(arr, sz, m, mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr {40, 30, 10, 20};
    int sz = 4;
    int m = 2;

    cout<<MinTimeToPaint(arr, sz, m)<<endl;
}
