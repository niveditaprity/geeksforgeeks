#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>>minh;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            v.push_back(minh.top());
            minh.pop();
        }
    }
    while(!minh.empty())
    {
        v.push_back(minh.top());
        minh.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
        }
        cout<<endl;
}
        
        //code
	return 0;
}
