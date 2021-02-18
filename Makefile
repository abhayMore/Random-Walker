all: sfml-app
	./sfml-app

sfml-app: main.o $(F4)
	g++ -std=c++17 -o sfml-app main.o $(F4)  -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system

$(F4) : $(F2) $(F3)
	g++ -std=c++17 -c $(F2)
	
main.o : $(F1) $(F3)
	g++ -std=c++17 -c $(F1)

clean:
	rm -rf *o sfml-app
