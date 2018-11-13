#include<stdlib.h>
#include<stdio.h>


FILE *fileout,*filein;
int score[10];
char score1[50];
char score2[50];
char score3[50];
char score4[50];
char score5[50];


// this function print window sorting high score...
void highscore()
{
	iClear();
	iShowBMP(0, 0, "scoreimage.bmp");
	iShowBMP(1150, 570, "gamepositionbutton1.bmp");
	if (button == 38) iShowBMP(1150, 570, "gamepositionbutton2.bmp");
	iSetColor(200, 200, 100);
	iText(1160, 580, "BACK", GLUT_BITMAP_TIMES_ROMAN_10);
	iSetColor(0, 255, 0);
	iText(500, 500, "HIGHSCORE", GLUT_BITMAP_TIMES_ROMAN_24);

	fileout = fopen("highscore.txt", "rb");
	if (fileout != NULL)
	{
		fscanf(fileout, "%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[5]);
		sprintf(score1, "score >>1.    %d", score[0]);
		sprintf(score2, "score >>2.    %d", score[1]);
		sprintf(score3, "score >>3.    %d", score[2]);
		sprintf(score4, "score >>4.    %d", score[3]);
		sprintf(score5, "score >>5.    %d", score[4]);
		iSetColor(50, 255, 60);
		iText(500, 400, score1, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(50, 255, 60);
		iText(500, 350, score2, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(50, 255, 60);
		iText(500, 300, score3, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(50, 255, 60);
		iText(500, 250, score4, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(50, 255, 60);
		iText(500, 200, score5, GLUT_BITMAP_TIMES_ROMAN_24);
		fclose(fileout);

	}
}



// this function sort for finding high score..
void sorthighscore()
{
	filein = fopen("highscore.txt", "wb");

	if (filein != NULL)
	{
		for (int i = 0; i <= 4; i++)
		{
			if (points > score[i])
			{
				int tm = score[i];
				score[i] = points;

				points = tm;
			}
			
		}

		fprintf(filein, "%d\n%d\n%d\n%d\n%d\n", score[0], score[1], score[2], score[3], score[4]);
		fclose(filein);
	}

}