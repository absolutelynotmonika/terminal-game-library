#include "window/window.h"
#include <ncurses.h>

Window::Window(const int width, const int height)
   :  w(width),
      h(height)
{
   initscr();
   raw();
   keypad(stdscr, true);
   noecho();
   nodelay(stdscr, true);
}

void Window::close() {
   endwin();
}

Window::~Window() {
   close();
}

void Window::draw(Renderer& renderer) const {
   // loop through the entire screen size
   for (int x = 0 ; x <= this->w ; x++) {
      for (int y = 0 ; y <= this->h ; y++ ) {
         // check if any character matches the current position
         for (const Object& obj : renderer.getObjects()) {
            if (obj.x == x && obj.y == y)
               mvprintw(x, y, "%c", obj.value);
         }
      }

      refresh();
   }
}

int Window::getWidth() const { return this->w; }
int Window::getHeight() const { return this->h; }
