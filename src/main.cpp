#include "window/window.h"
#include "renderer/renderer.h"
#include "input/input.h"

/* The main file is currently used to test the features
 * I am intending to change this later.
*/

int main() {
   Window win(800, 600);
   Renderer renderer;
   InputHandler input;

   auto x = Object('#', 3, 3);
   renderer.addObject(x);

   while (true) {
      if (input.getKey(win) == TERM_EXIT)
         break;

      win.draw(renderer);
   }

   win.close();
   
   return 0;
}
