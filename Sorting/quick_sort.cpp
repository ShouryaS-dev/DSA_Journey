#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(vector<int>& arr, int low, int high)
{
    if(low >= high) return;

    int pivotIndex = partition(arr, low, high);

    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
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
    quickSort(arr, 0, num-1);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}