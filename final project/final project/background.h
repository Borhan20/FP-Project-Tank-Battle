
#define backgroundspeed 10;

char backgroundimages8[12][20] = { "level8bg\\1.bmp", "level8bg\\2.bmp", "level8bg\\3.bmp", "level8bg\\4.bmp", "level8bg\\5.bmp", "level8bg\\6.bmp", "level8bg\\7.bmp", "level8bg\\8.bmp", "level8bg\\9.bmp", "level8bg\\10.bmp", "level8bg\\11.bmp", "level8bg\\12.bmp" };
char backgroundimages9[12][20] = { "level9bg\\1.bmp", "level9bg\\2.bmp", "level9bg\\3.bmp", "level9bg\\4.bmp", "level9bg\\5.bmp", "level9bg\\6.bmp", "level9bg\\7.bmp", "level9bg\\8.bmp", "level9bg\\9.bmp", "level9bg\\10.bmp", "level9bg\\11.bmp", "level9bg\\12.bmp", };




typedef struct background
{
	int x;
	int y;
} background;

struct background background[12];


#define Xchange 100
#define imageloop 12



// this function set position of background picture ..
void bgsetAll()
{
	int sum = 0;
	//printf("%d\n", imageloop);
	for (int i = 0; i < imageloop; i++)
	{
		background[i].y = 0;
		background[i].x = sum;
		sum += Xchange;
		//printf("%d\n", Xchange);
	}
}



// using this function move the background picture which visualise tank move..
void bgchange()
{
	for (int i = 0; i < imageloop; i++)
	{
		background[i].x -= backgroundspeed;
		if (background[i].x <0)
		{
			background[i].x = screenwidth-10;
		}
	}
}




