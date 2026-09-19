/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;     //Salvo o início da lista

    struct ListNode* resultado = &dummy; //Lista para ler até o final
    int carry = 0;

    while(l1!=NULL || l2!=NULL || carry!=0){     //Enquanto houver nodos em pelo menos uma das listas ou sobrar carry no final
        int soma = carry;

        if(l1!=NULL){
            soma+= l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL){
            soma+= l2->val;
            l2 = l2->next;
        }
        resultado->next = malloc(sizeof(struct ListNode));  //Espaço para o novo nodo
        resultado = resultado->next;

        resultado->val = soma%10;
        resultado->next = NULL;
        carry = soma/10;
    }
    return dummy.next;
}
