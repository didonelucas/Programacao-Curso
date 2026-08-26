void reverseString(char* s, int sSize) {
    int i, k, aux;
    k=sSize-1;
    for(i=0;i<k;i++){
        aux=s[i];
        s[i]=s[k];
        s[k]=aux;
        k--;
    }
}
