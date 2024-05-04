#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while(s<=e)                                      // s and e may be on the same element, so = is a must here
    {
        int mid = (s+e)/2;
        //cout<<"Mid element: "<<mid<<endl;
        if(key > arr[mid])
        {
            s = mid+1;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            return mid+1;                              // sequence of this conditions matters
        }
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

    cout<<"The index of key element in array: "<<endl;
    cout<<binarySearch(arr, n, key);
    
    return 0;
}