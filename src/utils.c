#include "utils.h"

#ifdef _WIN32
void clrscr() {
   system("cls");
}
#elif defined(__linux__)
void clrscr() {
   system("clear");
}
#endif
