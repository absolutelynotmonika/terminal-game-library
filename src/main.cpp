#include "window/window.h"
#include "input/input.h"

/* The main file is currently used to test the features
 * I am intending to change this later.
*/

int main() {
   Window win(800, 600);
   InputHandler input;

   Object shit = Object('#', 3, 3);

   while (true) {
      if (input.getKey(win) == TERM_EXIT)
         break;
      if (input.getKey(win) == 'd')
         shit.x += 1;

      shit.draw(win);
      win.refresh();
   }

   return 0;
}
