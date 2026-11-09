//Given the root of a binary tree, return the postorder traversal of its nodes' values.

void postOrder(struct TreeNode* root, int* vetor, int* i){
    if(root == NULL){
        return;
    }
    postOrder(root->left, vetor, i);
    postOrder(root->right, vetor, i);
    vetor[(*i)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* vetor = malloc(sizeof(int)*100);
    *returnSize = 0;
    postOrder(root, vetor, returnSize);
    return vetor;
}
