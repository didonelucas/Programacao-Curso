/*Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.*/

int sumOfLeftLeaves(struct TreeNode* root) {
    int sum=0;
    if(root == NULL){
        return 0;
    }
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){ //Identifico se é uma folha esquerda
       sum+=root->left->val; 
    }
    sum += sumOfLeftLeaves(root->left); //Somo as folhas esquerdas encontradas na subárvore da esquerda
    sum += sumOfLeftLeaves(root->right); //Somo as folhas esquerdas encontradas na subárvore da direita

    return sum;
}
