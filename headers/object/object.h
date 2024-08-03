#pragma once

/* pre defined the classes used in this file 
 * to workaround the circular dependency "object - window"
 * and compile.
*/
class Window;

#include "window/window.h"

class Object {
public:
   int x, y, value;

   Object(char value, int x, int y);
   void draw(Window& win);
};
