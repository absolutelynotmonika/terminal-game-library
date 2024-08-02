#include "window/window.h"
#include "utils.h"

Window::Window(int width, int height)
   :  w(width),
      h(height)
{}

void Window::draw(Renderer& renderer) {
   std::vector<Object> game_objects = renderer.getGameObjects();
   std::string buffer; // buffer containing the entire screen content

   clrscr();

   // loop through the entire screen size
   for (int x = 0 ; x <= this->w ; x++) {
      for (int y = 0 ; y <= this->h ; y++ ) {
         // check if any character matches the current position
         for (const Object& obj : game_objects) {
            if (obj.x == x && obj.y == y) {
               buffer.append(std::string(1, obj.value));
            }
         }

         // add a newline at the end of every y position iteration
         buffer.append("\n");
      }

      // display the buffer
      std::cout << buffer;
   }
}

int Window::getWidth() { return this->w; }
int Window::getHeight() { return this->h; }
