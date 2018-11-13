#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

#define pi 3.1416
# define g 9.8/100
# define G 9.8
# define v 70
#define r 5
#define screenhight 600
#define screenwidth 1200
int gamestate = -1;

#define num_of_soldier 6
#define soldier_speed 20
#define stat_life 10
#define mesail_height 70
#define mesail_width 140
int level_new=0;
int points=0;
int life=10;
char life_s[1000],point_s[1000],level_s[1000],level_complete[1000];
int game_over,pause_fun_soldier,pause_fun_aeroplane;
int soldier_index=0,soldier_x=1200,soldier2_index=0,soldier2_x=1300,soldier2_flag,soldier3_index=0,soldier3_x=1400,soldier3_flag,soldier4_index=0,soldier4_x=1500,soldier4_flag,soldier5_index=0,soldier5_x=1600,soldier5_flag;
int boma=0,boma_x=0;
int timeMax,time_soldier;
int plane_x=1400,plane_boom=0,plane_exploision_flag=0,plane_boom_x;
int distance=300;
int i,flag=0;
int truck_x=screenwidth,pause_fun_truck,truck_index=0;
int mesail_x = 1240, mesail_y = rand()%600, pause_fun_mesail, mesail_boom_y,mesail_boom_x,mesail_exploision_flag=0;


int button=0;
int vx;
int vy;
int bulletx;
int bullety;
double theta2 = 0;
double theta = 0;
int bullradius;

int rMax;
int timechange = 1;
int check = 0;
int ind=0;
int ballinx;
int balliny;



//this function represent bullet initial position..

void bullposition()
{
	if (ind == 0)
	{
		ballinx = 350;
		balliny = 115;
	}
	else if (ind == 1)
	{
		ballinx = 345;
		balliny = 135;
	}
	else if (ind == 2)
	{
		ballinx = 340;
		balliny = 155;
	}
	else if (ind == 3)
	{
		ballinx = 330;
		balliny = 165;
	}
	else if (ind == 4)
	{
		ballinx = 320;
		balliny = 175;
	}
	else if (ind == 5)
	{
		ballinx = 310;
		balliny = 185;
	}
	else if (ind == 6)
	{
		ballinx = 290;
		balliny = 195;
	}
	else if (ind == 7)
	{
		ballinx = 270;
		balliny = 205;
	}
	else if (ind == 8)
	{
		ballinx = 250;
		balliny = 210;
	}
	else if (ind == 9)
	{
		ballinx = 220;
		balliny = 215;
	}
}


//this function is used for projectile movement of bullet..
void pras()
{

	if (check == 1 && (gamestate == 1 || gamestate == 2 || gamestate == 3 || gamestate == 4 || gamestate == 5 || gamestate == 6 || gamestate == 7 || gamestate == 8 || gamestate == 9 || gamestate == 10))
	{
		int px = v*cos((theta*pi) / (180.0))*timechange;
		bulletx = ballinx + px;
		bullety =balliny+ (px*tan((theta*pi) / (180.0))) - ((0.5*g*px*px) / (v*cos((theta*pi) / (180.0))) / (v*cos((theta*pi) / (180.0))));
		
		if (timechange != timeMax)
		{
			timechange++;
		}
		if (bullety < 0 || bulletx>screenwidth || bullety>screenhight)
		{
			timechange = 1;
			timeMax = 0;
			check = 0;
			bullradius = 0;
		}
	}
}



//this function controls turret..

void turretmove()
{
	if (theta2>=0 && theta2<=9 ) ind = 0;
	else if (theta2 >=10 && theta2 <= 18) ind = 1;
	else if (theta2 >= 19 && theta2 <= 27) ind = 2;
	else if (theta2 >= 28 && theta2 <= 36) ind = 3;
	else if (theta2 >= 38 && theta2 <= 45) ind = 4;
	else if (theta2 >= 46 && theta2 <= 54) ind = 5;
	else if (theta2 >= 55 && theta2 <= 63) ind = 6;
	else if (theta2 >= 64 && theta2 <= 72) ind = 7;
	else if (theta2 >= 73 && theta2 <= 81) ind = 8;
	else if (theta2 >= 82) ind = 9;
}