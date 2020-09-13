#include "iostream"

#include "experiments/foo.h"

int main() {
    std::cout << "hello world\n";

    experiment::Foo foo;
    foo.Print();

    return 0;
}