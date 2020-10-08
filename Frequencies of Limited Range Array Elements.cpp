void frequencycount(vector<int>& arr,int n)
{ 
   vector<int>a(n,0);
   for(int i=0;i<n;i++)
   {
       a[arr[i]-1]++;
   }
   arr=a;// code here
}
