//Given the root of a binary tree, return the inorder traversal of its nodes' values.

void inOrder(struct TreeNode* root, int* vetor, int* i){
    if(root == NULL){
        return;
    }
    inOrder(root->left, vetor, i); 
    vetor[(*i)++] = root->val; 
    inOrder(root->right, vetor, i);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *vetor = malloc(sizeof(int)*100);  //Número máximo de nodos é 100
    *returnSize = 0;
    inOrder(root, vetor, returnSize);
    return vetor;
}
