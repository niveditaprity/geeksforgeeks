#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,x;
         cin>>n>>x;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int l=0;
         int r=n-1;
         int count,res=0,rs;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(arr[mid]==x)
             {
                 res=mid;
                 r=mid-1;
             }
             else if(arr[mid]>x)
             {
                 r=mid-1;
             }
             else
             {
                 l=mid+1;
             }
         }
         l=0;
         r=n-1;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(arr[mid]==x)
             {
                 rs=mid;
                 l=mid+1;
             }
             else if(arr[mid]<x)
             {
                 l=mid+1;
             }
             else
             {
                 r=mid-1;
             }
        }
        if(res==0)
        {
            cout<<-1<<endl;
        }
        else
        {
         cout<<abs(res-rs)+1<<endl;
        }
     }//code
	return 0;
}
