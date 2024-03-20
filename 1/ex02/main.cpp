#include <iostream>
int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address held by strPTR: " << strPTR << std::endl;
    std::cout << "Address held by strREF: " << &strREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << strREF << std::endl;

    return 0;
}
