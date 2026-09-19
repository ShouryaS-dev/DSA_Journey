#include <iostream>
#include <vector>
using namespace std;

bool IsValid(vector<int>& arr, int n, int m, int max_allowed_pages)
{
    int students = 1, pages = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > max_allowed_pages) return false;

        else if (pages + arr[i] <= max_allowed_pages) pages += arr[i];

        else 
        {
            students += 1;
            pages = arr[i];
        }
    }
    if(students > m) return false;
    else return true;
}

int AllocateBooks(vector<int>& arr, int n, int m)
{
    if(m>n) return -1;
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum+=arr[i];
    int start = 0, end = sum;
    int ans = 0;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(IsValid(arr, n, m, mid))
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
    vector<int> arr = {2, 1, 3, 4};
    int n_books = 4;
    int students = 2;

    cout<<AllocateBooks(arr, n_books, students)<<endl;
}
