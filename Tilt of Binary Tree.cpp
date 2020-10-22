int sum(Node*root)
{
    if(root==NULL)
{
    return 0;// Code here
}
if(root->right==NULL&&root->left==NULL)
{
    return root->val;
}
return sum(root->right)+sum(root->left)+root->val;

}
int tiltTree(Node* root)
{
    if(root==NULL)
{
    return 0;// Code here
}
if(root->right==NULL&&root->left==NULL)
{
    return 0;
}
return abs(sum(root->right)-sum(root->left))+tiltTree(root->right)+tiltTree(root->left);
}
