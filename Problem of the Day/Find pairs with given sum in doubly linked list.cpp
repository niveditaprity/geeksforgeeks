//https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


// } Driver Code Ends
//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>>v;
       Node*right = head;
       Node*left = head;
       while(right->next!=NULL)
       {
           right=right->next;
       }
       bool flag = false;
       while(left != right && right->next != left)
       {
        if((left->data + right->data)==target)
        {
            flag =true;
            v.push_back({left->data,right->data});
            left=left->next;
            right = right->prev;
        }
        else
        {
            if((left->data + right->data)<target)
            {
                left = left->next;
            }
            else
            {
                right=right->prev;
            }
        }
       }
       if(flag)
       {
       return v;
       }
       return {};// code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> target >> n;
        int a;
        cin >> a;
        Node *head = new Node(a);
        Node *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            tail->next = new Node(a);
            tail->next->prev = tail;
            tail = tail->next;
        }
        Solution ob;
        auto ans = ob.findPairsWithGivenSum(head, target);
        if (ans.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << "(" << ans[i].first << "," << ans[i].second << ")"
                     << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
