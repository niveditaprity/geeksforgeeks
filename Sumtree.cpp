int sum(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (sum(root->left)+root->data+sum(root->right));
    }// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
  int ls,rs;
  if(root==NULL||(root->right==NULL&&root->left==NULL))
  {
      return 1;
  }
  ls=sum(root->left);
  rs=sum(root->right);
  if((root->data==ls+rs)&&isSumTree(root->left)&&isSumTree(root->right))
  {
      return 1;
  }
  return 0;// Your code here
}
