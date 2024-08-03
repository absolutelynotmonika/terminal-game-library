#pragma once
/* The renderer's job is to hold 
 * game objects, as the window
 * manages the space of drawing those objects.
*/

#include <vector>
#include "object.h"

class Renderer {
protected:
   std::vector<Object> objects;

public:
   Renderer();

   void addObject(Object& object);
   Object* getObject(int x, int y);
   const std::vector<Object>& getObjects() const;
};
