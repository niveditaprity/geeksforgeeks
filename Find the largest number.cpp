class Solution{
public:
    
    bool check(int n)
    {
        int d=n%10;
        n=n/10;
        while(n)
        {
            if(n%10>d)
            {
                return false;
            }
            d=n%10;
            n=n/10;
        }
        return true;
    }
    
    
    int find(int N){
       while(N>1)
       {
         if(check(N))
         {
             return N;
         }
         N--;
       }// code here
    }
};
