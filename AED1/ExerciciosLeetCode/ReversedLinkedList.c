/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *atual = head;
    struct ListNode *ant = NULL;
    struct ListNode *prox = NULL;

    while(atual != NULL){
        prox = atual->next;
        atual->next = ant;
        ant = atual;
        atual = prox;
    }
    return ant;
}
