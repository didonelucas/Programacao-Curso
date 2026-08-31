/*Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.*/
bool isPowerOfFour(int n) {
    for(int i=0;i<20;i++){
        if(pow(4,i)==n){
            return true;
        }
    }
    return false;
}
