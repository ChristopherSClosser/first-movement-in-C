#include <stdio.h>

typedef struct {
    char * name;
    int age;
} person;

int main() {
    person chris;

    chris.name = "Chris";
    chris.age = 37;
    printf("%s is %d years old.", chris.name, chris.age);
}
