#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<ctime>
#include<unistd.h>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctype.h>
#include<string>
#include<windows.h>
#include<process.h>
#include<fstream>
#include"start.cpp"

using namespace std;

int press_enter;
int random_index(int);


int random_index(int x)
{
    int index;
    index=rand()%x+0;

return index;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Game_2048
{

  char control;
  int apocalypse;
  int response;


public:
  char option;
  string name;
  int plus;
  int score;
  int max;
  int win;
  int grid[4][4];
  int bgrid[4][4];

  Game_2048(): score(0),plus(0),win(2048),max(0),response(0),apocalypse(1) {}

  void logic_flow(Game_2048*);
  void game_end_check(Game_2048*);
  void display_win_screen();
  void display_loser_screen();
  char display_try_again_screen(int);
  void backup_grid();
  void start_grid();
  void print_detail();
  void display_grid();
  void display_help_screen();
  void key_press();
  void update_grid();
  void fill_space();
  void spawn();
  void find_greatest_tile();
  void undo();

  int full();
  int block_moves();

  void report();
    void display();
};
void Game_2048:: display()
{
    Game_2048 gm;
	ifstream inFile;
	inFile.open("gamedata.dat",ios::binary);
	if(!inFile)
	{
		cout<<"\n\n\n\n\n\t\t\t\tThe File Which You Are Trying To Access is Either Does Not Exist OR Coundn't Be Open At This Time.\n\n";
	}
	else{
        system("color 1B");
	cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  SCORE CARD\n\n";
	cout<<"\t\t\t\t\t\t\t  ==========================================\n";
	cout<<"\t\t\t\t\t\t\t        NAME                   SCORE  \n";
	cout<<"\t\t\t\t\t\t\t  ==========================================\n";
    cout<<"\t\t\t\t\t\t\t\t";
    int l1,sp;
    while(inFile)
    {
        inFile>>score;
        inFile>>name;
        l1=sizeof(name);
        sp=20-l1;
        for(int i=0;i<sp;i++)
        {
            cout<<"  ";
        }
        cout<<name<<"\t\t\t"<<score<<"\n\t\t\t\t\t\t\t\t";
    }
    cout<<"\n\t\t\t\t\t\t\t  ==========================================\n";
	inFile.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Game_2048::report()
{
    cout<<setw(10)<<name<<setw(10)<<score;
    //getch();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Game_2048::start_grid()
{
  int i,j;

  plus=0;
  score=0;
  max=0;

	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			grid[i][j]=0;

	i=random_index(4);
	j=random_index(4);

		grid[i][j]=2;

	i=random_index(4);
	j=random_index(4);

		grid[i][j]=2;
}

void Game_2048::display_grid()
{

  int i,j;
  system("cls");
  print_detail();
HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE);

int x,y;
 char topl[35]={201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,187};
char midl[35]={204,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,185};
char bottoml[35]={200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,188};
//clrscr();
cout<<endl<<"\n\n\t\t\t\t\t\t\t\t";
SetConsoleTextAttribute(h, 11);
cout<<topl<<endl;
SetConsoleTextAttribute(h, 0);
for(x=0;x<4;x++)
 {
  for(y=0;y<4;y++)
   {
      if(y==0)
      {
          SetConsoleTextAttribute(h, 0);
        cout<<"\t\t\t\t\t\t\t\t"<<char(186);
      }
       if(grid[x][y]==0)
       {
           SetConsoleTextAttribute(h, 0);
         cout<<setw(3)<<right<<" ";
       }
       else
        {//////////////////////////////////////////////////////////////////////////////////////////add color
             if(grid[x][y]==2)           { SetConsoleTextAttribute(h, 14);  cout<<setw(3)<<right<<grid[x][y]; }
            if(grid[x][y]==4)           { SetConsoleTextAttribute(h, 13);  cout<<setw(3)<<right<<grid[x][y];}
             if(grid[x][y]==8)           {SetConsoleTextAttribute(h, 12);   cout<<setw(3)<<right<<grid[x][y]; }
             if(grid[x][y]==16)          {SetConsoleTextAttribute(h, 10);  cout<<setw(3)<<right<<grid[x][y]; }
             if(grid[x][y]==32)          {SetConsoleTextAttribute(h, 5);   cout<<setw(3)<<right<<grid[x][y]; }
            if(grid[x][y]==64)          {SetConsoleTextAttribute(h, 7);   cout<<setw(3)<<right<<grid[x][y]; }
            if(grid[x][y]==128)       { SetConsoleTextAttribute(h, 6);   cout<<setw(3)<<right<<grid[x][y]; }
            if(grid[x][y]==256)       { SetConsoleTextAttribute(h, 12);   cout<<setw(3)<<right<<grid[x][y]; }
             if(grid[x][y]==512)       { SetConsoleTextAttribute(h, 11);  cout<<setw(3)<<right<<grid[x][y]; }

        }
  if (grid[x][y] <8)
   {
       SetConsoleTextAttribute(h, 0);
       cout<<right<<char(32)<<char(32)<<char(32)<<char(32)<<char(186);}
    else
    {
        SetConsoleTextAttribute(h, 0);
        cout<<"    "<<char(186);}
   }
   cout<<endl<<"\t\t\t\t\t\t\t\t";
  if (x<3)
   {SetConsoleTextAttribute(h, 11);
   cout<<midl<<endl;}
 }
 SetConsoleTextAttribute(h, 11);
 cout<<bottoml<<endl;

SetConsoleTextAttribute(h,7);

  cout<<"\n\n\n\t\t\t\t\t\t  Controls\n\t\t\t\n\t\t\t\t\t\t\t   W\t\t     \t\t\t u - undo\tr - restart\n\t\t\t\t\t\t\t\t"
      <<" \n\t\t\t\t\t\t      A    S    D\t\t\t\t h - help\tq - quit\n    ";

}

  void Game_2048::print_detail()
  {
      HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(h, 13);
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t       TWO-ZERO-FOUR-EIGHT\n\n");
        SetConsoleTextAttribute(h, 10);
        printf("\n\n\t\t\t\t\t\t\t\t\t   SCORE  : %d\n",score);


  }


  void Game_2048::key_press()
  {
  control=getch();
  }

  void Game_2048::backup_grid()
  {
  		for(int i=0;i<4;i++)
  			for(int j=0;j<4;j++)
  				bgrid[i][j]=grid[i][j];
  }

  void Game_2048::fill_space()
  {

  	switch(control)
  	{
  		case 'w':
  					for(int i=0;i<4;i++)
  						for(int j=0;j<4;j++)
  						{
  							if(!grid[j][i])
  							{
  								for(int k=j+1;k<4;k++)
  									if(grid[k][i])
  									{
  										grid[j][i]=grid[k][i];
  										grid[k][i]=0;
  										break;
  									}
  							}

  						}break;

  		case 's':
  					for(int i=0;i<4;i++)
  						for(int j=3;j>=0;j--)
  						{
  							if(!grid[j][i])
  							{
  								for(int k=j-1;k>=0;k--)
  									if(grid[k][i])
  									{
  										grid[j][i]=grid[k][i];
  										grid[k][i]=0;
  										break;
  									}
  							}

  						}break;
  		case 'a':
  					for(int i=0;i<4;i++)
  						for(int j=0;j<4;j++)
  						{
  							if(!grid[i][j])
  							{
  								for(int k=j+1;k<4;k++)
  									if(grid[i][k])
  									{
  										grid[i][j]=grid[i][k];
  										grid[i][k]=0;
  										break;
  									}
  							}

  						}break;


  		case 'd':
  					for(int i=0;i<4;i++)
  						for(int j=3;j>=0;j--)
  						{
  							if(!grid[i][j])
  							{
  								for(int k=j-1;k>=0;k--)
  									if(grid[i][k])
  									{
  										grid[i][j]=grid[i][k];
  										grid[i][k]=0;
  										break;
  									}
  							}

  						}break;

  	}
  }

  void Game_2048::update_grid()
  {
  	plus=0;
  	apocalypse=1;

  	switch(control)
  	{
  		case 'w':
  					for(int i=0;i<4;i++)
  						for(int j=0;j<3;j++)
  						{
  							if(grid[j][i]&&grid[j][i]==grid[j+1][i])
  							{
  								apocalypse=0;
  								grid[j][i]+=grid[j+1][i];
  								grid[j+1][i]=0;
                  plus+=(grid[j][i]);
  								score+=(grid[j][i]);
  							}
  						}break;

  		case 's':
  					for(int i=0;i<4;i++)
  						for(int j=3;j>0;j--)
  						{
  							if(grid[j][i]&&grid[j][i]==grid[j-1][i])
  							{
  								apocalypse=0;
  								grid[j][i]+=grid[j-1][i];
  								grid[j-1][i]=0;
                  plus+=(grid[j][i]);
  								score+=(grid[j][i]);


                }
  						}break;

  		case 'a':
  					for(int i=0;i<4;i++)
  						for(int j=0;j<3;j++)
  						{
  							if(grid[i][j]&&grid[i][j]==grid[i][j+1])
  							{
  								apocalypse=0;
  								grid[i][j]+=grid[i][j+1];
  								grid[i][j+1]=0;
                  plus+=(grid[i][j]);
  								score+=(grid[i][j]);

                }
  						}break;

  		case 'd':
  					for(int i=0;i<4;i++)
  						for(int j=3;j>0;j--)
  						{
  							if(grid[i][j]&&grid[i][j]==grid[i][j-1])
  							{
  								apocalypse=0;
  								grid[i][j]+=grid[i][j-1];
  								grid[i][j-1]=0;

                  plus+=(grid[i][j]);
  								score+=(grid[i][j]);


                }
  						}break;


  	}



  }


  void Game_2048::spawn()
  {
  		int i,j,k;

  		do
  		{
  		    i=random_index(4);
  		    j=random_index(4);
  		    k=random_index(10);

  		}while(grid[i][j]);



  		if(k<2)
  		    grid[i][j]=4;

  		else
  		    grid[i][j]=2;


  }


  void Game_2048::find_greatest_tile()
  {
  	for(int i=0;i<4;i++)
  		for(int j=0;j<4;j++)
  			if(grid[i][j]>max)
  				max=grid[i][j];
  }

  int Game_2048::full()
  {
  	int k=1;

  	for(int i=0;i<4;i++)
  		for(int j=0;j<4;j++)
  		{
  			if(!grid[i][j])
  				k=0;

  		}
  return k;
  }


  void Game_2048::undo()
  {
      //if(cou==0||cou==1||cou==2)
  		for(int i=0;i<4;i++)
  			for(int j=0;j<4;j++)
  				grid[i][j]=bgrid[i][j];
      //  cou++;
  }

  int Game_2048::block_moves()
  {
  	int k=0;

  	for(int i=0;i<4;i++)
  		for(int j=0;j<4;j++)
  			if(bgrid[i][j]!=grid[i][j])
  			{
  				k=1;
  				break;
  			}
  return k;
  }


  void Game_2048::display_help_screen()
  {
  	system("cls");
    system("color F1");
  	cout<<endl<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  ::[  THE 2048 PUZZLE  ]::\n";

  	char text[]="\n\t\t\t\t\t> The game starts with 1 or 2 randomly placed numbers in a 4x4 grid (16 cells).> Use the control key to move the cells. (i.e. Press W/A/S/D )> Two cells of the same number will merge and add up.> New 2's and 4's will appear randomly on an empty cell with each move you make.> Your objective is to make 2048 in a cell without getting stuck!";

  	for(int i=0; text[i] ; i++)
  	{
  	    if(text[i]=='>')
  	    {
  	    usleep(1000*500);
  	    cout<<"\n\n\t\t\t\t\t";
  	    }

  	    cout<<text[i];
  	}

  	text_ani("\n\n\n\n\t\t\t\t\t\t\t\t  Press Enter to continue...");
  }

  void Game_2048::logic_flow(Game_2048 *execute)
  {

    switch(control)
    {
        case 'w':
        case 'a':
        case 's':
        case 'd':
  		  execute->backup_grid();
  		  execute->fill_space();
  		  execute->update_grid();
  		  execute->fill_space();
  		  execute->find_greatest_tile();
  		  execute->display_grid();
  		  usleep(1000*160);

  		  if(execute->full()&&apocalypse)
  		  {
  		      response=-1;
  		      break;
  		  }
  		  else if(execute->block_moves())
  		  {
  		      execute->spawn();
  		      break;
  		  }
  		  else
  		  {
  		      response=0;
  		      break;
  		  }

        case 'u':
  		  if(execute->block_moves())
  		    score-=plus;
  		  execute->undo();
  		  break;


        case 'r':
  		  execute->start_grid();
  		  score=0;
  		  plus=0;
  		  break;

        case 'q':
  		  response=-1;
  		  break;

        case 'h':
  		  execute->display_help_screen();
  		  press_enter=getchar();
  		  execute->display_grid();
  		  break;

    }
  }

  void Game_2048::game_end_check(Game_2048 *screen)
  {
    if(max==win)
    {
      screen->display_win_screen();

      if(screen->display_try_again_screen(0)=='n')
  	response=-1;
      else
  	win*=2;
    }

    else if(response==-1)
    {
      screen->display_loser_screen();

      if(screen->display_try_again_screen(1)=='y')
      {
  	screen->start_grid();
  	response=0;
      }
    }

    if(response==-1)
    {
      text_ani("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t    Thank you for playing...");
      delay();delay();delay();delay();
      system("cls");
      display();
      cin.get();
      //exit(0);
    }
  }


  void Game_2048::display_win_screen()
  {
  	system("cls");

  	cout<<endl<<endl;
  	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t  :: [  YOU MADE "<<win<<"!  ] ::"
  	    <<"\n\n\n\n\t\t\t\t\t\t\t :: [ YOU WON THE GAME ] ::"
  	    <<"\n\n\n\n\t\t\t\t\t\t\t TILE\t     SCORE\t    NAME";
  	printf("\n\n\t\t\t\t\t\t\t %4d\t    %6d\t    ",max,score);
  	Game_2048 gm;
	ofstream outFile;
	outFile.open("gamedata.dat",ios::binary|ios::app);
	outFile<<score;
	cin>>name;
	outFile<<" "<<name<<" ";///////////////////////////
	outFile.close();

  	cout<<"\n\n\n\n\n\t\t\t\t\t\t   -> The maximum possible tile is 65,536 ! So go on :)";
  }

  void Game_2048::display_loser_screen()
  {
  	system("cls");

  	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t  :: [ G A M E  O V E R ] ::"
  	    <<"\n\n\n\n\t\t\t\t\t\t\t      TILE\t     SCORE\t    NAME";
  	printf("\n\n\t\t\t\t\t\t\t      %4d\t    %6d\t    ",max,score);
///////////////////////////////////////////////////////////////////////////////////#writing into file
    Game_2048 gm;
	ofstream outFile;
	outFile.open("gamedata.dat",ios::binary|ios::app);
	outFile<<score<<" ";
	cin>>name;
	outFile<<" "<<name<<" ";///////////////////////////
	outFile.close();
////////////////////////////////////////////////////////////////////////////////////
  	cout<<"\n\n\n\n\n\t\t\t\t\t\t   -> The maximum possible score is 3,932,156 ! So close...";
  }

  char Game_2048::display_try_again_screen(int lose)
  {
  	if(lose)
  	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t   Would you like to try again "<<name<<" (y/n) ? :: ";
  	else
  	cout<<"\n\n\n\t\t\t\t   Would you like to continue playing "<<name<<" (y/n) ? :: ";
  	cin>>option;

  return option;
  }
