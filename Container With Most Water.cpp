long long maxArea(long long A[], int len)
{
  long long area=0;
  int l=0;
  int h=len-1;
  while(l<=h)
  {
      area=max(area,(h-l)*min(A[l],A[h]));
      if(A[l]<A[h])
      {
          l++;
      }
      else
      {
          h--;
      }
  }
  return area;// Your code goes here
}
