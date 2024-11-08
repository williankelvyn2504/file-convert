#include<iostream>
#include<string>
#include<cstdlib>
#include<filesystem>

void convertFile(const std::string& inputFile, const std::string& outputFile) {
  if(!std::filesystem::exists(inputFile)) {
    std::cerr << "Input file not found." << std::endl;
    return;
  }
  std::string command = "ffmpeg -i \"" + inputFile + "\" \"" + outputFile + "\"";

  int result = std::system(command.c_str());
  if(result == 0) {
    std::cout << "Successful conversion: " << outputFile << std::endl;
  } else {
    std::cerr << "Error trying to convert file." << std::endl;
  }
}

int main() {
  std::string inputFile,
  outputFile;

  std::cout << "Enter the path of the input file: ";
  std::getline(std::cin, inputFile);

  std::cout << "Enter the path of the output file: ";
  std::getline(std::cin, outputFile);


  convertFile(inputFile, outputFile);

  return 0;
}