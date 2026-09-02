/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.*/
int searchInsert(int* nums, int numsSize, int target) {
    int x=0;

    if(target < nums[0]){             //caso o número digitado seja menor que o primeiro, retorna a primeira posição
        return 0;              
    }
    if(target > nums[numsSize-1]){    //caso o número digitado seja maior que o último, retorna a nova posição
        return numsSize;       
    }

    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){         //caso seja igual ao atual, retorna a opção do atual
            x = i; 
            break;
        }else if(target>=nums[i] && target<=nums[i+1]){ //caso esteja entre o atual e o próximo, retorna a posição do prox
            x = i+1;
            break;
        }
    }
    return x;
}
