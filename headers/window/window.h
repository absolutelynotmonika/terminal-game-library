#pragma once

class Object;

#include "object/object.h"
#include <ncurses.h>
#include <unistd.h>

class Window {
   const int w, h;
   int target_fps;
   int flags;
   WINDOW* nc_window;

public:
   Window(int width, int height, int flags);
   ~Window();

   void close();
   void refresh();
   void setTargetFPS(int fps);
   int getWidth() const;
   int getHeight() const;

   friend void Object::draw(Window& win);
};
