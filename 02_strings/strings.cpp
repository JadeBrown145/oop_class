#include <iostream>
#include <string>


int main(void) {
    //create 2 strings
    std::string name, animal;

    std::cout << "Enter your name: ";
    getline(std::cin, name);

    std::cout << "Enter your favorite animal: ";
    getline(std::cin, animal);

    std::string introduction = "Agent " + name;
    introduction += ", also known as The " + animal + ".";

    std::cout << '\n' << introduction << std::endl;
    std::cout << "Your identity contains " << introduction.size() << std::endl;

    return 0;

}