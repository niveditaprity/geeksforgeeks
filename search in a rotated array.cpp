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
         vector<int>arr(n);
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int k;
         cin>>k;
         vector<int>::iterator it = find(arr.begin(), arr.end(), k);
         if(it!=arr.end())
         {
             int index =distance(arr.begin(), it);
             cout<<index<<endl;
         }
         else
         {
             cout<<-1<<endl;
         }
     }//code
	return 0;
}
