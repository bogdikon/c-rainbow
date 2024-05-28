#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Color {
public:
    static const std::string DEFAULT;
    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string BLUE;
    static const std::string PURPLE;
    static const std::string LBLUE;
    static const std::string LIGHT;
    static const std::string DIM;
    static const std::string ERR_BLINK;
    static const std::string CROSSED_OUT;
    static const std::string DOUBLE_UNDERLINE;
    static const std::string BLINK_END;
    static const std::string DIMGREEN;
};

const std::string Color::DEFAULT = "\033[0m";
const std::string Color::RED = "\033[31m";
const std::string Color::GREEN = "\033[32m";
const std::string Color::YELLOW = "\033[33m";
const std::string Color::BLUE = "\033[34m";
const std::string Color::PURPLE = "\033[35m";
const std::string Color::LBLUE = "\033[36m";
const std::string Color::LIGHT = "\033[1m";
const std::string Color::DIM = "\033[2m";
const std::string Color::ERR_BLINK = "\033[7m";
const std::string Color::CROSSED_OUT = "\033[9m";
const std::string Color::DOUBLE_UNDERLINE = "\033[21m";
const std::string Color::BLINK_END = "\033[25m";
const std::string Color::DIMGREEN = "\033[38;5;107m";

/**
 * Prints the given string with randomized coloring.
 * 
 * @param string The string to be printed with randomized coloring.
 */
void rprint(const std::string& string) {
    // Iterate over each character of the string
    for (size_t i = 0; i < string.length(); ++i) {
        // Generate a random number between 1 and 6
        int a = rand() % 6 + 1;
        
        // Print the corresponding color based on the random number
        switch (a) {
            case 1:
                std::cout << Color::RED;
                break;
            case 2:
                std::cout << Color::YELLOW;
                break;
            case 3:
                std::cout << Color::GREEN;
                break;
            case 4:
                std::cout << Color::LBLUE;
                break;
            case 5:
                std::cout << Color::BLUE;
                break;
            case 6:
                std::cout << Color::PURPLE;
                break;
            default:
                // Do nothing for invalid random numbers
                break;
        }
        
        // Print the current character with the corresponding color
        std::cout << string[i];
    }
    
    // Reset the color to the default
    std::cout << Color::DEFAULT << std::endl;
}

int main() {
    srand(time(0)); // Initialize random seed
    std::string message = "Hello, world!";
    rprint(message);
    return 0;
}
