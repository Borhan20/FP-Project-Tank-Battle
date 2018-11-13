#include"iGraphics.h"
#include"projectile.h"
#include"background.h"
#include"iDrawing.h"
#include"sCore.h"
#include"enemy.h"
#include"instructions.h"






#define start 10
int strt = 0;
int level;





//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	


	strt++;
	if (strt == start) gamestate = 0;
	iClear();

	//iSetColor(255, 255, 255);
	//iFilledCircle(bulletx, bullety, ballradius, 1000);

	if (gamestate == -1)
	{
		iClear();
		iShowBMP(0, 0, "fontimage.bmp");

	}

	else if (gamestate == 0)
	{
		menu();

	}
	//place your drawing codes here	
	else if (gamestate == 1)
	{
		level1();

	}

	else if (gamestate == 2)
	{
		level2();
	}


	else if (gamestate == 3)
	{
		level3();
	}


	else if (gamestate == 4)
	{
		level4();
	}


	else if (gamestate == 5)
	{
		level5();
	}

	else if (gamestate == 6)
	{
		level6();
	}

	else if (gamestate == 7)
	{
		level7();
	}

	else if (gamestate == 8)
	{
		level8();
	}

	else if (gamestate == 9)
	{
		level9();
	}

	else if (gamestate == 10)
	{
		level10();
	}

	else if (gamestate == 12)
	{
		gamelevel();
	}

	else if (gamestate == 13)
	{
		highscore();

		/*fscanf(filein, "%d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		printf("a\nb\nc\nd\ne\nf\n",a,b,c,d,e,f);*/
	}

	else if (gamestate == 14)
	{
		stati();
		
	}


	else if (gamestate == 15)
	{
		instruction_fun();
	}

}
void iPassiveMouseMove(int mx, int my)
{
	theta2 = atan2(my*1.0 - 100, mx*1.0 - 280)*(180 / pi);
	turretmove();


	//menu state

	if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 500 && my <= 550)
	{

		button = 1;
	}

	else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 430 && my <= 480)
	{
		button = 2;
	}
	else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 350 && my <= 400)
	{
		button = 3;
	}
	else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 280 && my <= 330)
	{

		button = 4;
	}
	else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 200 && my <= 250)
	{
		button = 5;
	}


	//level 1
	else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 500 && my <= 550)
	{
		button = 6;
	}
	else if (gamestate == 1 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 7;
	}
	else if (gamestate == 1 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 8;
	}



	//level 2

	else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 500 && my <= 550)
	{
		button = 9;
	}
	else if (gamestate == 2 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 10;
	}
	else if (gamestate == 2 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 11;
	}



	//level 3

	else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 410 && my <= 460)
	{
		button = 12;
	}
	else if (gamestate == 3 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 13;
	}
	else if (gamestate == 3 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 14;
	}




	//level 4

	else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 410 && my <= 460)
	{
		button = 15;
	}
	else if (gamestate == 4 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 16;
	}
	else if (gamestate == 4 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 17;
	}




	//level 5

	else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 320 && my <= 370)
	{
		button = 18;
	}
	else if (gamestate == 5 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 19;
	}
	else if (gamestate == 5 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 20;
	}





	//level 6

	else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 320 && my <= 370)
	{
		button = 21;
	}
	else if (gamestate == 6 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 22;
	}
	else if (gamestate == 6 && mx>= 1100 && mx<= 1150 && my >= 570 && my <= 600)
	{
		button = 23;
	}



	//level 7

	else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 230 && my <= 280)
	{
		button = 24;
	}
	else if (gamestate == 7 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 25;
	}
	else if (gamestate == 7 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 26;
	}



	//level 8

	else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 230 && my <= 280)
	{
		button = 27;
	}
	else if (gamestate == 8 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 28;
	}
	else if (gamestate == 8 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 29;
	}



	//level 9

	else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 140 && my <= 190)
	{
		button = 30;
	}
	else if (gamestate == 9 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 31;
	}
	else if (gamestate == 9 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 32;
	}



	//level 10

	else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 140 && my <= 190)
	{
		button = 33;
	}
	else if (gamestate == 10 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 34;
	}
	else if (gamestate == 10 && mx >= 1100 && mx <= 1150 && my >= 570 && my <= 600)
	{
		button = 35;
	}




	//static state

	else if (gamestate == 14 && level == 1 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 2 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 3 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 4 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 5 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 6 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 7 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 8 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 9 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}
	else if (gamestate == 14 && level == 10 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
	{
		button = 36;
		
	}



	//quit state

	else if (gamestate == 14 && mx >= 580 && mx <= 730 && my >= 240 && my <= 290)
	{
		button = 37;
	}


	//scoring state

	else if (gamestate == 13 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 38;
	}

	//level state
	else if (gamestate == 12 && mx >= 1150 && mx <= 1200 && my >= 570 && my <= 600)
	{
		button = 39;
	}

	//instruction
	else if (gamestate == 15 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
	{
		button = 40;
	}


	else
	{
		button = 0;
	}

}




/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
	
}
//*******************************************************************ipassiveMouse***********************************************************************//


void iMouse(int button, int state, int mx, int my)
{
	if (check == 0)
	{

		theta = atan2(my*1.0 - 100, mx*1.0 - 280)*(180 / pi);
		if (theta > 90) theta = 85;
		timeMax = (v*sin((theta*pi) / (180 * 1.0))) / g;
		rMax = (v*v*sin((2 * theta*pi) / (180 * 1.0))) / g;
		bullposition();
	}



	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		//menu state

		if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 430 && my <= 480)
		{
			gamestate = 12;
		}
		else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 350 && my <= 400)
		{
			gamestate = 13;
		}
		else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 280 && my <= 330)
		{

			exit(0);
		}

		else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 500 && my <= 550)
		{

			gamestate = 1;
			flag = 1;
			game_over = 0;
			level_new = 1;
			reset_soldier_position(0);
			level = 1;
			points = 0;
			resume_enemy();
			life = stat_life;
		}

		else if (gamestate == 0 && mx >= 490 && mx <= 660 && my >= 200 && my <= 250)
		{
			gamestate = 15;
		}

		//level to level 1 game



		else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 500 && my <= 550)
		{

			gamestate = 1;
			flag = 1;
			game_over = 0;
			level_new = 1;
			reset_soldier_position(0);
			level = 1;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 1 && mx >= screenwidth-50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 1 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
		    flag=0;
			pause_enemy();
			
		}
		else if (gamestate == 1)
		{
			check = 1;
			bullradius = r;
		}

		//level to level 2 game



		else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 500 && my <= 550)
		{

			gamestate = 2;
			flag = 1;
			game_over = 0;
			level_new = 2;
			reset_soldier_position(0);
			level = 2;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 2 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 2 && mx >= screenwidth - 100 && mx <= screenwidth -50  && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			printf("level %d  %d\n", level_new, level);
			pause_enemy();
		}
		else if (gamestate == 2)
		{
			check = 1;
			bullradius = r;
		}



		//level 3

		else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 410 && my <= 460)
		{
			
			gamestate = 3;
			flag = 1;
			game_over = 0;
			level_new = 3;
			reset_soldier_position(0);
			level = 3;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 3 && mx >= screenwidth -50  && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 3 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 3)
		{
			check = 1;
			bullradius = r;
		}



		//level 4

		else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 410 && my <= 460)
		{
			
			gamestate = 4;
			flag = 1;
			game_over = 0;
			level_new = 4;
			reset_soldier_position(0);
			level = 4;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 4 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 4 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
			
		}
		else if (gamestate == 4)
		{
			check = 1;
			bullradius = r;
		}




		//level 5

		else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 320 && my <= 370)
		{
			
			gamestate = 5;
			flag = 1;
			game_over = 0;
			level_new = 5;
			reset_soldier_position(0);
			level = 5;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 5 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 5 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 5)
		{
			check = 1;
			bullradius = r;
		}




		//level 6

		else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 320 && my <= 370)
		{
			
			gamestate = 6;
			flag = 1;
			game_over = 0;
			level_new = 6;
			reset_soldier_position(0);
			level = 6;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 6 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 6 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 6)
		{
			check = 1;
			bullradius = r;
		}


		//level 7

		else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 230 && my <= 280)
		{
			gamestate = 7;
			flag = 1;
			game_over = 0;
			level_new = 7;
			reset_soldier_position(0);
			level = 7;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 7 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 7 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 7)
		{
			check = 1;
			bullradius = r;
		}


		//level 8

		else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 230 && my <= 280)
		{
			gamestate =8 ;
			flag = 1;
			game_over = 0;
			level_new =8 ;
			reset_soldier_position(0);
			level = 8;
			points = 0;
			resume_enemy();
			life = stat_life;
			bgsetAll();
		}
		else if (gamestate == 8 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 8 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 8)
		{
			check = 1;
			bullradius = r;
		}



		//level 9

		else if (gamestate == 12 && mx >= 300 && mx <= 450 && my >= 140 && my <= 190)
		{
			gamestate = 9;
			flag = 1;
			game_over = 0;
			level_new = 9;
			reset_soldier_position(0);
			level = 9;
			points = 0;
			resume_enemy();
			life = stat_life;
			bgsetAll();
		}
		else if (gamestate == 9 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 9 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 9)
		{
			check = 1;
			bullradius = r;
		}


		//level 10

		else if (gamestate == 12 && mx >= 700 && mx <= 850 && my >= 140 && my <= 190)
		{
			gamestate = 10;
			flag = 1;
			game_over = 0;
			level_new = 10;
			bgsetAll();
			reset_soldier_position(0);
			level = 10;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 10 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}
		else if (gamestate == 10 && mx >= screenwidth - 100 && mx <= screenwidth - 50 && my >= 570 && my <= 600)
		{
			gamestate = 14;
			flag = 0;
			pause_enemy();
		}
		else if (gamestate == 10)
		{
			check = 1;
			bullradius = r;
		}


		//level state

		else if (gamestate == 12 && mx >= screenwidth - 50 && mx <= screenwidth  && my >= 570 && my <= 600)
		{
			gamestate = 0;
			flag = 0;
			game_over = 0;
			level_new = 0;
			reset_soldier_position(0);
			level = 0;
			points = 0;
			resume_enemy();
			life = stat_life;
		}


		//static state
		else if (gamestate == 14 && level == 1 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 1;
			flag=1;
			resume_enemy();
		}
		else if (gamestate == 14 && level == 2 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 2;
			flag=1;
			resume_enemy();
		}
		else if (gamestate == 14 && level == 3 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 3;
			flag=1;
			resume_enemy();
		}
		else if (gamestate == 14 && level == 4 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 4;
			flag=1;
			resume_enemy();
		}
		else if (gamestate == 14 && level == 5 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 5;
			flag=1;
			resume_enemy();
			
		}
		else if (gamestate == 14 && level == 6 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 6;
			flag=1;
			resume_enemy();
		}
		else if (gamestate == 14 && level == 7 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 7;
			flag=1;
			resume_enemy();
			bgsetAll();
		}
		else if (gamestate == 14 && level == 8 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 8;
			flag=1;
			resume_enemy();
			bgsetAll();
		}
		else if (gamestate == 14 && level == 9 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 9;
			flag=1;
			resume_enemy();
			bgsetAll();
		}
		else if (gamestate == 14 && level == 10 && mx >= 580 && mx <= 730 && my >= 330 && my <= 380)
		{
			gamestate = 10;
			flag=1;
			resume_enemy();
			bgsetAll();
		}



		//scoring data state
		else if (gamestate == 13 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
		}


		//instruction
		else if (gamestate == 15 && mx >= screenwidth - 50 && mx <= screenwidth && my >= 570 && my <= 600)
		{
			gamestate = 0;
		}



		//quit state

		else if (gamestate == 14 && mx >= 580 && mx <= 730 && my >= 240 && my <= 290)
		{
			exit(0);
		}
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}


/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		check = 1;
		bullradius = r;
	}
	if(key=='r')
	{
		gamestate++;
		level_new++;
		level++;
		if (gamestate > 10)
			gamestate = 12;
		reset_soldier_position(0);
		resume_enemy();
	}
	
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
	
	}


	if (key == GLUT_KEY_UP)
	{

		if (theta <= 80 && check == 0)
		{
			theta += 10;
			//vx = v*cos((theta*pi) /( 180*1.0));
			//vx = v*sin((theta*pi) /( 180*1.0));
			timeMax = (v*sin((theta*pi) / (180 * 1.0))) / g;
			rMax = (v*v*sin((2 * theta*pi) / (180 * 1.0))) / g;
			//printf("%lf\n", theta);

		}

		if (ind<9) ind++;
		bullposition();
	}

	if (key == GLUT_KEY_DOWN)
	{
		if (theta >0 && check == 0)
		{
			theta -= 10;
			//vx = v*cos((theta*pi) / (180 * 1.0));
			//vx = v*sin((theta*pi) / (180 * 1.0));
			timeMax = (v*sin((theta*pi) / (180 * 1.0))) / g;
			rMax = (v*v*sin((2 * theta*pi) / (180 * 1.0))) / g;
			//printf("%lf", theta);

		}

		if (ind > 0) ind--;
		bullposition();
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}









int main()
{
	bgsetAll();
	
	pause_fun_soldier=iSetTimer(50,soldier_fun);
	pause_fun_aeroplane=iSetTimer(50,aeroplane);
	pause_fun_truck= iSetTimer(50,truck_fun);
	pause_fun_mesail = iSetTimer(50, mesail);
	iSetTimer(1, pras);
	
	iSetTimer(10, bgchange);

	///srand((unsigned)time(NULL));
	iInitialize(screenwidth, screenhight, "Project");
	///updated see the documentations
	iStart();
	return 0;
}