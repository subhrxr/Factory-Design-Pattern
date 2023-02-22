#include <string>
#include <iostream>
#include <memory>

/*This is the interface that all my printers will implement*/
class Printer
{
public:
    /*the destructor must be virtual so that the child class could be destroyed when freeing up the memory*/
    virtual ~Printer() = default;
    virtual void Print(const std::string &data) = 0;
    virtual bool stop() = 0;
};

/*What is Daisy Wheel Printer? It "is" a printer! So it will implement the printer interface.*/
class DaisyWheelPrinter : public Printer
{
public:
    void Print(const std::string &data) override
    {
        std::cout << "Daisy Wheel printer printing : " << data << std::endl;
    }
    bool stop() override
    {
        return false;
    }
};

/*What is Laser Printer? It "is" a printer! So it will implement the printer interface.*/
class LaserPrinter : public Printer
{
public:
    void Print(const std::string &data) override
    {
        std::cout << "Laser printer printing : " << data << std::endl;
    }
    bool stop() override
    {
        return false;
    }
};

/*What is Ink Jet Printer? It "is" a printer! So it will implement the printer interface.*/
class InkJetPrinter : public Printer
{
public:
    void Print(const std::string &data) override
    {
        std::cout << "Ink Jet printer printing : " << data << std::endl;
    }
    bool stop() override
    {
        return false;
    }
};

/*What is Dot Matrix Printer? It "is" a printer! So it will implement the printer interface.*/
class DotMatrixPrinter : public Printer
{
public:
    void Print(const std::string &data) override
    {
        std::cout << "Dot Matrix printer printing : " << data << std::endl;
    }
    bool stop() override
    {
        return false;
    }
};
