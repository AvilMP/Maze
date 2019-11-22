#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>

int level[20][20],x,y,start,wybor,exxit=0;

using namespace std;

int main()
{
    // map
    level[0][0]=2;level[0][1]=2;level[0][2]=2;level[0][3]=2;level[0][4]=2;  level[0][5]=2;level[0][6]=2;level[0][7]=2;level[0][8]=2;      level[0][9]=2;level[0][10]=2;level[0][11]=2;level[0][12]=2;     level[0][13]=2;level[0][14]=2;level[0][15]=2;level[0][16]=2;    level[0][17]=2;level[0][18]=2;level[0][19]=2;
    level[1][0]=2;level[1][1]=0;level[1][2]=0;level[1][3]=0;level[1][4]=2;  level[1][5]=0;level[1][6]=0;level[1][7]=0;level[1][8]=2;      level[1][9]=0;level[1][10]=0;level[1][11]=0;level[1][12]=0;     level[1][13]=0;level[1][14]=2;level[1][15]=0;level[1][16]=0;    level[1][17]=0;level[1][18]=2;level[1][19]=2;
    level[2][0]=2;level[2][1]=0;level[2][2]=3;level[2][3]=0;level[2][4]=2;  level[2][5]=0;level[2][6]=2;level[2][7]=0;level[2][8]=2;      level[2][9]=2;level[2][10]=0;level[2][11]=2;level[2][12]=2;     level[2][13]=0;level[2][14]=2;level[2][15]=0;level[2][16]=2;    level[2][17]=0;level[2][18]=0;level[2][19]=2;
    level[3][0]=2;level[3][1]=0;level[3][2]=0;level[3][3]=0;level[3][4]=0;  level[3][5]=0;level[3][6]=2;level[3][7]=0;level[3][8]=0;      level[3][9]=2;level[3][10]=0;level[3][11]=0;level[3][12]=2;     level[3][13]=0;level[3][14]=0;level[3][15]=0;level[3][16]=2;    level[3][17]=2;level[3][18]=0;level[3][19]=2;
    level[4][0]=2;level[4][1]=2;level[4][2]=2;level[4][3]=2;level[4][4]=2;  level[4][5]=2;level[4][6]=2;level[4][7]=2;level[4][8]=0;      level[4][9]=2;level[4][10]=2;level[4][11]=0;level[4][12]=2;     level[4][13]=2;level[4][14]=2;level[4][15]=2;level[4][16]=2;    level[4][17]=2;level[4][18]=0;level[4][19]=2;
    level[5][0]=2;level[5][1]=0;level[5][2]=0;level[5][3]=2;level[5][4]=2;  level[5][5]=2;level[5][6]=2;level[5][7]=2;level[5][8]=0;      level[5][9]=2;level[5][10]=0;level[5][11]=0;level[5][12]=2;     level[5][13]=0;level[5][14]=0;level[5][15]=0;level[5][16]=0;    level[5][17]=0;level[5][18]=0;level[5][19]=2;
    level[6][0]=2;level[6][1]=0;level[6][2]=2;level[6][3]=2;level[6][4]=0;  level[6][5]=0;level[6][6]=0;level[6][7]=0;level[6][8]=0;      level[6][9]=2;level[6][10]=2;level[6][11]=0;level[6][12]=2;     level[6][13]=0;level[6][14]=2;level[6][15]=2;level[6][16]=2;    level[6][17]=2;level[6][18]=2;level[6][19]=2;
    level[7][0]=2;level[7][1]=0;level[7][2]=0;level[7][3]=2;level[7][4]=2;  level[7][5]=0;level[7][6]=2;level[7][7]=2;level[7][8]=2;      level[7][9]=2;level[7][10]=0;level[7][11]=0;level[7][12]=2;     level[7][13]=0;level[7][14]=0;level[7][15]=0;level[7][16]=0;    level[7][17]=0;level[7][18]=0;level[7][19]=2;
    level[8][0]=2;level[8][1]=2;level[8][2]=0;level[8][3]=2;level[8][4]=2;  level[8][5]=0;level[8][6]=0;level[8][7]=0;level[8][8]=0;      level[8][9]=0;level[8][10]=0;level[8][11]=2;level[8][12]=2;     level[8][13]=2;level[8][14]=2;level[8][15]=2;level[8][16]=2;    level[8][17]=2;level[8][18]=0;level[8][19]=2;
    level[9][0]=2;level[9][1]=2;level[9][2]=0;level[9][3]=2;level[9][4]=2;  level[9][5]=2;level[9][6]=2;level[9][7]=2;level[9][8]=2;     level[9][9]=2;level[9][10]=0;level[9][11]=2;level[9][12]=0;     level[9][13]=0;level[9][14]=0;level[9][15]=0;level[9][16]=0;    level[9][17]=2;level[9][18]=0;level[9][19]=2;
    level[10][0]=2;level[10][1]=2;level[10][2]=0;level[10][3]=2;level[10][4]=0;level[10][5]=0;level[10][6]=0;level[10][7]=0;level[10][8]=0;level[10][9]=2;level[10][10]=2;level[10][11]=2;level[10][12]=0;level[10][13]=2;level[10][14]=2;level[10][15]=2;level[10][16]=0;level[10][17]=2;level[10][18]=0;level[10][19]=2;
    level[11][0]=2;level[11][1]=2;level[11][2]=0;level[11][3]=2;level[11][4]=0;level[11][5]=2;level[11][6]=0;level[11][7]=2;level[11][8]=0;level[11][9]=0;level[11][10]=0;level[11][11]=2;level[11][12]=0;level[11][13]=0;level[11][14]=0;level[11][15]=2;level[11][16]=0;level[11][17]=2;level[11][18]=0;level[11][19]=2;
    level[12][0]=2;level[12][1]=0;level[12][2]=0;level[12][3]=2;level[12][4]=0;level[12][5]=2;level[12][6]=2;level[12][7]=2;level[12][8]=0;level[12][9]=2;level[12][10]=0;level[12][11]=2;level[12][12]=2;level[12][13]=2;level[12][14]=0;level[12][15]=2;level[12][16]=0;level[12][17]=2;level[12][18]=0;level[12][19]=2;
    level[13][0]=2;level[13][1]=0;level[13][2]=2;level[13][3]=2;level[13][4]=0;level[13][5]=0;level[13][6]=0;level[13][7]=2;level[13][8]=0;level[13][9]=2;level[13][10]=2;level[13][11]=2;level[13][12]=2;level[13][13]=2;level[13][14]=0;level[13][15]=2;level[13][16]=0;level[13][17]=0;level[13][18]=0;level[13][19]=2;
    level[14][0]=2;level[14][1]=0;level[14][2]=2;level[14][3]=0;level[14][4]=0;level[14][5]=2;level[14][6]=0;level[14][7]=2;level[14][8]=0;level[14][9]=0;level[14][10]=0;level[14][11]=0;level[14][12]=2;level[14][13]=2;level[14][14]=0;level[14][15]=2;level[14][16]=2;level[14][17]=2;level[14][18]=0;level[14][19]=2;
    level[15][0]=2;level[15][1]=0;level[15][2]=2;level[15][3]=2;level[15][4]=0;level[15][5]=0;level[15][6]=0;level[15][7]=2;level[15][8]=2;level[15][9]=2;level[15][10]=2;level[15][11]=0;level[15][12]=2;level[15][13]=2;level[15][14]=0;level[15][15]=0;level[15][16]=0;level[15][17]=2;level[15][18]=0;level[15][19]=2;
    level[16][0]=2;level[16][1]=0;level[16][2]=0;level[16][3]=0;level[16][4]=0;level[16][5]=2;level[16][6]=0;level[16][7]=2;level[16][8]=2;level[16][9]=0;level[16][10]=2;level[16][11]=0;level[16][12]=0;level[16][13]=0;level[16][14]=0;level[16][15]=2;level[16][16]=0;level[16][17]=2;level[16][18]=2;level[16][19]=2;
    level[17][0]=2;level[17][1]=0;level[17][2]=0;level[17][3]=2;level[17][4]=2;level[17][5]=2;level[17][6]=0;level[17][7]=2;level[17][8]=2;level[17][9]=0;level[17][10]=2;level[17][11]=2;level[17][12]=2;level[17][13]=2;level[17][14]=0;level[17][15]=2;level[17][16]=2;level[17][17]=2;level[17][18]=0;level[17][19]=2;
    level[18][0]=2;level[18][1]=1;level[18][2]=0;level[18][3]=0;level[18][4]=0;level[18][5]=0;level[18][6]=0;level[18][7]=0;level[18][8]=0;level[18][9]=0;level[18][10]=0;level[18][11]=0;level[18][12]=0;level[18][13]=2;level[18][14]=0;level[18][15]=0;level[18][16]=0;level[18][17]=0;level[18][18]=0;level[18][19]=2;
    level[19][0]=2;level[19][1]=2;level[19][2]=2;level[19][3]=2;level[19][4]=2;level[19][5]=2;level[19][6]=2;level[19][7]=2;level[19][8]=2;level[19][9]=2;level[19][10]=2;level[19][11]=2;level[19][12]=2;level[19][13]=2;level[19][14]=2;level[19][15]=2;level[19][16]=2;level[19][17]=2;level[19][18]=2;level[19][19]=2;
    //
    cout << "Maze by Scazza" << endl<<endl;
    cout << "Just move to the EXIT! :)"<<endl;
    cin >> start; x=0; y=0;
    for (;;)
                {   cin >> wybor;
    switch(wybor)
    {

        //up x-1
        case 8:
        {
        for (int x=0;x<=19;x++)    {
            for (int y=0;y<=19;y++) {   if (level[x][y]==1&&level[x-1][y]!=2) {level[x-1][y]=1;level[x][y]=0;}
                                    }
                                   }
        }break;
        //down x+1
        case 5:
        {
        for (int x=19;x>=0;x--)    {
            for (int y=19;y>=0;y--) {   if (level[x][y]==1&&level[x+1][y]!=2) {level[x+1][y]=1;level[x][y]=0;}
                                    }
                                   }
        }break;
        //left y-1
        case 4:
        {
        for (int x=0;x<=19;x++)    {
            for (int y=0;y<=19;y++) {   if (level[x][y]==1&&level[x][y-1]!=2) {level[x][y-1]=1;level[x][y]=0;}
                                    }
                                   }
        }break;
        //right y+1
        case 6:
        {
        for (int x=19;x>=0;x--)    {
            for (int y=19;y>=0;y--) {   if (level[x][y]==1&&level[x][y+1]!=2) {level[x][y+1]=1;level[x][y]=0;}
                                    }
                                   }
        }break;
    }
            system("cls");x=0;y=0;
                for (int x=0;x<=19;x++)    {
                        for (int y=0;y<=19;y++) {   if (level[x][y]==0) {cout<<"     ";}
                                                    if (level[x][y]==1) {cout<<"[;.;]"; if(x==2&&y==2){exxit=1;} }
                                                    if (level[x][y]==2) {cout<<"XXXXX";}
                                                    if (level[x][y]==3) {cout<<"E-XIT";}
                                                    if (y==19)        {cout<<endl;}
                                                }



                    } cout<<endl;
                if (exxit==1) {break;}
                }
            system("cls");
    for (int i=0;i<=1800;i++) {cout<<"$ dolars $";}
    return 0;
}
