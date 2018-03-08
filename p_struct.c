#include <stdio.h>

// Structures are like objects or classes
typedef struct {
    // to be properties of person structure
    char * name;
    int age;
} person;

int main() {
    person chris;

    // assign properties
    chris.name = "Chris";
    chris.age = 37;
    printf("%s is %d years old.\n", chris.name, chris.age);
}
