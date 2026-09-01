/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j;
    char *prefix = (char*)malloc(sizeof(char)*201);
    
    strcpy(prefix,strs[0]);
    for(i=1;i<strsSize;i++){
        j=0;
        while(prefix[j]==strs[i][j] && prefix[j]!='\0'){
            j++;
        }
        prefix[j]='\0';
    }
    return prefix;
}
