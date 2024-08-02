#pragma once

#include <stdexcept>
#include <string>

class ObjectError : public std::runtime_error {
public:
   ObjectError(const std::string& message);
};
