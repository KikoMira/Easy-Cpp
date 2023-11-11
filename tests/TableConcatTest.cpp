#include <include/easy_cpp.h>

int main() {
    // Test the custom table.concat function
    std::vector<std::string> elements = { "apple", "orange", "banana" };
    std::string separator = ", ";
    std::string result = TableConcat(elements, separator);

    std::cout << result << std::endl;

    return 0;
}
