//Given the root of a binary tree, return the preorder traversal of its nodes' values.

void preOrder(struct TreeNode* root, int* vetor, int* i){
    if(root == NULL){
        return;
    }
    vetor[(*i)++]= root->val;
    preOrder(root->left, vetor, i);
    preOrder(root->right, vetor, i);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* vetor = malloc(sizeof(int)*100); 
    *returnSize=0;
    preOrder(root, vetor, returnSize);
    return vetor;
}
