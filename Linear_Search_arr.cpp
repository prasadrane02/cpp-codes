#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
            return i+1;
    }
    return -1;
}



int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key element: ";
    cin>>key;

    cout<<"The number of key element in array: ";

    cout<<linearSearch(arr, n, key)<<endl;
    return 0;
}





// Time complexity : O(n)