#include "renderer/renderer.h"

Renderer::Renderer() {}

/* This function doesn't cover the case where objects
 * have the same positions, that is intentional and it
 * is up to the user to manage such cases
 */
void Renderer::addObject(Object& obj) {
   this->objects.push_back(obj);
}

/* This function returns a reference to an existing 
 * object, for modification and reading
 */
Object* Renderer::getObject(int x, int y) {
   for (Object& obj : this->objects) {
      if (obj.x == x && obj.y == y) return &obj;
   }

   return nullptr;
}

/* This function returns a readonly (const) reference
 * to the class's game objects, it is const because the user
 * to use this function and directly modify the game
 * objects field/parameter.
 */
const std::vector<Object>& Renderer::getObjects() const {
   return this->objects;
}
