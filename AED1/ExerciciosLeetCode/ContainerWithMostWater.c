/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/
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
