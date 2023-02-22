# Factory-Design-Pattern
This is a demonstration of the factory design pattern.

This repo is ment to demonstrate the factory design pattern to people who are new to design patterns.
As this is ment for beginners, the implementations will be simple.

We will taka a bottom-up approach in understanding the pattern.

We will start out with the explaination in a while, but first we must ask ourselves, 
why do we call this a pattern ?
->  This is because this idea can be used whenever there is a need for creation of objects on the go.
    Suppose, there is a product named "Juice", so there will be some kind of factory to create it.
    Similarly, there might be a product "Bike", so there will be a factory for it as well. You see the
    idea here? We create a dedicated class to create objects of one kind, that is the basic idea of the
    factory design pattern. But wait, the builder design pattern also creates a dedicated class for the
    creation of objects, so what's the difference? The main difference is that the builder design pattern
    facilitates in creating one single object piece by piece, where the factory design pattern creates
    ab object in one go.

# Problem-Statement
Suppose, you have four printers. Daisy Wheel, Dot Matrix, Laser and our favourite, Ink Jet. And you want to
print papers, but each paper can be printed only by a specific kind of printer. So, you have to create each
type of printer object on the run-time. Also, your system  should be scalable, such that if you buy a new kind
of printer tomorrow, you should be able to include that in your code whthout changing the working of current code.

The best way to go about this problem is to go like this following,

#STEP 1

    First create an interface for your printer classes, this is the interface for your "products", printers in this case.
    Now, you implement this printer interface in all your printer classes. This system will be scalable, because whenever
    you need to add a new kind of printer, all you have to do is to implement the printer interface through a new printer 
    class, and that's it.
    
    Now go and check out the code and documentation in IPrinter.hpp file for a better understanding.
    
#STEP 2

    You have four different kind of printers here, so you will require four different kind of printer factories, one for
    each kind of printer. But, since all of them will be printer factories, so we will first create a printer factory
    interface to keep our code highly general. So, basically, all the printer factories will implement the printer factory
    interface. And, under the hood, all they'll do is create a specific type of printer object and return it. And, similar 
    to the printer classes, if you create a new printer class, you have to create it's factory as well, all you need to do 
    for this is implement the printer factory interface through a new printer factory class.
    
    Now go and check out the code and documentation in PrinterFactory.hpp file for a better understanding.
    
#STEP 3
    
    All that is fine, but the user will never like to work with four different factory objects, they will have to 
    declare it before using it(atleast in C++), and who knows, in the future you might be working with hundred of 
    different types of printers. We have been very generic till here, and what we require now is some kind of API
    that will allow us to create a printer object just by taking in the name of that object. So we will create our 
    final class, the factory implementor class (you can call it whatever you want),
    the idea is that we will never directly use the factory classes, we'll use them through an API.
    
    Now go and check out the code and documentation in FactoryImplementor.hpp file for a better understanding.
    
#STEP 4

    Now you are free to use the FactoryImplementor.hpp header and create objects on the runtime.Now go and check out
    the code and documentation in Main.cpp file for a better understanding.
