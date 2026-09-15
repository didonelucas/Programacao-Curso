/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/

bool isValid(char* s) {
    char pilha[10000];
    int topo=-1;
    int tamS = strlen(s);
    for(int i=0;i<tamS;i++){
        if(s[i]=='(' || s[i]== '[' ||  s[i]== '{'){
            topo++;
            pilha[topo]=s[i];
        }
        else{
            if(topo==-1){
                return false;
            }
            if((s[i]==')'&& pilha[topo]!='(')  || (s[i]==']'&& pilha[topo]!='[') || (s[i]=='}'&& pilha[topo]!='{')){
                return false;            
            }
            topo--;
        }
    }
    return topo==-1;
}
