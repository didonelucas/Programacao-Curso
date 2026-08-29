int expandir(char *s, int e, int d, int tam){
    while(e>=0 && d<tam && s[e]==s[d]){
        e--;
        d++;
    }
    return d-e-1;
}

char* longestPalindrome(char* s) {
    int tam = strlen( s );
    int inicio = 0;
    int tam_max=0;
    int maior_atual;

    for(int i=0; i<tam; i++){
        int tam_impar = expandir(s,i,i,tam);
        int tam_par = expandir(s,i,i+1,tam);

        if(tam_impar>tam_par){
            maior_atual = tam_impar;
        }else{
            maior_atual = tam_par;
        }
        if(maior_atual>tam_max){
            tam_max=maior_atual;

            inicio = i - (maior_atual - 1)/2;
        }
    }

    char *resultado = (char*)malloc((tam_max + 1)*sizeof(char));
    strncpy(resultado,s + inicio,tam_max);
    resultado[tam_max]='\0';
    
    return resultado;
}
