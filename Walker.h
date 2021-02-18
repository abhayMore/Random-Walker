#ifndef WALKER_H
#define WALKER_H

#include "SFML/Graphics.hpp"

class Walker
{
	private:
		float x;
		float y;
		sf::Color colorArray[11]= {sf::Color::Cyan,
			sf::Color::Blue,
			sf::Color::Green,
			sf::Color::Red, 	
			sf::Color::Yellow,
			sf::Color::White,
			sf::Color::Magenta,
			sf::Color(0xd11141FF),
			sf::Color(0xf37735FF),
			sf::Color(0xff77aaFF),
			sf::Color(0x843b62FF)
			};
	public:
		Walker(float a, float b, sf::CircleShape& shape);
		void RandomWalk();
		void Display(sf::CircleShape&);	
		void RandomColor(sf::CircleShape&);
		void Check();
};


#endif // WALKER_H
