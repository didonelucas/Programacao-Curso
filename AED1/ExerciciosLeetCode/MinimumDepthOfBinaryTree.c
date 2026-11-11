/*Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.*/

int minDepth(struct TreeNode* root) {
    if(root == NULL){ 
        return 0;       //Checa se a raiz não é vazia
    }
    int lDepth = minDepth(root->left);  //Calculo recursivamente o tamanho da subarvore da esquerda
    int rDepth = minDepth(root->right); //Calculo recursivamente o tamanho da subarvore da direita
    if(lDepth == NULL){
        return rDepth + 1; 
    }
    else if(rDepth == NULL){
        return lDepth + 1;
    }
    else if(rDepth < lDepth){
        return rDepth + 1; 
    }
    return lDepth + 1;
}
