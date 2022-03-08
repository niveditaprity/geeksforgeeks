class Solution {
public:
    string reorganizeString(string s) {
      int n=s.size();
        string s1="";
        unordered_map<char,int>mp;
        for(auto k:s)
            mp[k]++;
        //max heap
        priority_queue<pair<int,char>>pq;
        for(auto k:mp){
            pq.push({k.second,k.first});
        }
          auto b=pq.top();
            pq.pop();
            s1+=b.second;
            b.first--;
        while(!pq.empty()){
          
            auto tmp=pq.top();
            pq.pop();
            s1+=tmp.second;
            tmp.first--;
            if(b.first>0)
            pq.push(b);
           // pq.push(c);
            b=tmp;
            
            
        }
        if(b.first>0)//element to be added to the string is still remained and pq is empty so return "";
            return "";
        return s1;
    }
        
};
