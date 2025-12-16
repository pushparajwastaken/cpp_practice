#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";

    // 1. Length
    cout << "Length: " << s.length() << endl;

    // 2. Access characters
    cout << "First char: " << s[0] << endl;

    // 3. Concatenation
    string s2 = s + "!";
    cout << "Concatenated: " << s2 << endl;

    // 4. Substring
    cout << "Substring (0,5): " << s.substr(0, 5) << endl;

    // 5. Find
    cout << "Position of 'World': " << s.find("World") << endl;

    // 6. Replace
    s.replace(6, 5, "C++");
    cout << "After replace: " << s << endl;

    // 7. Insert
    s.insert(0, "Say ");
    cout << "After insert: " << s << endl;

    // 8. Erase
    s.erase(0, 4);
    cout << "After erase: " << s << endl;

    // 9. Push & Pop
    s.push_back('!');
    s.pop_back();

    // 10. Compare
    string a = "abc", b = "xyz";
    cout << "Compare a < b: " << (a < b) << endl;

    return 0;
}
