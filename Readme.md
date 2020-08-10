## my_runner

A small video game based on the rules of a finite Endless Running Game.
The basic rules for the my_runner are as follows:
 - the player is a character who runs in a map you took as parameter.
 - enemies and obstacles must appear on the opposite side to the player position.
 - the player can use the space bar to jump and avoid obstacles and enemies.
 - as the player runs, a score, which will be displayed, will increase.
 - when the player dies or finishes the map, the score is displayed inside the window.

## How to use this project

### Requirements

[The CSFML Library](https://www.sfml-dev.org/download/csfml/index.php)

### Building the project

Clone this repository and use the included Makefile with the command ```make```

### Using the project

Run the my_runner executable with its map file using the command ```./my_runner [map_file]```  
You can use the defaut map file provided in the repository or create your own by looking at the instructions provided in the .legend file.  
You can display the help by runing the command ```./my_runner -h```