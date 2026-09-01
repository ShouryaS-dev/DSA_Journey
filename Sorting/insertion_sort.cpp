#include <iostream>
using namespace std;

void insertion_sort(int arr[], int num);

int main()
{
    cout<<"Enter the lenght of your array : ";
    int num;
    cin>>num;
    cout<<"Enter "<<num<<" elements seperated by a space : ";
    int arr[num];
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }
    //Array constructed
    std::cout<<"Current order fo array\n";
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<"Array after sorting\n";
    insertion_sort(arr, num);

}

void insertion_sort(int arr[], int num)
{
    for(int i = 0; i<=num-1; i++)
    {
        int j = i;
        while(j>0 && arr[j-1] > arr[j])
        {
            std::swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(int i = 0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}