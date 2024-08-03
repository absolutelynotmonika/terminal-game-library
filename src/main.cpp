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
      int key = input.getKey(win);

      if (key == TERM_EXIT)
         break;
      switch (key) {
         case 'd':
            shit.x += 1;
            break;
         case 'a':
            shit.x -= 1;
            break;
         case 'w':
            shit.y -= 1;
            break;
         case 's':
            shit.y += 1;
            break;
      }

      shit.draw(win);
      win.refresh();
   }

   return 0;
}
