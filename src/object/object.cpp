/* Include the window file to help with the circular
 * dependency in between the window and object classes.
*/
#include "window/window.h"

#include "object/object.h"

Object::Object(char value, int x, int y)
   :  x(x),
      y(y),
      value(value)
{}

/* This function will actually take effect during Window::refresh()
 * so until then, it sends the text to a buffer in the ncurses 
 * internals, which refresh() will display.
 */
void Object::draw(Window& win) {
   mvwprintw(win.nc_window, this->x, this->y, "%c", this->value);
}
