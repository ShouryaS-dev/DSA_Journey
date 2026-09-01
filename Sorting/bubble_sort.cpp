#include <iostream>
using namespace std;

void bubble_sort(int arr[], int num);
int main()
{
    cout<<"Enter the length of ur array : ";
    int num;
    cin>>num;
    int arr[num];
    cout<<"Enter "<<num<<" elements separated by a space : \n";
    for(int i = 0; i<num; i++) 
    {
        cin>>arr[i];
    }
    //array constructed

    cout<<"Current order of array -> ";
    for(auto i : arr) cout<<i<<" ";
    cout<<endl;
    cout<<"Array after sorting -> ";
    bubble_sort(arr, num);
}

void bubble_sort (int arr[], int len)
{
    for(int i = len-1; i>=0; i--)
    {
        for(int j = 0; j<=i-1; j++)
        {
            if(arr[j]>arr[j+1]) 
            {
                std::swap(arr[j+1], arr[j]);

            }
        }
    }
    for(int i = 0; i<len; i++) std::cout<<arr[i]<<" ";
}