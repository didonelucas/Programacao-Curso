int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, *saida;
    *returnSize = 2;
    saida = malloc(sizeof(int)*2);

    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                saida[0] = i;
                saida[1] = j;
                return saida;
            }
        }
    }
    return 0;
}
