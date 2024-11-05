#include<iostream>
#include<string>
#include<cstdlib>
#include<filesystem>

void convertFile(const std::string& inputFile, const std::string& outputFile) {
  if(!std::filesystem::exists(inputFile)) {
    std::cerr << "Arquivo de entrada não encontrado." << std::endl;
    return;
  }
  std::string command = "ffmpeg -i \"" + inputFile + "\" \"" + outputFile + "\"";
  
  int result = std::system(command.c_str());
  if(result == 0) {
    std::cout << "Conversão feita com sucesso: " << outputFile << std::endl;
  } else {
    std::cerr << "Erro ao tentar converter o arquivo." << std::endl;
  }
}

int main() {
  std::string inputFile, outputFile;

  std::cout << "Digite o caminho do arquivo de entrada: ";
  std::getline(std::cin, inputFile);

  std::cout << "Digite o caminho do arquivo de saida: ";
  std::getline(std::cin, outputFile);


  convertFile(inputFile, outputFile);

  return 0;
}
