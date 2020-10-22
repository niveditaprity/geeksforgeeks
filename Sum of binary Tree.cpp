long int sumBT(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return root->key+sumBT(root->right)+sumBT(root->left);
    // Code here
}
