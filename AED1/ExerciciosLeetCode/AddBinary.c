/*Given two binary strings a and b, return their sum as a binary string.*/
char* addBinary(char* a, char* b) {
    int tNum1 = strlen(a); 
    int tNum2 = strlen(b);
    int tMax=0;
    if(tNum1>tNum2){
        tMax = tNum1+1; //Pois o resultado da soma só pode ser um caracter maior, EX: 1111 + 1111 = 11110
    }else{
        tMax = tNum2+1;
    }
    char *result = malloc(sizeof(char)*(tMax+1));
    result[tMax]='\0';
    int i = tNum1-1;
    int j = tNum2-1;
    int carry = 0;
    int pos = tMax - 1;
    while(pos>=0){
        int somaAtual = carry;
        if(i>=0){
            somaAtual+= a[i] - '0';
        }
        if(j>=0){
            somaAtual+= b[j] - '0';
        }
        result[pos]=(somaAtual%2) + '0'; //Resultado da soma dos digítos
        carry = (somaAtual/2);           //O carry q sobrou da soma
        i--;
        j--;
        pos--;
    }
     if(result[0] == '0' && tMax > 1){ //Verifica se tem 0s extras a esquerda
        memmove(result, result+1, tMax); // Desloca para a esquerda removendo os 0s extras
    }
    return result;
}
