#ifndef __SNAKE__
#define __SNAKE__

#include "../../../gui/cli/cli.h"
#include "../back/back.h"
#include "../common/defines.h"
#include "snake_fsm.h"

#include <ctype.h>
#include <ncurses.h>
#include <stdlib.h>

int SnakeGameLoop(GameInfo_t *gameInfo, WINDOW **windows);
//void setUp(WINDOW **windows, int winCount, GameInfo_t *gameInfo, int **field);
int SnakeHandleCollision(int col,int dir);


#define SNAKE_GAME_SPEED 300
#define SNAKE_GAME_ACCELERATION 20

#endif