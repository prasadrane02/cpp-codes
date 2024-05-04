#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
        return 0;

    if(n==1 || n==2)
        return 1; 

    else
        return(fib(n-1)+fib(n-2));
    
}

int main()
{
    int num;
    cout<<"Enter the input: ";
    cin>>num;
    cout<<endl;
    
    cout<<"The fibonacci series is: ";
    for(int i=0; i<=num; i++)
    {
        int result = fib(i);
        
        cout<< result<<" ";
    }

    //cout<<endl;
    //int result = fib(num);
    //cout<<result;
}