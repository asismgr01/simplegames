/*Simple TicTacToe Game In C.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char array[9]={'1','2','3','4','5','6','7','8','9'};
void board();
void restart();
int check();
int main()
{
    int i=9,n,player=1,m,count=0;
    char mark,re;
    do{
        board();
        mark = (player == 1)? 'O' : 'X';
        printf("\nPlayer %d enter the number: ",player);
        scanf("%d",&n);
        if(n>=1 && n<=9){
            if(n == 1 && array[0] == '1'){
                array[0] = mark;
            }
            else if(n == 2 && array[1] == '2'){
                array[1] = mark;
            }
            else if(n == 3 && array[2] == '3'){
                array[2] = mark;
            }
            else if(n == 4 && array[3] == '4'){
                array[3] = mark;
            }
            else if(n == 5 && array[4] == '5'){
                array[4] = mark;
            }
            else if(n == 6 && array[5] == '6'){
                array[5] = mark;
            }
            else if(n == 7 && array[6] == '7'){
                array[6] = mark;
            }
            else if(n == 8 && array[7] == '8'){
                array[7] = mark;
            }
            else if(n == 9 && array[8] == '9'){
                array[8] = mark;
            }
            else{
                printf("\nInvalid move\n");
            }
            m=check();
            if(m){
                if(mark == 'O'){
                    printf("\nPlayer 1 win.\n");
                }else{
                    printf("\nPlayer 2 win.\n");
                }
                board();
                break;
            }
            if(player == 1){
                player++;
            }else{
                player --;
            }
            i--;
            count++;
        }
        else{
            printf("\nInvalid number\n");
        }
    }
    while(i >= 1);
    if(count == 9){
        printf("\nGame Over");
    }
    printf("\nDo you want to continue,Y for 'yes' N for 'no': ");
    scanf("\n%c",&re);
    if(tolower(re) == 'y'){
            system("cls");
            restart();
            return main();
    }
}
void restart(){
    /*Function to reset char array[]*/
    int len = sizeof(array),i=0,num=1;
    char j;
    for(i;i<len;i++){
        j = num;
        /*Converting j into char.*/
        array[i] = j + '0';
        num++;
    }
}
void board(){
    /*Function to print tictactoe board*/
    printf("======TicTacToe Game======\n\n");
    printf("Player 1- O and Player 2- X\n");
    printf(" %c | %c | %c \n",array[0],array[1],array[2]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n",array[3],array[4],array[5]);
    printf("___|___|___\n");
    printf(" %c | %c | %c \n\n",array[6],array[7],array[8]);
}
int check(){
    /*Function to check if winner*/
    if(array[0] == array[1] && array[1] == array[2]){
        return 1;
    }
    else if(array[3] == array[4] && array[4] == array[5]){
        return 1;
    }
    else if(array[6] == array[7] && array[7] == array[8]){
        return 1;
    }
    else if(array[0] == array[3] && array[3] == array[6]){
        return 1;
    }
    else if(array[1] == array[4] && array[4] == array[7]){
        return 1;
    }
    else if(array[2] == array[5] && array[5] == array[8]){
        return 1;
    }
    else if(array[0] == array[4] && array[4] == array[8]){
        return 1;
    }
    else if(array[2] == array[4] && array[4] == array[6]){
        return 1;
    }
    else{
        return 0;
    }
}

