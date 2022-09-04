//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> pattern(int n){
      vector<string> ans;
        int count=1;
        for(int i=0;i<n;i++){
            string t="";
            for(int j=0;j<2*i;j++){
                t.push_back('-');
            }
            for(int j=1;j<=n-i;j++){
                t+=to_string(count++)+"*";
            }
            ans.push_back(t);
        }
        
        for(int i=n-1;i>=0;i--){
            string t="";
            for(int j=n-1;j>=i;j--){
                t+= to_string(count++)+"*";
            }
            t.pop_back();
            ans[i]+= t;
        }
        
        return ans;  // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends
