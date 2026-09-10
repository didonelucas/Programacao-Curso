/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.*/
void moveZeroes(int* nums, int numsSize) {
    int i, k=0;

    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
           nums[k]=nums[i];
           k++;
        }
    }
    while(k<numsSize){
        nums[k]=0;
        k++;
    }
}
