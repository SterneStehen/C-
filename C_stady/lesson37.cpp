#include <string>

// BEGIN (write your solution here)
std::string GetFullName(std::string first_name, std::string second_name)
{
    return first_name+" "+second_name;
}
std::string GetFullName()
{
    return std::string { "Anonymous" };
}
// END
