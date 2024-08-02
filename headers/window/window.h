#pragma once

#include "utils.h"

class Window {
   int w, h;

public:
   Window(int width, int height);

   int getWidth();
   int getHeight();
   void run();
};
