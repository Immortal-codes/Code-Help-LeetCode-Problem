#include<iostream>

using namespace std;


int sum(int a[],int k)
{
    for (int i = 0; i <k; i++)
    {
       cout<<a[i]<<" ";
    }
    
}

int main()
{
    int arr[10]={1,27,43,56,11,35,8,9};
    int n=10;
    int z=sum(arr,n);

   
}