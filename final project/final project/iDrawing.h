//here is the needed variable for this and main header..

#define tankx 100
#define tanky 8
#define exploison_time 2
#define level1_points 15

char tank[10][20] = { "tank\\1.bmp", "tank\\2.bmp", "tank\\3.bmp", "tank\\4.bmp", "tank\\5.bmp", "tank\\6.bmp", "tank\\7.bmp", "tank\\8.bmp", "tank\\9.bmp", "tank\\10.bmp", };
char soldier_pic[8][100]={"soldier_pic\\Soldier1_walk_1.bmp","soldier_pic\\Soldier1_walk_2.bmp","soldier_pic\\Soldier1_walk_3.bmp","soldier_pic\\Soldier1_walk_4.bmp","soldier_pic\\Soldier1_walk_5.bmp","soldier_pic\\Soldier1_walk_6.bmp","soldier_pic\\Soldier1_walk_7.bmp","soldier_pic\\Soldier1_walk_8.bmp"};
char truck[6][100]={"truck\\truck.bmp","truck\\truck2.bmp","truck\\truck3.bmp","truck\\truck4.bmp","truck\\truck5.bmp","truck\\truck6.bmp"};
void game_over_fun();
void life_level();
void next_level();
void soldier_level1();
void aeroplane_draw();
void truck_draw();
void soldier_level1();
void mesail_draw();
void instructions();


//this function represent menu bar of this game project..
void menu()
{
	iClear();
	iSetColor(255, 255, 255);
	iFilledRectangle(0, 0, 1200, 650);
	iShowBMP(0, 0, "menubg.bmp");
	//iSetColor(100, 255, 0);
	//iFilledRectangle(490, 500, 0250, 50);
	iShowBMP(490, 500, "menubutton1.bmp");
	if (button == 1) iShowBMP(490, 500, "menubutton2.bmp");
	iSetColor(200, 200, 100);
	iText(510, 520, "NEW GAME", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(100, 255, 0);
	//iFilledRectangle(490, 430, 170, 50);
	iShowBMP(490, 430, "menubutton1.bmp");
	if (button == 2) iShowBMP(490, 430, "menubutton2.bmp");
	iSetColor(200, 200, 100);
	iText(510, 450, "LEVEL", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(100, 255, 0);
	//iFilledRectangle(490, 350, 170, 50);
	iShowBMP(490, 350, "menubutton1.bmp");
	if (button == 3)  iShowBMP(490, 350, "menubutton2.bmp");
	iSetColor(200, 200, 100);
	iText(500, 370, "HIGH SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(100, 255, 0);
	//iFilledRectangle(490, 280, 170, 50);
	iShowBMP(490, 280, "menubutton1.bmp");
	if (button == 4) iShowBMP(490, 280, "menubutton2.bmp");
	iSetColor(200, 200, 100);
	iText(520, 300, "QUIT", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(100, 255, 0);
	//iFilledRectangle(490, 200, 170, 50);
	iShowBMP(490, 200, "menubutton1.bmp");
	if (button == 5)  iShowBMP(490, 200, "menubutton2.bmp");
	iSetColor(200, 200, 100);
	iText(495, 220, "INSTRUCTION", GLUT_BITMAP_TIMES_ROMAN_24);
}



//this function represent the functionality of level 1
void level1()
{
	iClear();
	
	//iSetColor(255,255,255);
	//iFilledRectangle(0,0,1200,650);
	iShowBMP(0,0,"levelbg\\level1bg.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 7) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 8) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	
}



//this function represent the functionality of level 2
void level2()
{
	iClear();
	level_new=2;
	iShowBMP(0, 0, "levelbg\\level2bg.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 10) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 11) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	
}



//this function represent the functionality of level 3
void level3()
{
	iClear();
	level_new=3;
	iShowBMP(0, 0, "levelbg\\level3bg.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 13) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 14) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	
}



//this function represent the functionality of level 4
void level4()
{

	iClear();
	level_new=4;
	iShowBMP(0, 0, "levelbg\\level4bg.bmp");
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 16) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 17) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();

}



//this function represent the functionality of level 5
void level5()
{
	iClear();
	level_new=5;
	iShowBMP(0, 0, "levelbg\\level5bg.bmp");
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 19) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 20) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	aeroplane_draw();
	
}



//this function represent the functionality of level 6
void level6()
{
	iClear();
	level_new=6;
	iShowBMP(0, 0, "levelbg\\level6bg.bmp");
	//iSetColor(0, 255, 100);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 22) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 23) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	aeroplane_draw();
}



//this function represent the functionality of level 7
void level7()
{
	iClear();
	iShowBMP(0, 0, "levelbg\\level7bg.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 25) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 26) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	aeroplane_draw();
}




//this function represent the functionality of level 8
void level8()
{
	iClear();
	for (int i = 0; i < imageloop; i++)
	{
		iShowBMP(background[i].x, background[i].y, backgroundimages8[i]);
	}
	iShowBMP(0, 0, "bgspace8.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 28) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 29) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	aeroplane_draw();
	
}



//this function represent the functionality of level 9
void level9()
{
	iClear();
	for (int i = 0; i < imageloop; i++)
	{
		iShowBMP(background[i].x, background[i].y, backgroundimages9[i]);
	}
	iShowBMP(0, 0, "bgspace9.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 31) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 32) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
}



//this function represent the functionality of level 10
void level10()
{
	iClear();
	iShowBMP(0, 0, "levelbg\\level10.bmp");
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 500, 150, 50);
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 34) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	//iSetColor(0, 255, 100);
	//iFilledRectangle(900, 410, 150, 50);
	iShowBMP(1100, 570, "gamepositionbutton1.bmp");
	if (button == 35) iShowBMP(1100, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1110, 580, "PAUSE", GLUT_BITMAP_TIMES_ROMAN_10);
	iShowBMP2(tankx, tanky, tank[ind], 255);
	iSetColor(255, 0, 0);
	iFilledCircle(bulletx, bullety, bullradius, 1000);
	soldier_level1();
	game_over_fun();
	life_level();
	next_level();
	truck_draw();
	aeroplane_draw();
	mesail_draw();
}


//this function controls user will which level  want to play
void gamelevel()
{


	iClear();
	iShowBMP(0, 0, "levelbg.bmp");
	//iSetColor(0, 255, 0);
	//iFilledRectangle(300, 500, 150, 50);
	iShowBMP(300, 500, "levelbutton1.bmp");
	if (button == 6) iShowBMP(300, 500, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(320, 520, "LEVEL 1", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(700, 500, 150, 50);
	iShowBMP(700, 500, "levelbutton1.bmp");
	if (button == 9) iShowBMP(700, 500, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(720, 520, "LEVEL 2", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(300, 410, 150, 50);
	iShowBMP(300, 410, "levelbutton1.bmp");
	if (button == 12) iShowBMP(300, 410, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(320, 430, "LEVEL 3", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(700, 410, 150, 50);
	iShowBMP(700, 410, "levelbutton1.bmp");
	if (button == 15) iShowBMP(700, 410, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(720, 430, "LEVEL 4", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(300, 320, 150, 50);
	iShowBMP(300, 320, "levelbutton1.bmp");
	if (button == 18) iShowBMP(300, 320, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(320, 340, "LEVEL 5", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(700, 320, 150, 50);
	iShowBMP(700, 320, "levelbutton1.bmp");
	if (button == 21) iShowBMP(700, 320, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(720, 340, "LEVEL 6", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(300, 230, 150, 50);
	iShowBMP(300, 230, "levelbutton1.bmp");
	if (button == 24) iShowBMP(300, 230, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(320, 250, "LEVEL 7", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(700, 230, 150, 50);
	iShowBMP(700, 230, "levelbutton1.bmp");
	if (button == 27) iShowBMP(700, 230, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(720, 250, "LEVEL 8", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(300, 140, 150, 50);
	iShowBMP(300, 140, "levelbutton1.bmp");
	if (button == 30) iShowBMP(300, 140, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(320, 160, "LEVEL 9", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(0, 255, 0);
	//iFilledRectangle(700, 140, 150, 50);
	iShowBMP(700, 140, "levelbutton1.bmp");
	if (button == 33) iShowBMP(700, 140, "levelbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(720, 160, "LEVEL 10", GLUT_BITMAP_TIMES_ROMAN_24);

	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 39) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);

}



// using this function can pause the game state..
void stati()
{
	iClear();
	iShowBMP(0, 0, "bgstatic.bmp");
	//iSetColor(100, 255, 0);
	//iFilledRectangle(580, 330, 150, 50);
	iShowBMP(580, 330, "statibutton1.bmp");
	if (button == 36) iShowBMP(580, 330, "statibutton2.bmp");
	iSetColor(255, 255, 255);
	iText(600, 350, " Resume", GLUT_BITMAP_TIMES_ROMAN_24);
	//iSetColor(100, 255, 0);
	//iFilledRectangle(580, 240, 150, 50);
	iShowBMP(580, 240, "statibutton1.bmp");
	if (button == 37) iShowBMP(580, 240, "statibutton2.bmp");
	iSetColor(255, 255, 255);
	iText(590, 260, " Quit", GLUT_BITMAP_TIMES_ROMAN_24);
}



//this function shows instruction
void instruction_fun()
{
	iClear();
	iSetColor(0, 200, 200);
	iFilledRectangle(0, 0, 1300, 650);
	iSetColor(255, 255, 255);
	iText(500, 550, "Instructions", GLUT_BITMAP_TIMES_ROMAN_24);
	instructions();
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 40) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
}