#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right]) 
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    while(left <= mid)
        temp.push_back(arr[left++]);

    while (right <= high)
        temp.push_back(arr[right++]);

    for(int i = low; i<=high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void dividing_array(vector<int>& arr, int low, int high)
{
    if(low>=high) return;

    int mid = (low+high)/2;
    
    dividing_array(arr, low, mid);
    dividing_array(arr, mid+1, high);
    merge(arr, low, mid, high);
}


int main()
{  
    cout<<"Enter the number of elements u want in your array (u want to sort): ";
    int num;
    cin>>num;
    vector<int> arr(num);
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }
    //array constructed
    dividing_array(arr, 0, num-1);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}