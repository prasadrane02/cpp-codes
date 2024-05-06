#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = temp;
    }
    
    cout<<"The sorted array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}