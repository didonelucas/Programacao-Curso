/*Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.*/
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q == NULL){
        return true;            //Ambas são nulas
    }
    if(p == NULL || q == NULL){
        return false;            //Uma delas é Nula
    }
    if(p->val != q->val){
        return false;            //Árvores diferentes
    }
    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right); //Testa recursivamente todos os casos
}
