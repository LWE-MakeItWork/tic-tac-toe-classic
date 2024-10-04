#include <stdio.h>
#include <stdlib.h>
char b[] =
{
    '0','1','2','3',
    '4','5','6',
    '7','8','9'
};     //index 0   1
char symble[]= {'O','X'};
int count;// count = 0 // global declaration means initialized with 0
void display()
{
    system("cls");
    system("color 0F");
    printf("\n\n\t\t\t\t T i c	T a c	T o e \t\t");
    printf("\n\n\n\t\tPlayers 1: X\t\t");
    printf("\n\t\tPlayers 2: O\t\t\n\n");

    printf("\n\t\t\t\t  %c   |  %c   |  %c   ",b[1],b[2],b[3]);
    printf("\n\t\t\t\t------|------|------");
    printf("\n\t\t\t\t  %c   |  %c   |  %c   ",b[4],b[5],b[6]);
    printf("\n\t\t\t\t------|------|------");
    printf("\n\t\t\t\t  %c   |  %c   |  %c   ",b[7],b[8],b[9]);

}
int check()
{
    display();
    if(b[1]=='X' && b[2]=='X' && b[3]=='X')
        return 1;
    else if(b[4]=='X' && b[5]=='X' && b[6]=='X')
        return 1;
    else if(b[7]=='X' && b[8]=='X' && b[9]=='X')
        return 1;
    else if(b[7]=='X' && b[4]=='X' && b[1]=='X')
        return 1;
    else if(b[8]=='X' && b[5]=='X' && b[2]=='X')
        return 1;
    else if(b[9]=='X' && b[6]=='X' && b[3]=='X')
        return 1;
    else if(b[7]=='X' && b[5]=='X' && b[3]=='X')
        return 1;
    else if(b[1]=='X' && b[5]=='X' && b[9]=='X')
        return 1;
    else if(b[1]=='O' && b[2]=='O' && b[3]=='O')
        return 0;
    else if(b[4]=='O' && b[5]=='O' && b[6]=='O')
        return 0;
    else if(b[7]=='O' && b[8]=='O' && b[9]=='O')
        return 0;
    else if(b[7]=='O' && b[4]=='O' && b[1]=='O')
        return 0;
    else if(b[8]=='O' && b[5]=='O' && b[2]=='O')
        return 0;
    else if(b[9]=='O' && b[6]=='O' && b[3]=='O')
        return 0;
    else if(b[7]=='O' && b[5]=='O' && b[3]=='O')
        return 0;
    else if(b[1]=='O' && b[5]=='O' && b[9]=='O')
        return 0;
    else if(count>=9)
        return 2;
    return 3;
}
void enit(){
int i;
count=0;
for(i=0;i<10;i++)
    b[i]= '0'+i;

}
int main()
{
    start:;
    enit();
    system("color f0");//for white background
    int ans;
    display();//will draw the board
    while(1)//count 1
    {                               //{'O','X'}
        printf("\n\n\n\t\t%c's turn: ",symble[++count%2]); //count = 2 -> 2%2->0
        scanf("%d",&ans);//ans: 2
        if(b[ans]=='X' || b[ans]=='O'){
          printf("\n\nHey, %c is already present there.\n",b[ans]);
          --count;
          system("pause");
          display();
          continue;
        }else{    //{'O','X'}
          b[ans]=symble[count%2];//1
        }

        int res = check();//b[10]
        switch(res)
        {
        case 1:
            printf("\n\n\t\tPlayers 1: X won.\n\n\n");
            system("color 2f");
            system("pause");
            goto start;
            break;
        case 0:
            printf("\n\n\t\tPlayers 2: O won.\n\n\n");
            system("color 2f");
            system("pause");
            goto start;
            break;
        case 2:
            printf("\n\t\tGame draw.\n\n\n");
            system("color cf");
            system("pause");
            goto start;
            break;
        }

    }
    return 0;
}
