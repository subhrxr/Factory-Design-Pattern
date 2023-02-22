#include <bits/stdc++.h>
#include "FactoryImplementor.hpp"
using namespace std;

int main()
{
    /*This is the factory implementor object. We will use this to create objects of all types.*/
    FactoryImplementor fi;

    // auto pri = fi.make_printer("InkJet");      // Creates an Ink Jet Printer
    // auto pri1 = fi.make_printer("DaisyWheel"); // Creates a Daisy Wheel Printer
    // auto pri2 = fi.make_printer("Laser");      // Creates a Laser Printer
    // // auto pri3 = fi.make_printer("New");      //this will return a NULL pointer
    // auto pri3 = fi.make_printer("DotMatrix"); // Creates a Dot Matrix Printer

    // pri->Print("My name is Khan");
    // pri1->Print("My name is Khan1");
    // pri2->Print("My name is Khan2");
    // pri3->Print("My name is Sanjay");

    srand(time(0)); // setup to get random numbers
    vector<string> printers = {"DotMatrix", "DaisyWheel", "InkJet", "Laser"};
    for (int i = 0; i < 5; i++)
    {
        auto p = fi.make_printer(printers[rand() % 4]); // random printer objects are created at run-time.
        p->Print(to_string(i + 1));
    }
    return 0;
}