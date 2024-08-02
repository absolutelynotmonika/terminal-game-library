#pragma once

#include "object/object.h"
#include "utils.h"
#include <vector>
#include <iostream>

#include "renderer/renderer.h"

class Window {
   int w, h;

public:
   Window(int width, int height);

   int getWidth();
   int getHeight();
   void clear();
   void draw(Renderer& renderer);
};
