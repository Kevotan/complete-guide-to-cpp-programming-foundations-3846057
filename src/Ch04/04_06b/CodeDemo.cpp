// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoints = {"Start", "Forest", "Castle"};

    checkpoints.push_back("Cave");
    checkpoints.push_back("Finisch");    

    std::cout << "The game has " << checkpoints.size() << " checkpoints." << std::endl;
    std::cout << "The checkpoint at index 2 is " << checkpoints[2] << std::endl;
    checkpoints [2] = "Dark Castle";
    std::cout << "Checkpoints updated to: " << checkpoints [2] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
