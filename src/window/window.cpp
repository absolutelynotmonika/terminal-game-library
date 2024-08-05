#include "window/window.h"
#include "window/flags.h"
#include <ncurses.h>

#define DEFAULT_FPS 60

Window::Window(const int w, const int h, const int flags)
   :  w(w),
      h(h),
      target_fps(DEFAULT_FPS),
      flags(flags)
{
   // initialise ncurses
   initscr();
   raw();
   noecho();
   cbreak();
   curs_set(false);
   keypad(stdscr, true);
   nodelay(stdscr, true);

   // create the ncurses window pointer
   this->nc_window = newwin(w, h, 0, 0);
}

Window::~Window() {
   close();
}

int Window::getWidth() const { return this->w; }
int Window::getHeight() const { return this->h; }

void Window::setTargetFPS(int fps) {
   this->target_fps = fps;
}

void Window::close() {
   delwin(this->nc_window);
   this->nc_window = nullptr;
   endwin();
}

/* This function will refresh your screen at a 
 * fixed framerate so the changes can actually 
 * be visible and not clear immediately.
*/
void Window::refresh() {
   // activate the window flags
   if (WINDOW_BORDER & this->flags)
      box(this->nc_window, 0, 0);

   // We have this specific order to avoid flickering
   timeout(1 / this->target_fps); // wait 1/<target_fps>ms to improve performance
   wrefresh(this->nc_window);
   werase(this->nc_window); // clear the screen for the next operation
}
