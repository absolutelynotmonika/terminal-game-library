#include "renderer/renderer.h"

Renderer::Renderer() {}

void Renderer::addObject(const Object& obj, Window& window) {
   this->game_objects.push_back(obj);
}

/* This function returns a reference to an existing 
 * object, for modification and reading
 */
Object& Renderer::getObject(int x, int y) {
   for (Object& obj : this->game_objects) {
      if (obj.x == x && obj.y == y) return obj;
   }

   throw new ObjectError("Object is non existent.");
}

std::vector<Object>& Renderer::getGameObjects() {
   return this->game_objects;
}
