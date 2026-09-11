/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.*/
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *returnArray;
    returnArray = malloc(sizeof(int)*(digitsSize+1));

    for(int i = digitsSize-1;i>=0;i--){
        if(digits[i]<9){ //Se for menor que 9, adciona um e termina
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i]=0; //Digits[i] = 9
    }
    //Todos os dígitos são 9, então: 
    returnArray[0] = 1;           
    for(int i = 1; i<=digitsSize;i++){
        returnArray[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return returnArray;
}
