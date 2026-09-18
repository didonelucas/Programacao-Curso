/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *start;
    int tam=0;
    start = head;
    
    while(start!=NULL){
        tam++;
        start = start->next;    //Descubro o tamanho da lista encadeada
    }

    start = head; 

    for(int i=0; i<tam/2; i++){
        start = start->next;    //Ando até o valor da metade da lista
    }
    return start;  //Retorno o resto da lista a partir do nodo do meio
}
