When you pass something by reference in C++, any changes made to the parameter directly affect the original variable. That’s because instead of passing a copy of the variable, you’re passing the actual memory address (or a direct alias) of the variable.
an example of passing by reference

````cpp
void change(int& x) {
    x = 10;
}
int main() {
    int a = 5;
    change(a);
    // a is now 10
}```
````
