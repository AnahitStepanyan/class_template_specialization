#include <iostream>
#include <map>
#include <string>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  std::map <std::string, std::string> phoneBook;
  int n; std::cin >> n;
  int tmpN = n;
  while(tmpN--){
    std::string name, phoneNumber;
    std::cin >> name >> phoneNumber;
    phoneBook.insert(std::pair<std::string, std::string>(name, phoneNumber));
    // phoneBook[name] = phoneNumber;
  }
  std::string key;
  /* to enter EOF character enter Ctrl+Z (for Windows) or
  Ctrl+D (for Unix systems) and quit input */
  while(std::cin >> key){
    if(phoneBook.find(key) != phoneBook.end()){
      std::cout << key << "=" << phoneBook.find(key)->second << std::endl;
    } else {
      std::cout << "Not found" << std::endl;
    }
  }
  
  return 0;
}
