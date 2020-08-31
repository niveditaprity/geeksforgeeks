vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    vector<int>v;
  int i=0;
  int j=0;
  int k=0;
  while(i<N&&j<M)
  {
     if(arr1[i]==arr1[i+1])
     {
         i++;
     }
     else if(arr2[j]==arr2[j+1])
     {
         j++;
     }
     else if(arr1[i]<arr2[j])
     {
         i++;
     }
    else if(arr1[i]>arr2[j])
     {
         j++;
     }
     else
     {
         v.push_back(arr1[i]);
         i++;
         j++;
         k++;
     }
  }
  if(k==0)
  {
      v.push_back(-1);
  }
 return v; //Your code here
}
