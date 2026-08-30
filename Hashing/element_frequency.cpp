#include <iostream>
using namespace std;

void freq(int arr[], int num)
{

    int hash[13] = {0};
    for(int i = 0; i<num; i++)
    {
        hash[arr[i]] += 1;
    }
    //Hash created
    
    int q;
    cout<<"How many elements do u wanna know the frequency of : ";
    cin>>q;
    while(q--)
    {
        int req;
        cout<<"Enter the num you wanna know the frequency of  : ";
        cin>>req;
        cout<<req<<" has appeared "<<hash[req]<<" time(s)\n";
    }
}

int main()
{
    cout<<"Enter the number of elements you want in your array : ";
    int num;
    cin>>num;
    int arr[num];
    cout<<"Enter "<<num<<" elements seperted by a space : ";
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }
    //Array constructed

    freq(arr, num);
}
