#include<cstdio>
#include<ctime>
#include<conio.h>
#include<windows.h>
#include<iostream>
#include<iomanip>

using namespace std;

void text_ani(char* a)
{
    int i; double k;
    for(i=0; a[i]!='\0';i++)
    {
        for(k=0;k<30000000;k++);
        cout<<a[i];
    }
}


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void wait()
{
    int i;
    for(i=0;i<4500000;i++);
}
void waitL()
{
    int i;
    for(i=0;i<25;i++)
    {
        wait();
    }
}

void delay()
{
    for(int q=0;q<=100000500;q++);
}

void GameName()
{
    int i=1;
    system("cls");
    cout<<"\n\n\n\n\n\n\n";
    system("color F");

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf(" \n");wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf(" ");wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c\n",5);wait(); /*8end*/

    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();
    /*0start*/printf(" ");wait();printf(" ");wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();printf("%c",5 );wait();/*0end*/
    /*4start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf(" ");wait();printf(" ");wait();/*4end*/
    /*8start*/printf(" ");wait();printf(" ");wait();printf(" ");wait();printf(" ");wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf("%c",5);wait();printf(" \n");wait(); /*8end*/
    getch();
    waitL();
    cout<<endl;
    cout<<endl;
    for(int i = 0 ; i < 35 ; i++)
    {
      cout<<" ";
    }

    while(i<2)
    {
        system("color 9");
        waitL();
        system("color 1");
        waitL();
        system("color 9");
        waitL();
        system("color A");
        waitL();
        system("color 2");
        waitL();
        system("color A");
        waitL();
        system("color B");
        waitL();
        system("color 3");
        waitL();
        system("color B");
        waitL();
        system("color C");
        waitL();
        system("color 4");
        waitL();
        system("color C");
        waitL();
        system("color D");
        waitL();
        system("color 5");
        waitL();
        system("color D");
        waitL();
        system("color E");
        waitL();
        system("color 6");
        waitL();
        system("color E");
        waitL();
        system("color F");
        i++;
    }


}


void starting()
{
    int i;
      waitL();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
     text_ani("Welcome to Our Project");//puts(s1);

    while(!kbhit());

  GameName();

    printf("\n\n\n\n\t");
    for(int i = 0 ; i < 60 ; i++)
    {
      cout<<" ";
    }
    text_ani("Welcome to 2048 game in C++!!!");
    waitL();
    printf("\n\n\n\n\t\t");
    waitL();
    waitL();
    system("cls");


   /*put here loading....*/
///////////////////////////////////////////
    int r,q;
    gotoxy(57,35);
    printf("Loading...");
    gotoxy(57,36);
    for(r=1;r<=60;r++)
    {
        for(q=0;q<=10000000;q++);
        printf("%c",220);
        for(q=0;q<50000;q++);
    }
/////////////////////////////////////////////

    system("cls");
    system("color B");
   delay(); cout<<"\n\n\n\n\t\t\t\t\t=======================================================================";
   delay(); cout<<"\n\t\t\t\t\t\t\t\t  INSTRUCTIONS\n";
   delay(); cout<<"\t\t\t\t\t=======================================================================\n";
   delay(); cout<<"\n\t\t\t\t\t\t->  Enter arrow key to move\n";
   delay(); cout<<"\t\t\t\t\t\t    (i.e. w - up / a - left / s - down / d - right) \n\n";
   delay(); cout<<"\t\t\t\t\t\t->  For wining this game any one box must have a value '2048'\n\n";
   delay(); cout<<"\t\t\t\t\t\t->  You have maximum 2048 try to win the game\n\n";
   delay(); cout<<"\t\t\t\t\t=======================================================================";
   waitL();
    cout<<"\n\n\n\t\t\t\t\t\t\t     PRESS ANY KEY TO PLAY...";
  //  cin.get();
    while(!kbhit());
}
