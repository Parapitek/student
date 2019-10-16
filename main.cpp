#include "human.h"
#include "student.cpp"
int main(int argc, char *argv[])
{
    Human *h = new Human();
    h->say();
    Student *x = new Student("Petr", 176, 71, "I-61");
    x->say();
    return 0;
}
