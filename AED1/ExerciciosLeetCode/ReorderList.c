/*You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    struct ListNode dummy;
    struct ListNode* reorderedList = &dummy;
    dummy.next = NULL;

    for(int i=0; head!=NULL; i++){
        if(i%2==0){
            reorderedList->next = head;      //Indice Par, pego na ordem certa
            head = head->next; 
        }else{                               //Indice Impar, vou pegar na ordem inversa
            if(head->next == NULL){ 
                reorderedList->next = head;
                head = NULL;
            }else{
                struct ListNode* prev = head;

                while(prev->next->next != NULL){
                    prev = prev->next;            //Vou até o penúltimo nó
                }
                reorderedList->next = prev->next; //Pego o último
                prev->next = NULL;                //Ultimo vira NULL
            }
        }
        reorderedList = reorderedList->next;
        reorderedList->next = NULL;
    }
}
