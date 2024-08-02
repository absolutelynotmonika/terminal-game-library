#pragma once
/* The renderer's job is to hold 
 * game objects, as the window
 * manages the space of drawing those objects.
*/

#include <vector>
#include "object/object.h"
#include "game_errors/game_errors.h"

// to workaround circular dependency, we define the class
// in this header so the compiler doesn't freak out
// it'll work as if the commented include wouldn't
// be commented.
class Window;

// tis ↓
// #include "window/window.h"

class Renderer {
   std::vector<Object> game_objects;

public:

   Renderer();

   void addObject(const Object& object, Window& window);
   Object& getObject(int x, int y);
   std::vector<Object>& getGameObjects();
};
