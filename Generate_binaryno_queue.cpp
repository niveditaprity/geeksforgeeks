void generate(ll n)
{
queue<string>q;
string s;
q.push("1");
while(n--)
{
  s=q.front();
  q.pop();
  cout<<s<<" ";
  q.push(s+"0");
  q.push(s+"1");
  // Your code here
}
}
