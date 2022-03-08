class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int n=arr.size();
      int currsum=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        for(int k=j+1;k<n;k++)
	        {
	            if(abs(target-currsum)>abs(target-(arr[i]+arr[j]+arr[k])))
	            {
	                currsum=arr[i]+arr[j]+arr[k];
	            }
	            }
	        }
	    }
	   
	
	 return currsum;// Your code goes here
        
    }
};
