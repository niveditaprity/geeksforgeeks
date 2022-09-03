//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isChefCanCook(int mid,int N,vector<int>&A)
    {
        int totalDonuts =0,n = A.size();
        
        for(int i=0;i<n;i++){
            int timetaken = 0,timewilltake = A[i];
            
            while(timetaken+timewilltake <=mid){
                totalDonuts++;
                if(totalDonuts >=N)
                return true;
                
                timetaken+=timewilltake;
                timewilltake+=A[i];
            }
        }
        
        return false;
        
    }
    int findMinTime(int N, vector<int>&A, int L){
       sort(A.begin(),A.end());
       int l = A[0];
       int r = A[L-1]* N*(N+1)/2;
       int ans=0;
       while(l<=r)
       {
           int mid = l+(r-l)/2;
           if(isChefCanCook(mid,N,A))
           {
            ans = mid;
            r = mid-1;
           }
           else
           {
               l = mid+1;
           }
       }
       return ans;//write your code here
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int l;
	    cin >> l;
	    vector<int>arr(l);
	    for(int i = 0; i < l; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    int ans = ob.findMinTime(n, arr, l);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends
