#include<bits/stdc++.h>
using namespace std;
int evaluate(string exp)
{
    stack<int>st;
    if (!st.empty()) return -1;  
  int i;
    // Scan all characters one by one  
    for (i = 0; exp[i]; ++i)  
    {  
        // If the scanned character is an operand (number here),  
        // push it to the stack.  
        if (isdigit(exp[i]))  
            st.push(exp[i] - '0');  
  
        else
        {  
            int val1 = st.top();
            st.pop();  
            int val2 =st.top();
            st.pop();  
            switch (exp[i])  
            {  
            case '+': st.push( val2 + val1); break;  
            case '-': st.push(val2 - val1); break;  
            case '*': st.push(val2 * val1); break;  
            case '/': st.push(val2/val1); break;  
            }  
        }  
    }  
    return st.top();  
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         cout<<evaluate(s)<<endl;
         
         
         
     }//code
	return 0;
}
