#include "renderer/renderer.h"

Renderer::Renderer() {}

/* This function adds a new object at the specified 
 * position of the object instance.
 */

void Renderer::addObject(const Object& obj, Window& window) {
   // hold the value at the existing x value
   std::vector<Object>& subvector_at_x = this->game_objects.at(obj.x);

   // insert the value at the specified y position
   // in the specified x subvector reference
   subvector_at_x.insert(subvector_at_x.begin() + obj.y, obj);
}
