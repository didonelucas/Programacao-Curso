int lengthOfLastWord(char* s) {
    int soma=0, i, tam;

    tam = strlen(s);

    for(i=tam-1; i>=0; i--){
        if(s[i]!=' '){
            soma++;
        }else if(soma>0){
            break;
        }
    }
    return soma;
}
