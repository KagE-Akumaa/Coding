#include <iostream>
#include <unordered_map>

int main()
{
     std::unordered_map<std::string, std::string> phonebook;
     phonebook["Alice"] = "1234567890";
    phonebook["Bob"] = "9876543210";
    phonebook["Charlie"] = "5555555555";


    std::string name;
    std::cout << "Enter the Name !" << std::endl;

   std::getline(std::cin, name);

    if(phonebook.find(name)!= phonebook.end())
    {
     std::cout << "Phone Number is : " << phonebook[name] << std::endl;
    }
    else{
     std::cout << "Contact not found! " << std::endl;
    }
    return 0;
}