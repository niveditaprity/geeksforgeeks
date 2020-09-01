#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         int res=0;
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int x;
         cin>>x;
         int l=0;
         int r=n-1;
         while(l<=r)
         {
             int m=(r+l)/2;
             if(arr[m]==x)
             {
                 res=m;
                 r=m-1;
             }
             else if(arr[m]<x)
             {
                 l=m+1;
             }
             else
             {
                 r=m-1;
             }
         }
         int res1=0;
         l=0;
         r=n-1;
         while(l<=r)
         {
             int m=l+(r-l)/2;
             if(arr[m]==x)
             {
                 res1=m;
                 l=m+1;
             }
             else if(arr[m]<x)
             {
                 l=m+1;
             }
             else
             {
                 r=m-1;
             }
         }
         if(res==0)
         {
             cout<<-1<<endl;
         }
         else
         {
         cout<<res<<" "<<res1<<endl;
         }
         
     }//code
	return 0;
}
