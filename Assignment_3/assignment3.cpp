#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;   // p is assigned null

    // Dereferencing a null pointer (should be detected statically)
    cout << *p;         // Null dereference

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;   // p is assigned null

    // Check before dereferencing
    if (p != nullptr) {
        cout << *p;
    } else {
        cout << "Error: Null pointer, cannot dereference.";
    }

    return 0;
}
