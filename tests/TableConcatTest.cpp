#include <include/easy_cpp.h>

using namespace Easy_Cpp;

int main() {
    // Test the custom table.concat function
    vector<std::string> elements = { "apple", "orange", "banana" };
    string separator = ", ";
    string result = TableConcat(elements, separator);

    cout << result << std::endl;

    return 0;
}
