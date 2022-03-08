class Solution{
    public:
    vector<int> SortBinaryArray(vector<int>arr)
    {
       int i=0;
       int j=arr.size()-1;
       while(i<j)
       {
           if(arr[i]==1)
           {
               swap(arr[i],arr[j]);
               j--;
           }
           else
           {
               i++;
           }
       }
       return arr;
       
       // Your code goes here 
    }
};
