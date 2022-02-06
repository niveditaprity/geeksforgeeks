class Solution{
public:	
	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int count=0;
	  for(int i=n-1;i>=2;i--)
	  {
	      int j=0,k=i;
	      while(j<k)
	      {
	        if(arr[j]+arr[k]==arr[i])
	        {
	            count++;
	            j++;
	            k--;
	        }
	        
	        else if(arr[i]>arr[j]+arr[k])
	        {
	            j++;
	        }
	        else
	        {
	            k--;
	        }
	      }
	      
	  }
	  return count;
	  // Your code goes here
	}
};
