#include "Walker.h"



Walker::Walker(float a, float b, sf::CircleShape& shape) : x(a), y(b)
{
	Display(shape);
}

void Walker::RandomWalk()
{
	int random = rand()%8 + 1; 
	if(random == 1)
		x++;	
	else if(random == 2)
		x--;
	else if(random == 3)
		y++;
	else if(random == 4)
		y--;
	else if(random == 5)
	{
		x++;
		y++;
	}
	else if(random == 6)
	{
		x++;
		y--;
	}
	else if(random == 7)
	{
		x--;
		y++;
	}
	else if(random == 8)
	{
		x--;
		y--;
	}
	
}

void Walker::RandomColor(sf::CircleShape& shape)
{	
	int random = rand()%11;
	shape.setFillColor(sf::Color(colorArray[random]));
}
void Walker::Display(sf::CircleShape& shape)
{
	shape.setPosition(sf::Vector2f(x,y));
}

void Walker::Check()
{
	if(x >= 800 )
		x = 0;
	if(x < 0)
		x = 800;
	if(y >= 600)
		y = 0;
	if(y < 0)
		y = 600;
}
