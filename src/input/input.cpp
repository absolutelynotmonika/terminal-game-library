#include "input/input.h"

int InputHandler::getKey(Window& win) {
   int current_char = getch();

   if (current_char != ERR)
      this->last_key = current_char;

   return (current_char != ERR) ? current_char : 0;
}

int InputHandler::lastKey() {
   return this->last_key;
}
