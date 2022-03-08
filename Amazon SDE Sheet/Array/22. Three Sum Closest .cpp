class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int n=arr.size();
      int mini=INT_MAX;
      int currsum=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
	    int j=i+1,k=n-1;
	    while(j<k)
	    {
	        if(arr[i]+arr[j]+arr[k]==target){
                   return target;
	        }
            if(arr[i]+arr[j]+arr[k]<target)
            {
               if(mini>abs((arr[i]+arr[j]+arr[k])-target))
               {
                 mini=abs((arr[i]+arr[j]+arr[k])-target);
                 currsum=(arr[i]+arr[j]+arr[k]);
               }
               j++;
            }
            if(arr[i]+arr[j]+arr[k]>target)
            {
               if(mini>=abs((arr[i]+arr[j]+arr[k])-target))
               {
                 mini=abs((arr[i]+arr[j]+arr[k])-target);
                 currsum=(arr[i]+arr[j]+arr[k]);
               }
               k--;
            }
	    
	}
	}
	   
	
	 return currsum;// Your code goes here
        
    }
};
