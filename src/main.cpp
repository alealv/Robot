#include <iostream>
#include <Robot.h>
#include <fstream>

#include <jansson.h>

int main ()
{
  std::fstream fs("/home/alejandro/CLionProjects/Robot/Robot.json");

  std::string description((std::istreambuf_iterator<char>(fs)), std::istreambuf_iterator<char>());

  Robot rb(description);
  return 0;
}