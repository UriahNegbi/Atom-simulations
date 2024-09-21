#include <iostream>
#include <string>
#include <fstream>
std::string atom;
void setElementName(int atomicNumber) {
    const std::string file_path("elementsNames.txt");
    std::fstream data(file_path, std::fstream::in);

    if (data) {
        std::string line;
        int i = 0;
        while (std::getline(data, line)) {
            i++;
            if (atomicNumber == i) {
                atom = line;
                break;
            }
        }
        data.close();
    }
    else {
        std::cerr << "Error: Unable to open file: " << file_path << std::endl;
    }
}
