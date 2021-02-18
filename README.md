# Random-Walker
```
Random Walk simulation using C++ and SFML
```
## Summary

Random Walk is a process of taking successive steps in random direction and simulating it using an entity(ex : dot, circle), thus creating a random pattern.
Here eight directions are used and one is randomly selected to determine the movement of the entity. You can tweak this by experimenting such as selecting random colours in every movement, having the percenatge probabiliity of one direction more than the other hence moving the entity more in that direction than other.

## How to Run (only for linux)

Install [SFML](https://www.sfml-dev.org/tutorials/2.5/start-linux.php)
Install make (command : ```sudo apt install make``` )
Run command : ```make F1=main.cpp F2=Walker.cpp F3=Walker.h F4=Walker.o```

### Output

![output](https://raw.githubusercontent.com/abhayMore/Random-Walker/master/RandomWalker.gif)





