#include "window/window.h"
#include <ncurses.h>

Window::Window(const int width, const int height)
   :  w(width),
      h(height)
{
   initscr();
   raw();
   noecho();
   cbreak();
   curs_set(false);
   keypad(stdscr, true);
   nodelay(stdscr, true);

   this->nc_window = newwin(width, height, 0, 0);
}

Window::~Window() {
   close();
}

int Window::getWidth() const { return this->w; }
int Window::getHeight() const { return this->h; }

void Window::close() {
   delwin(this->nc_window);
   this->nc_window = nullptr;
   endwin();
}

/* This function will refresh your screen at a 
 * fixed framerate so the changes can actually 
 * be visible and not immediately clear.
*/
void Window::refresh() {
   wrefresh(this->nc_window);
   wclear(this->nc_window);
   usleep(1000000 / 60);
}
