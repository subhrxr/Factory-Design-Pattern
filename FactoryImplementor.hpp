#include "PrinterFactory.hpp"
#include <map>
#include <string>
using namespace std;

/*We have four different factories for different printers. But, however, we would like to use a single object
to create objects for all those printers. This is where this class comes in.*/
class FactoryImplementor
{
    /*This map will contain "key" as the "printer name" and value as the printer factory object of that "printer name".
    Notice how elegantly we have put "unique_ptr<PrinterFactory>" as the value type, this will let us store all the printer
    factories as values as all of them implement Printerfactory.*/
    std::map<string, unique_ptr<PrinterFactory>> printers;

public:
    FactoryImplementor()
    {
        /*This constructor initializes the map with all the printer names and factories that I have right now*/
        printers["InkJet"] = make_unique<InkJetFactory>();
        printers["DaisyWheel"] = make_unique<DaisyWheelFactory>();
        printers["Laser"] = make_unique<LaserFactory>();
        printers["DotMatrix"] = make_unique<DotMatrixFactory>();
    }

    unique_ptr<Printer> make_printer(const string &name)
    {
        /*This function returns the requested printer if it exists in the map, and returns NULL if it does'nt exist.
        Notice how I am returning a unique_ptr<Printer> ans not a printer of a specific type. This will allow me to
        return a unique_ptr to a printer of any type that implements the Printer interface*/
        if (printers.find(name) != printers.end())
            return printers[name]->make();
        return NULL;
    }
};