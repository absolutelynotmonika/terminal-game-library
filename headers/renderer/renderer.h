#pragma once
/* The renderer's job is to hold 
 * and display game objects
*/

#include <vector>
#include "object/object.h"
#include "window/window.h"
#include "game_errors/game_errors.h"

class Renderer {
   std::vector<std::vector<Object>> game_objects;

public:
   Renderer();

   void addObject(const Object& object, Window& window);
};
