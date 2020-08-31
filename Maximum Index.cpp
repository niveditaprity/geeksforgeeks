int maxIndexDiff(int arr[], int n) 
{
    int low=0,high=n-1,ans=0,max=0;
while(low<=high)
{
if(arr[low]<=arr[high])
{
ans=high-low;
if(ans>max)
max=ans;
low=low+1;
high=n-1;
}
else
high--;
}
return max;
}
