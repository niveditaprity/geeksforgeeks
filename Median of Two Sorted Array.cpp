int findMedian(int arr[], int n, int brr[], int m){
    // code here
    int i=n-1;
    int j=0;
    while(i>=0&&j<m)
    {
        if(arr[i]>brr[j])
        {
            swap(arr[i],brr[j]);
        }
        i--;
        j++;
    }
    sort(arr,arr+n);
    sort(brr,brr+m);
    int len=m+n;
    int mid=0;
    int sum=0;
    if(len%2==0)
    {
        mid=(len/2)-1;
        if(mid==n-1)
        {
            sum=arr[mid]+brr[0];
        }
        else if(mid<(n-1))
        {
            sum=arr[mid]+arr[mid+1];
        }
        else
        {
            sum=brr[mid-n]+brr[mid+1-n];
        }
        sum=sum/2;
    }
    else
    {
        mid=len/2;
        if(mid<=n-1)
        {
            sum=arr[mid];
        }
        else
        {
            sum=brr[mid-n];
        }
    }
    return sum;
}
