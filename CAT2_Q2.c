#include <stdio.h>

int main(){
    int i, j, a, b;

    //Declare an array alphabets
    int scores1[2][2] = {{65, 92}, {84, 72}};
    int scores2[2][2] = {{35, 70}, {59, 67}};

    //For loop for score1 array
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("The score [%d][%d] is: %d\n", i, j, scores1[i][j]);
        }  
    }

    //For loop for score2 array
    for ( a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("The score [%d][%d] is: %d\n", a, b, scores2[a][b]);
        }  
    }
    
    return 0;
}