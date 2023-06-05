#include <iostream>
#include <cassert>
#include "output.h"
#include "input.h"
#include "array.h"

enum game{
   ASK_POSITION,
   CHECK_POSITION,
   CHECK_GAME_STATE,
   SHOW_RESULT_WINNER,
   SHOW_RESULT_TIE,
   END_GAME
};