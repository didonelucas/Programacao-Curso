/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* resultado = &dummy;
    
    while(list1!=NULL && list2!=NULL){
        if(list1->val < list2->val){
            resultado->next = list1;       //Ordem crescente
            list1 = list1->next;
        }else{
            resultado->next = list2;
            list2 = list2->next;
        }
        resultado = resultado->next;
    }
    //Pego a parte da lista que não terminou de ser lida e coloco no final
   if(list1 != NULL) {
        resultado->next = list1;
    } else {
        resultado->next = list2;
    }
    return dummy.next;
}
