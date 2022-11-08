#include<iostream>

using namespace std;


int sum(int a[],int k)
{
    int p=0;
    for (int i = 0; i < k; i++)
    {
        p=p+a[i];
    }
    return p;
}

int main()
{
    int arr[5]={1,-5,3,-2,7};
    
    int n=5;

    int z=sum(arr,n);

    cout<<z;
}