#include <iostream>
using namespace std;

void selection_sort(int arr[], int len)
{
    for(int i = 0; i<=len-2; i++)
    {
        int min = i;
        for(int j = i; j<=len-1; j++)
        {
            if(arr[j]<arr[min]) min = j;

        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i<len; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

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
    selection_sort(arr, num);
}