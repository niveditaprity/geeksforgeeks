static bool cmp(string s1,string s2)
	{
	    return s1+s2>s2+s1;
	}
	string printLargest(vector<string> &arr) {
	  sort(arr.begin(),arr.end(),cmp);
	  string s="";
	  for(int i=0;i<arr.size();i++)
	  {
	      s+=arr[i];
	  }
	  return s;// code here
	}
