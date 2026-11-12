/*Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.*/

bool pathSum(struct TreeNode* root, int targetSum, int sum){
    if(root==NULL){
        return false;
    }
    sum += root->val;
    if(root->left==NULL && root->right==NULL){ //Verifico se é folha
        if(sum==targetSum){  //Se for, verifico se a soma é igual ao alvo
            return true;
        }
    }else {  //Se não for, recursão até esgotar as possibilidades
        return pathSum(root->left, targetSum, sum) || pathSum(root->right, targetSum, sum); 
    }
    return false;
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    return pathSum(root, targetSum, 0);
}
