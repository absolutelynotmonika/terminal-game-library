#include "input/input.h"

int InputHandler::getKey(Window& win) {
   return getch();
}

int InputHandler::lastKey() {
   return this->last_key;
}
