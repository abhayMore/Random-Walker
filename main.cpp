#include "SFML/Graphics.hpp"
#include "Walker.h"
#include <iostream>
#include <math.h>
#include <ctime>







int main()
{	
	srand(time(0));	
	
 	
	sf::RenderWindow window(sf::VideoMode(800,600), "Random Walk");
	std::cin.get();
	sf::sleep(sf::seconds(5));
	//window.setFramerateLimit(120);

	sf::CircleShape circle(1.0f);

	Walker w(window.getSize().x/2,window.getSize().y/2, circle);
	
	int G = 0;
	while(window.isOpen())
	{
		
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
		}
		G++;
		if(G >800)
		{
			w.RandomColor(circle);
			G = 0;
		}
		
		w.RandomWalk();
		w.Check();

		w.Display(circle);
		
		window.draw(circle);

		window.display();
	}
	return 0;
}
