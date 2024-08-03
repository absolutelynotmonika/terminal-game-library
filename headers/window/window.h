#pragma once

class Object;

#include "object/object.h"
#include <ncurses.h>
#include <unistd.h>

class Window {
   const int w, h;
   WINDOW* nc_window;

public:
   Window(int width, int height);
   ~Window();

   void close();
   void refresh();
   int getWidth() const;
   int getHeight() const;

   friend void Object::draw(Window& win);
};
