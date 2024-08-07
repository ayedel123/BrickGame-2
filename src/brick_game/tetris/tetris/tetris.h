#ifndef __TETRIS__
#define __TETRIS__

#include "../../../gui/cli/cli.h"
#include "../back/back.h"
#include "../common/defines.h"
#include "tetris_fsm.h"

#include <ctype.h>
#include <ncurses.h>
#include <stdlib.h>

int TetrisGameLoop(GameInfo_t *gameInfo, WINDOW **windows);
//void TetrisSetUp(WINDOW **windows, int winCount, GameInfo_t *gameInfo, int **field);
int TetrisHandleCollision(int col,int dir);

#define GAME_SPEED 300
#define GMAE_ACCELERATION 20

#endif