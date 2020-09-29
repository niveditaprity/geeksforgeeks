class Solution
{
public:
	int is_bleak(int n)
	{
	   int z=n-1,i=1;
while(i<=z){
if(i==__builtin_popcount(z))
return 0;
i+=1;
z-=1;
}
return 1;
}
};
