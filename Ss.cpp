#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>> n;

   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
    for(int k=0;k<arr[n]-1;k++)
    {
        for(int j=k+1;j<arr[n];j++)
        {
            if(arr[j]<arr[k])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}