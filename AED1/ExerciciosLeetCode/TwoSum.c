/*You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, *saida;
    *returnSize = 2;
    saida = malloc(sizeof(int)*2); //Saída são dois inteiros

    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){ //j=i+1 para não testar o mesmo número
            if(nums[i] + nums[j] == target){
                saida[0] = i;
                saida[1] = j;
                return saida;
            }
        }
    }
    return 0;
}
