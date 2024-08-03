#pragma once

#include "keys.h"
#include "window/window.h"

class InputHandler {
   int last_key;
   
public:
   int getKey(Window& win);
   int lastKey();
};
