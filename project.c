#include<stdio.h>
#include<stdlib.h>

char symbol[]={'O','X'}; //2 symbol

// b array for addition display , x array for subtraction, m array for multiplication , d array for division and e array for square

char b[]={'0','4','2','7','+','5','+','4','+','3','3','5','6','+','2','+','7','+','5','4','5','0','+','3','+','3','+','4'};
char x[]={'0','5','7','8','-','5','-','3','-','1','6','6','8','-','5','-','1','-','0','8','9','6','-','5','-','3','-','4'};
char m[]={'0','2','5','6','x','3','x','2','x','2','7','3','4','x','2','x','5','x','2','2','8','7','x','2','x','2','x','3'};
char d[]={'0','6','1','0','1','4','/','3','/','2','/','2','8','2','6','/','2','/','2','/','2','1','2','1','6','2','0','/','2','/','2','/','2'};
char e[]={'0','3','^','2','2','^','2','5','^','2','1','^','2','7','^','2','4','^','2','6','^','2','8','^','2','9','^','2'};

// a array for printing space in display
char a[]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

// p array for changing number and sign into space for display only X or O Symbol
char p[]={' ',' '};

//If count % 2 == 1, it's player X's turn.
//If count % 2 == 0, it's player O's turn
int count=0;

// w for counting X win and q for counting O Win and r for counting Game draw
int w=0,q=0,r=0;

int ans;


void display() // display function  for  addition
{
    char s;
    s=symbol[++count%2]; // each time count will be increment and after that count %2 = 1 then s= X or if count %2 = 0 then s = O

    system("cls"); //The system("cls") command is used in C and C++ to clear the console screen

    system("color 0F"); //0 sets the background to black.F sets the text color to bright white.

    printf("\n\n\t\t\t\t   Tic Tac Toe\t\t");
    printf("\n\n");
    printf("\n\n\t\t\t\t     %c Turn\n\n ",s);
    printf("\t\t\t\t %c  |    %c  |   %c\n",b[1],b[2],b[3]);
    printf("\t\t\t       %c",b[4]);
    printf(" %c  |  %c %c  | %c %c\n",b[5],b[6],b[7],b[8],b[9]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[9],a[6],a[10]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",b[10],b[11],b[12]);
    printf("\t\t\t       %c",b[13]);
    printf(" %c  |  %c %c  | %c %c\n",b[14],b[15],b[16],b[17],b[18]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[5],a[12],a[11]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",b[19],b[20],b[21]);
    printf("\t\t\t       %c",b[22]);
    printf(" %c  |  %c %c  | %c %c\n",b[23],b[24],b[25],b[26],b[27]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[7],a[8],a[4]);
    printf("\n\t\t\t     %d\t       %d         %d",w,r,q);
    printf("\n\n\t\t\t  XPLAYER1    TIES    OPLAYER2");
    printf("\n\n\t\tTo place an %c on a board, answer the question correctly.\n\t\t",s);



}

// for checking all possible answer for Addition function
int check()
{
     display();
     if(a[9]=='X' && a[6]=='X' && a[10]=='X')
        return 1;
    else if(a[5]=='X' && a[12]=='X' && a[11]=='X')
        return 1;
    else if(a[7]=='X' && a[8]=='X' && a[4]=='X')
        return 1;
    else if(a[9]=='X' && a[12]=='X' && a[4]=='X')
        return 1;
    else if(a[6]=='X' && a[12]=='X' && a[8]=='X')
        return 1;
    else if(a[9]=='X' && a[5]=='X' && a[7]=='X')
        return 1;
    else if(a[10]=='X' && a[11]=='X' && a[4]=='X')
        return 1;
    else if(a[10]=='X' && a[12]=='X' && a[7]=='X')
        return 1;
    else if(a[9]=='O' && a[6]=='O' && a[10]=='O')
        return 0;
    else if(a[5]=='O' && a[12]=='O' && a[11]=='O')
        return 0;
    else if(a[7]=='O' && a[8]=='O' && a[4]=='O')
        return 0;
    else if(a[9]=='O' && a[12]=='O' && a[4]=='O')
        return 0;
    else if(a[6]=='O' && a[12]=='O' && a[8]=='O')
        return 0;
    else if(a[9]=='O' && a[5]=='O' && a[7]=='O')
        return 0;
    else if(a[10]=='O' && a[11]=='O' && a[4]=='O')
        return 0;
    else if(a[10]=='O' && a[12]=='O' && a[7]=='O')
        return 0;
    else if(count>=10)
        return 2;
    return 3;
}

//For display Addition result

void Add()
{

    int ans;
    display();
    while(1)
    {

        scanf("%d",&ans); //take ans for user
        if(ans!=9 && ans!=6 && ans!=10 && ans!=5 && ans!=12 && ans!=11 && ans!=7 && ans!=8 && ans!=4 ) // checking all the ans ..if not match then print wrong ans
        {
            printf("\t\t\tWrong Answer!\n\n");
            --count;
            system("pause");
            display();
            continue;
        }
        if(a[ans]=='X' || a[ans]=='O')
        {
            printf("\n\n\t\tHey, %c is already present there.\n",a[ans]);
            --count;
            system("pause");
            display();
            continue;
        }
        else
        {
            a[ans]=symbol[count%2];
             if(ans==9)
             {
                 b[1]=b[4]=b[5]=p[1];    // placing space in number and sign place if ans match


             }
             if(ans==6)
             {
                 b[2]=b[6]=b[7]=p[1];
             }
             if(ans==10)
             {
                 b[3]=b[8]=b[9]=p[1];
             }
             if(ans==5)
             {
                 b[10]=b[13]=b[14]=p[1];
             }
             if(ans==12)
             {
                 b[11]=b[15]=b[16]=p[1];
             }
             if(ans==11)
             {
                 b[12]=b[17]=b[18]=p[1];
             }
             if(ans==7)
             {
                 b[19]=b[22]=b[23]=p[1];
             }
             if(ans==8)
             {
                 b[20]=b[24]=b[25]=p[1];
             }
             if(ans==4)
             {
                 b[21]=b[26]=b[27]=p[1];
             }
        }

        int res=check(); // calling check function and store what it's return in res. if it return 1 then X win , If 0 then O win or if it return 2 then Gamer will be draw

        switch(res)
        {
        case 1:
            ++w;
            display();
             printf("\n\n\t\tplayers 1: X won.\n\n\n");
             printf("Press 6 to exit");
             exit(0);
             break;

        case 0:
             ++q;
             display();
            printf("\n\n\t\tplayers 2: O won.\n\n\n");
            printf("Press 6 to exit");
             exit(0);
            break;
        case 2:
            ++r;
            display();
            printf("\n\t\tGame draw.\n\n\n");
            printf("Press 6 to exit");
             system("color E0");
             exit(0);
            break;
        }


    }

}

// bellow function also work like this

void displaysub()// display for subtraction function
{
    char s;
    system("cls");
    system("color 09");
    s=symbol[++count%2];
     printf("\n\n\t\t\t\t   Tic Tac Toe\t\t");
    printf("\n\n");
    printf("\n\n\t\t\t\t     %c Turn\n\n ",s);
    printf("\t\t\t\t %c  |    %c  |   %c\n",x[1],x[2],x[3]);
    printf("\t\t\t       %c",x[4]);
    printf(" %c  |  %c %c  | %c %c\n",x[5],x[6],x[7],x[8],x[9]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[0],a[4],a[7]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",x[10],x[11],x[12]);
    printf("\t\t\t       %c",x[13]);
    printf(" %c  |  %c %c  | %c %c\n",x[14],x[15],x[16],x[17],x[18]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[1],a[5],a[8]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",x[19],x[20],x[21]);
    printf("\t\t\t       %c",x[22]);
    printf(" %c  |  %c %c  | %c %c\n",x[23],x[24],x[25],x[26],x[27]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[3],a[6],a[2]);
    printf("\n\t\t\t     %d\t       %d         %d",w,r,q);
    printf("\n\n\t\t\t  XPLAYER1    TIES    OPLAYER2");
    printf("\n\n\t\tTo place an %c on a board, answer the question correctly.\n\t\t",s);


}

// for checking all possible answer for Subtraction function
int checksub()
{
    displaysub();
     if(a[0]=='X' && a[4]=='X' && a[7]=='X')
        return 1;
    else if(a[1]=='X' && a[5]=='X' && a[8]=='X')
        return 1;
    else if(a[3]=='X' && a[6]=='X' && a[2]=='X')
        return 1;
    else if(a[0]=='X' && a[5]=='X' && a[2]=='X')
        return 1;
    else if(a[4]=='X' && a[5]=='X' && a[6]=='X')
        return 1;
    else if(a[0]=='X' && a[1]=='X' && a[3]=='X')
        return 1;
    else if(a[7]=='X' && a[8]=='X' && a[2]=='X')
        return 1;
    else if(a[7]=='X' && a[5]=='X' && a[3]=='X')
        return 1;
    else if(a[0]=='O' && a[4]=='O' && a[7]=='O')
        return 0;
    else if(a[1]=='O' && a[5]=='O' && a[8]=='O')
        return 0;
    else if(a[3]=='O' && a[6]=='O' && a[2]=='O')
        return 0;
    else if(a[0]=='O' && a[5]=='O' && a[2]=='O')
        return 0;
    else if(a[4]=='O' && a[5]=='O' && a[6]=='O')
        return 0;
    else if(a[0]=='O' && a[1]=='O' && a[3]=='O')
        return 0;
    else if(a[7]=='O' && a[8]=='O' && a[2]=='O')
        return 0;
    else if(a[7]=='O' && a[5]=='O' && a[3]=='O')
        return 0;

    else if(count>=10)
        return 2;
    return 3;
}

//For display Subtraction result

void Sub()
{

    int ans;
    displaysub();
    while(1)
    {

        scanf("%d",&ans);
        if(ans!=0 && ans!=4 && ans!=7 && ans!=1 && ans!=5 && ans!=8 && ans!=3 && ans!=6 && ans!=2 )
        {
            printf("\t\t\tWrong Answer!\n\n");
            --count;
            system("pause");
            displaysub();
            continue;
        }
        if(a[ans]=='X' || a[ans]=='O')
        {
            printf("\n\n\t\tHey, %c is already present there.\n",a[ans]);
            --count;
            system("pause");
            displaysub();
            continue;
        }
        else
        {
            a[ans]=symbol[count%2];
             if(ans==0)
             {
                 x[1]=x[4]=x[5]=p[1];


             }
             if(ans==4)
             {
                 x[2]=x[6]=x[7]=p[1];
             }
             if(ans==7)
             {
                 x[3]=x[8]=x[9]=p[1];
             }
             if(ans==1)
             {
                 x[10]=x[13]=x[14]=p[1];
             }
             if(ans==5)
             {
                 x[11]=x[15]=x[16]=p[1];
             }
             if(ans==8)
             {
                 x[12]=x[17]=x[18]=p[1];
             }
             if(ans==3)
             {
                 x[19]=x[22]=x[23]=p[1];
             }
             if(ans==6)
             {
                 x[20]=x[24]=x[25]=p[1];
             }
             if(ans==2)
             {
                 x[21]=x[26]=x[27]=p[1];
             }
        }
        int res=checksub();
        switch(res)
        {
        case 1:
            ++w;
             displaysub();
            printf("\n\n\t\tplayers 1: X won.\n\n\n");
           printf("Press 6 to exit");

             exit(0);
            break;
        case 0:
            ++q;
            displaysub();
            printf("\n\n\t\tplayers 2: O won.\n\n\n");
           printf("Press 6 to exit");

             exit(0);
            break;
        case 2:
            ++r;
            displaysub();
            printf("\n\t\tGame draw.\n\n\n");
            system("color E0");
            printf("Press 6 to exit");
            exit(1);
            break;
        }


    }

}

void displaymul() // display function  for  Multiplication
{
    char s;
    system("cls");
    system("color 03");
    s=symbol[++count%2];
     printf("\n\n\t\t\t\t   Tic Tac Toe\t\t");
    printf("\n\n");
    printf("\n\n\t\t\t\t     %c Turn\n\n ",s);
    printf("\t\t\t\t %c  |    %c  |   %c\n",m[1],m[2],m[3]);
    printf("\t\t\t       %c",m[4]);
    printf(" %c  |  %c %c  | %c %c\n",m[5],m[6],m[7],m[8],m[9]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[6],a[10],a[12]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",m[10],m[11],m[12]);
    printf("\t\t\t       %c",m[13]);
    printf(" %c  |  %c %c  | %c %c\n",m[14],m[15],m[16],m[17],m[18]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[14],a[15],a[8]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",m[19],m[20],m[21]);
    printf("\t\t\t       %c",m[22]);
    printf(" %c  |  %c %c  | %c %c\n",m[23],m[24],m[25],m[26],m[27]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[4],a[16],a[21]);
    printf("\n\t\t\t     %d\t       %d         %d",w,r,q);
    printf("\n\n\t\t\t  XPLAYER1    TIES    OPLAYER2");
    printf("\n\n\t\tTo place an %c on a board, answer the question correctly.\n\t\t",s);


}

// for checking all possible answer for Multiplication function
int checkmul()
{
    displaymul();
     if(a[6]=='X' && a[10]=='X' && a[12]=='X')
        return 1;
    else if(a[14]=='X' && a[15]=='X' && a[8]=='X')
        return 1;
    else if(a[4]=='X' && a[16]=='X' && a[21]=='X')
        return 1;
    else if(a[6]=='X' && a[14]=='X' && a[4]=='X')
        return 1;
    else if(a[10]=='X' && a[15]=='X' && a[16]=='X')
        return 1;
    else if(a[12]=='X' && a[8]=='X' && a[21]=='X')
        return 1;
    else if(a[6]=='X' && a[15]=='X' && a[21]=='X')
        return 1;
    else if(a[12]=='X' && a[15]=='X' && a[4]=='X')
        return 1;
    else if(a[6]=='O' && a[10]=='O' && a[12]=='O')
        return 0;
    else if(a[14]=='O' && a[15]=='O' && a[8]=='O')
        return 0;
    else if(a[4]=='O' && a[16]=='O' && a[21]=='O')
        return 0;
    else if(a[6]=='O' && a[14]=='O' && a[4]=='O')
        return 0;
    else if(a[10]=='O' && a[15]=='O' && a[16]=='O')
        return 0;
    else if(a[12]=='O' && a[8]=='O' && a[21]=='O')
        return 0;
    else if(a[6]=='O' && a[15]=='O' && a[21]=='O')
        return 0;
    else if(a[12]=='O' && a[15]=='O' && a[4]=='O')
        return 0;


    else if(count>=10)
        return 2;
    return 3;
}

//For display Multiplication result

void Mul()
{

    int ans;
    displaymul();
    while(1)
    {

        scanf("%d",&ans);
        if(ans!=6 && ans!=10 && ans!=12 && ans!=14 && ans!=15 && ans!=8 && ans!=4 && ans!=16 && ans!=21 )
        {
            printf("\t\t\tWrong Answer!\n\n");
            --count;
            system("pause");
            displaymul();
            continue;
        }
        if(a[ans]=='X' || a[ans]=='O')
        {
            printf("\n\n\t\tHey, %c is already present there.\n",a[ans]);
            --count;
            system("pause");
            displaymul();
            continue;
        }
        else
        {
            a[ans]=symbol[count%2];
             if(ans==6)
             {
                 m[1]=m[4]=m[5]=p[1];


             }
             if(ans==10)
             {
                 m[2]=m[6]=m[7]=p[1];
             }
             if(ans==12)
             {
                 m[3]=m[8]=m[9]=p[1];
             }
             if(ans==14)
             {
                 m[10]=m[13]=m[14]=p[1];
             }
             if(ans==15)
             {
                 m[11]=m[15]=m[16]=p[1];
             }
             if(ans==8)
             {
                 m[12]=m[17]=m[18]=p[1];
             }
             if(ans==4)
             {
                 m[19]=m[22]=m[23]=p[1];
             }
             if(ans==16)
             {
                 m[20]=m[24]=m[25]=p[1];
             }
             if(ans==21)
             {
                 m[21]=m[26]=m[27]=p[1];
             }
        }
        int res=checkmul();
        switch(res)
        {
         case 1:
                   ++w;
                   displaymul();
                   printf("\n\n\t\tplayers 1: X won.\n\n\n");
                   printf("Press 6 to exit");

                   exit(1);
            break;
            case 0:

                     ++q;
                     displaymul();
                     printf("\n\n\t\tplayers 2: O won.\n\n\n");
                     printf("Press 6 to exit");

                     exit(1);
            break;
            case 2:
                      ++r;
                      displaymul();
                      printf("\n\n\t\t Game Draw\n\n\n");
                      printf("Press 6 to exit");
                      system("color E0");
                      exit(1);
                  break;

        }


    }

}

void displaydiv() // display function  for  division
{
    char s;
    s=symbol[++count%2];
    system("cls");
    system("color 04");
     printf("\n\n\t\t\t\t   Tic Tac Toe\t\t");
    printf("\n\n");
    printf("\n\n\t\t\t\t     %c Turn\n\n ",s);
    printf("\t\t\t\t %c  |   %c%c  |  %c%c\n",d[1],d[2],d[3],d[4],d[5]);
    printf("\t\t\t       %c",d[6]);
    printf(" %c  |  %c %c  | %c %c\n",d[7],d[8],d[9],d[10],d[11]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[2],a[5],a[7]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t %c  |    %c  |   %c\n",d[12],d[13],d[14]);
    printf("\t\t\t       %c",d[15]);
    printf(" %c  |  %c %c  | %c %c\n",d[16],d[17],d[18],d[19],d[20]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[4],a[1],a[3]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t%c%c  |   %c%c  |  %c%c\n",d[21],d[22],d[23],d[24],d[25],d[26]);
    printf("\t\t\t       %c",d[27]);
    printf(" %c  |  %c %c  | %c %c\n",d[28],d[29],d[30],d[31],d[32]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[6],a[8],a[10]);
   printf("\n\t\t\t     %d\t       %d         %d",w,r,q);
    printf("\n\n\t\t\t  XPLAYER1    TIES    OPLAYER2");
    printf("\n\n\t\tTo place an %c on a board, answer the question correctly.\n\t\t",s);



}

// for checking all possible answer for division function

int checkdiv()
{
    displaydiv();
     if(a[2]=='X' && a[5]=='X' && a[7]=='X')
        return 1;
    else if(a[4]=='X' && a[1]=='X' && a[3]=='X')
        return 1;
    else if(a[6]=='X' && a[8]=='X' && a[10]=='X')
        return 1;
    else if(a[2]=='X' && a[4]=='X' && a[6]=='X')
        return 1;
    else if(a[5]=='X' && a[1]=='X' && a[8]=='X')
        return 1;
    else if(a[7]=='X' && a[3]=='X' && a[10]=='X')
        return 1;
    else if(a[2]=='X' && a[1]=='X' && a[10]=='X')
        return 1;
    else if(a[7]=='X' && a[1]=='X' && a[6]=='X')
        return 1;
    else if(a[2]=='O' && a[5]=='O' && a[7]=='O')
        return 0;
    else if(a[4]=='O' && a[1]=='O' && a[3]=='O')
        return 0;
    else if(a[6]=='O' && a[8]=='O' && a[10]=='O')
        return 0;
    else if(a[2]=='O' && a[4]=='O' && a[6]=='O')
        return 0;
    else if(a[5]=='O' && a[1]=='O' && a[8]=='O')
        return 0;
    else if(a[7]=='O' && a[3]=='O' && a[10]=='O')
        return 0;
    else if(a[2]=='O' && a[1]=='O' && a[10]=='O')
        return 0;
    else if(a[7]=='O' && a[1]=='O' && a[6]=='O')
        return 0;

    else if(count>=10)
        return 2;
    return 3;
}

void Div() //For display division result

{

    displaydiv();

    while(1)
    {
        scanf("%d",&ans);

        if(ans!=2 && ans!=5 && ans!=7 && ans!=4 && ans!=1 && ans!=3 && ans!=6 && ans!=8 && ans!=10)
        {

            printf("\t\t\tWrong Answer!\n\n");
            --count;
            system("pause");
            displaydiv();
            continue;

        }
        else if(a[ans]=='X' || a[ans]=='O')
        {
            printf("\n\nHey, %c is already present there.\n",a[ans]);
            --count;
            system("pause");
            displaydiv();
            continue;
        }
        else
        {
            a[ans]=symbol[count%2];
             if(ans==2)
             {
                 d[1]=d[6]=d[7]=p[1];
             }
             if(ans==5)
             {
                 d[2]=d[3]=d[8]=d[9]=p[1];
             }
             if(ans==7)
             {
                 d[4]=d[5]=d[10]=d[11]=p[1];
             }
             if(ans==4)
             {
                 d[12]=d[15]=d[16]=p[1];
             }
             if(ans==1)
             {
                 d[13]=d[17]=d[18]=p[1];
             }
             if(ans==3)
             {
                 d[14]=d[19]=d[20]=p[1];
             }
             if(ans==6)
             {
                 d[21]=d[22]=d[27]=d[28]=p[1];
             }
             if(ans==8)
             {
                 d[23]=d[24]=d[29]=d[30]=p[1];
             }
             if(ans==10)
             {
                 d[25]=d[26]=d[31]=d[32]=p[1];
             }
        }

   int res=checkdiv();
        switch(res)
        {
        case 1:
                  ++w;
                  displaydiv();
                  printf("\n\n\t\tplayers 1: X won.\n\n\n");
                  printf("Press 6 to exit");

                  exit(1);

            break;
        case 0:
                  ++q;
                  displaydiv();
                  printf("\n\n\t\tplayers 2: O won.\n\n\n");
                  printf("Press 6 to exit");

                  exit(1);
            break;
        case 2:
                    ++r;
                   displaydiv();
                   printf("\n\t\tGame draw.\n\n\n");
                  printf("Press 6 to exit");
                  system("color E0");
                  exit(1);
            break;
        }

}

}

// display function  for  square
void displaysquare()
{
    char s;
    s=symbol[++count%2];
    system("cls");
    system("color 0E");
     printf("\n\n\t\t\t\t   Tic Tac Toe\t\t");
    printf("\n\n");
    printf("\n\n\t\t\t\t     %c Turn\n\n ",s);
    printf("\t\t\t\t%c%c%c | %c%c%c   | %c%c%c\n",e[1],e[2],e[3],e[4],e[5],e[6],e[7],e[8],e[9]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[9],a[4],a[25]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t%c%c%c | %c%c%c   | %c%c%c\n",e[10],e[11],e[12],e[13],e[14],e[15],e[16],e[17],e[18]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[1],a[49],a[16]);
    printf("\t\t\t     -------|-------|------\n");
    printf("\t\t\t\t%c%c%c | %c%c%c   | %c%c%c\n",e[19],e[20],e[21],e[22],e[23],e[24],e[25],e[26],e[27]);
    printf("\t\t\t\t %c  |    %c  |   %c\n",a[36],a[64],a[81]);
    printf("\n\t\t\t     %d\t       %d         %d",w,r,q);
    printf("\n\n\t\t\t  XPLAYER1    TIES    OPLAYER2");
    printf("\n\n\t\tTo place an %c on a board, answer the question correctly.\n\t\t",s);



}

// for checking all possible answer for Square function
int checksquare()
{
     displaysquare();
     if(a[9]=='X' && a[4]=='X' && a[25]=='X')
        return 1;
    else if(a[1]=='X' && a[49]=='X' && a[16]=='X')
        return 1;
    else if(a[36]=='X' && a[64]=='X' && a[81]=='X')
        return 1;
    else if(a[9]=='X' && a[1]=='X' && a[36]=='X')
        return 1;
    else if(a[4]=='X' && a[49]=='X' && a[64]=='X')
        return 1;
    else if(a[25]=='X' && a[16]=='X' && a[81]=='X')
        return 1;
    else if(a[9]=='X' && a[49]=='X' && a[81]=='X')
        return 1;
    else if(a[25]=='X' && a[49]=='X' && a[36]=='X')
        return 1;
     else if(a[9]=='O' && a[4]=='O' && a[25]=='O')
        return 0;
    else if(a[1]=='O' && a[49]=='O' && a[16]=='O')
        return 0;
    else if(a[36]=='O' && a[64]=='O' && a[81]=='O')
        return 0;
    else if(a[9]=='O' && a[1]=='O' && a[36]=='O')
        return 0;
    else if(a[4]=='O' && a[49]=='O' && a[64]=='O')
        return 0;
    else if(a[25]=='O' && a[16]=='O' && a[81]=='O')
        return 0;
    else if(a[9]=='O' && a[49]=='O' && a[81]=='O')
        return 0;
    else if(a[25]=='O' && a[49]=='O' && a[36]=='O')
        return 0;
    else if(count>=10)
        return 2;
    return 3;
}

//For display Square result


void square()
{

    int ans;
    displaysquare();
    while(1)
    {

        scanf("%d",&ans);
        if(ans!=9 &&  ans!=4 && ans!=25 && ans!=1 && ans!=49 && ans!=16 && ans!=36 && ans!=64 && ans!=81)
        {
            printf("\t\t\tWrong Answer!\n\n");
            --count;
            system("pause");
            displaysquare();
            continue;
        }
        if(a[ans]=='X' || a[ans]=='O')
        {
            printf("\n\n\t\tHey, %c is already present there.\n",a[ans]);
            --count;
            system("pause");
            displaysquare();
            continue;
        }
        else
        {
            a[ans]=symbol[count%2];
             if(ans==9)
             {
                 e[1]=e[2]=e[3]=p[1];


             }
             if(ans==4)
             {
                 e[4]=e[5]=e[6]=p[1];
             }
             if(ans==25)
             {
                 e[7]=e[8]=e[9]=p[1];
             }
             if(ans==1)
             {
                 e[10]=e[11]=e[12]=p[1];
             }
             if(ans==49)
             {
                 e[13]=e[14]=e[15]=p[1];
             }
             if(ans==16)
             {
                 e[16]=e[17]=e[18]=p[1];
             }
             if(ans==36)
             {
                 e[19]=e[20]=e[21]=p[1];
             }
             if(ans==64)
             {
                 e[22]=e[23]=e[24]=p[1];
             }
             if(ans==81)
             {
                 e[25]=e[26]=e[27]=p[1];
             }
        }
        int res=checksquare();
        switch(res)
        {
        case 1:
                ++w;
                displaysquare();
                printf("\n\n\t\tplayers 1: X won.\n\n\n");
                printf("Press 6 to exit");

                exit(1);
               break;

        case 0:
                     ++q;
                    displaysquare();
                    printf("\n\n\t\tplayers 2: O won.\n\n\n");
                    printf("Press 6 to exit");

                    exit(1);
            break;
        case 2:
                 ++r;
                 displaysquare();
                 printf("\n\t\tGame draw.\n\n\n");
                system("color E0");
                printf("press 6 to exit");
                exit(1);

                break;
        }


    }


}

//for display Menu
void menu()
{
    int c; // for choosing menu option
    system("color 0B");
    printf("\n\n\t\t\t\tTic Tac Toe\t\t");
    printf("\n\n\n\n\t\tMENU:\n\t\t");
    printf("\n\t\t1.Addition\t\t");
    printf("\n\t\t2.Subtraction\t\t");
    printf("\n\t\t3.Multiplication\t\t");
    printf("\n\t\t4.Division\t\t");
    printf("\n\t\t5.Squares\t\t");
    printf("\n\t\t6.Exit\t\t");
    printf("\n\t\tEnter your choice:");
     scanf("%d",&c); // get input from user and call function according to that number

     if(c==1)
    {

         Add();  // if user Enter 1 then display addition
    }
    else if(c==2)
    {
        Sub();   // if user Enter 2 then display subtraction
    }

    else if(c==3)  // if user Enter 3 then display Multiplication

    {
        Mul();
    }
    else if(c==4)  // if user Enter 4 then display Division
    {
        Div();
    }
    else if(c==5) // if user Enter 5 then display Square
    {
        square();
    }
    else if(c==6) // if user Enter 6 then Exit
    {
        exit(1);
    }

    else
    {
        printf("please enter 1 to 5 ");
    }

}

void main()
{

     menu(); // display Menu

}




