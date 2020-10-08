#include<bits/stdc++.h>
using namespace std;

string caseSpecificSorting(string str)
{
    string res;
    
    string lres, ures;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            lres += str[i];
        }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ures += str[i];
        }
    }
    
    sort(lres.begin(), lres.end());
    sort(ures.begin(), ures.end());
    
    int uCount = 0, lCount = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            res += lres[lCount++];
        }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            res += ures[uCount++];
        }
    }
    
    return res;
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        
        string s;
        cin >> s;
        
        cout << caseSpecificSorting(s) << endl;
    }
	return 0;
}
