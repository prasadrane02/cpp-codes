#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    int count = 1;
    while(count < n)
    {
        for(int i=0; i<n-count; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }

    cout<<"The sorted Array is: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}