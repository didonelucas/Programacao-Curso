int maxArea( int* height, int heightSize ) {
    int left = 0;
    int right = heightSize - 1;
    int maior=0, atual;
    while( left<right ){
        if(height[left]>height[right]){
            atual = height[right]*( right-left );
            right--;
        }else{
            atual = height[left]*( right-left );
            left++;
        }
        if( atual>maior ){
            maior = atual;
        }
    }
    return maior;
}
