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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=0;
        int r=n-1;
        int area=0;
        while(l<r)
        {
            area=max(area,min(arr[l],arr[r])*(r-l));
            if(arr[l]<arr[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout<<area<<endl;
        
        }
        return 0;
 }
