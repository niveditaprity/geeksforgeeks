int search(int arr[], int x, int n)
{
for (int i = 0; i < n; i++)
if (arr[i] == x)
return i;
return -1;
}
void printPostOrder(int in[], int pre[], int n)
{
int root=search(in,pre[0],n) ;

// If left subtree is not empty, print left subtree
if (root != 0)
printPostOrder(in, pre + 1, root);

// If right subtree is not empty, print right subtree
if (root != n - 1)
printPostOrder(in + root + 1, pre + root + 1, n - root - 1);

// Print root
cout << pre[0] << " ";//Your code here
}
