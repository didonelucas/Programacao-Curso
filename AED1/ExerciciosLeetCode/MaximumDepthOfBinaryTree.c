/*Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.*/
int maxDepth(struct TreeNode* root) {
    if(root == NULL){ 
        return 0;       //Checa se a raiz não é vazia
    }
    int rDepth = maxDepth(root->right); //Calculo recursivamente o tamanho da subarvore da direita
    int lDepth = maxDepth(root->left);  //Calculo recursivamente o tamanho da subarvore da esquerda
    if(rDepth > lDepth){
        return rDepth + 1; 
    }
    return lDepth + 1;
}
