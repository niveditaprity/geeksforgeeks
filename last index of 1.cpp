#include <iostream>
using namespace std;
int main() 
{
    int t; cin>>t;
    while(t--)
    { 
        string s; cin>> s;
        int l=s.length(),index=-1;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1'){index=i;}
        }
        cout<<index<<endl;
	}
	return 0;
}
