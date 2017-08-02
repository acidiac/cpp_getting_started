/**
 * @Author: Amit Chanchal <amit>
 * @Date:   26-May-2017
 * @Email:  amit.chanchal@hotmail.com
 * @Filename: dog.h
 * @Last modified by:   amit
 * @Last modified time: 26-May-2017
 */
#include <string>


class Dog{
public:
  std::string name;
  std::string breed;
  int age;
  int weight;

  Dog(std::string name, std::string breed, int age, int weight);
}
