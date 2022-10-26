#include<iostream>
int main()
{
	std::string a = std::to_string(42).c_str() + 0;
	std::cout<<a<<std::endl;
}
