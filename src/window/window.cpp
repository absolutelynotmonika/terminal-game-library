#include "window/window.h"
#include "utils.h"

Window::Window(int width, int height)
   :  w(width),
      h(height)
{}

void Window::run() {
   clrscr();
}

int Window::getWidth() { return this->w; }
int Window::getHeight() { return this->h; }
