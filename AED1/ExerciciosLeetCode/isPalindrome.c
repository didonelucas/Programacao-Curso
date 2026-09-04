bool isPalindrome(int x) {
    double rev=0, rem, orig=x;
    while(x>0){               //Até X não ter mais dígitos
        rem = x%10;          //Pego o último digito de X
        rev = rev*10 + rem;  //Adciono o dígito ao número invertido
        x = x/10;           //Tiro o últomo dígito de X
    }
    if(rev == orig){
        return true;
    }
    return false;
}
