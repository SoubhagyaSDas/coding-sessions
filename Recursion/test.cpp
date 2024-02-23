#include <iostream>
#include <string>

// Function to replace a substring in a string recursively
std::string replaceSubstringRecursive(const std::string& str, const std::string& toReplace, const std::string& replacement, size_t pos = 0) {
    // Base case: If substring toReplace not found
    if (pos == std::string::npos)
        return str;

    // Find the position of toReplace starting from pos
    size_t foundPos = str.find(toReplace, pos);

    // Base case: If toReplace not found from the current position
    if (foundPos == std::string::npos)
        return str;

    // Replace the substring
    std::string result = str;
    result.replace(foundPos, toReplace.length(), replacement);

    // Recursively call the function with updated position
    return replaceSubstringRecursive(result, toReplace, replacement, foundPos + replacement.length());
}

int main() {
    std::string str = "Hello, World! Hello, Universe! Hello, World!";
    
    // Replace "World" with "Universe"
    std::string toReplace = "World";
    std::string replacement = "Universe";
    
    // Call the function to replace substring recursively
    std::string modifiedStr = replaceSubstringRecursive(str, toReplace, replacement);
    
    // Output the modified string
    std::cout << "Modified string: " << modifiedStr << std::endl;
    
    return 0;
}
