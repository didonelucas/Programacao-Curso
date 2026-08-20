/*Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    int i;
    char** saida = (char**)malloc(n* sizeof(char*));
    for(i=1; i<=n;i++){
        if((i%3==0) && (i%5==0)){
            saida[i-1]= "FizzBuzz";
        }else if(i%3==0){
            saida[i-1]= "Fizz";
        }else if(i%5==0){
            saida[i-1]= "Buzz";
        }else{
            saida[i-1] = (char*)malloc(10* sizeof(char));
            sprintf(saida[i-1],"%d",i);
        }    
    }
    *returnSize = n;
    return saida;
}
