/*You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.*/
int calPoints(char** operations, int operationsSize) {
    int stack[1000];
    int topo = -1;
    int sum = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "C") == 0) {
            topo--; //Removo o último elemento
        }
        else if (strcmp(operations[i], "D") == 0) {
            topo++;                            
            stack[topo] = stack[topo-1] * 2; //Novo elemento é o dobro do anterior
        }
        else if (strcmp(operations[i], "+") == 0) {
            topo++;
            stack[topo] = stack[topo-1] + stack[topo-2]; //Novo elemento é a soma dos dois anteriores
        }
        else {
            topo++; 
            stack[topo] = atoi(operations[i]); //Novo elemento é o mesmo da string, atoi para transformar char em int 
        }
    }

    for (int i = 0; i <= topo; i++) {
        sum += stack[i];              //Somo os elementos da pilha
    }

    return sum;
}
