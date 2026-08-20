/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.Letters are case sensitive, so "a" is considered a different type of stone from "A".*/

int numJewelsInStones(char* jewels, char* stones) {
    int cont=0, tStones, tJewels, i,j;

    tStones = strlen(stones);
    tJewels = strlen(jewels);

    for(i=0;i<tJewels;i++){
        for(j=0;j<tStones; j++){
            if(stones[j]==jewels[i]){
                cont++;
            }
        }
    }
    return cont;
}
