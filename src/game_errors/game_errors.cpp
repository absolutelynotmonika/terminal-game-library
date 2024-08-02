#include "game_errors/game_errors.h"

ObjectError::ObjectError(const std::string& message)
   :  std::runtime_error(message)
{}
