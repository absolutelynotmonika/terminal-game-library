#include "input/input.h"

int InputHandler::getKey(Window& win) {
   int key = getch();

   if (key == ERR)
      return 0;
   
   return key;
}
