#pragma once

#include "renderer/renderer.h"
#include "renderer/object.h"
#include <vector>
#include <iostream>
#include <ncurses.h>

class Window {
   const int w, h;

public:
   Window(int width, int height);
   ~Window();

   void close();
   int getWidth() const;
   int getHeight() const;
   void draw(Renderer& renderer) const;
};
