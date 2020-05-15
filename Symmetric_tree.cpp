bool ismirror(struct Node*root1,struct Node*root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return true;
    }
    if(root1&&root2&& root1->data==root2->data)
    {
        return (ismirror(root1->left,root2->right)&&ismirror(root1->right,root2->left));
    }
    return false;
    }// complete this function
// return true/false if the is Symmetric or not
bool isSymmetric(struct Node* root)
{
return ismirror(root,root);	// Code here
}
