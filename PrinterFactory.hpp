#include "IPrinter.hpp"
using namespace std;

/*I have four types of printers. So there should be four different factories for each type of printer.
Similar to the Printers, the printer factories also will implement the "PrinterFactory" interface.*/
class PrinterFactory
{
public:
    virtual unique_ptr<Printer> make() = 0;
};

/*This is an Ink Jet Printer Factory. Since, InkJetFactory "is" a PrinterFactory, it will implement the
the PrinterFactory interface. It creates and returns a smart pointer to an Ink Jet Printer.*/
class InkJetFactory : public PrinterFactory
{
public:
    /*This function creates and returns a smart pointer to an Ink Jet Printer*/
    unique_ptr<Printer> make() override
    {
        return make_unique<InkJetPrinter>();
    }
};

/*This is a Daisy Wheel Printer Factory. Since, DaisyWheelFactory "is" a PrinterFactory, it will implement the
the PrinterFactory interface. It creates and returns a smart pointer to a Daisy Wheel Printer.*/
class DaisyWheelFactory : public PrinterFactory
{
public:
    unique_ptr<Printer> make() override
    {
        return make_unique<DaisyWheelPrinter>();
    }
};

/*This is a Laser Printer Factory. Since, LaserFactory "is" a PrinterFactory, it will implement the
the PrinterFactory interface. It creates and returns a smart pointer to a Laser Printer.*/
class LaserFactory : public PrinterFactory
{
public:
    unique_ptr<Printer> make() override
    {
        return make_unique<LaserPrinter>();
    }
};

/*This is a Dot Matrix Printer Factory. Since, DotMatrixFactory "is" a PrinterFactory, it will implement the
the PrinterFactory interface. It creates and returns a smart pointer to a Dot Matrix Printer.*/
class DotMatrixFactory : public PrinterFactory
{
public:
    unique_ptr<Printer> make() override
    {
        return make_unique<DotMatrixPrinter>();
    }
};