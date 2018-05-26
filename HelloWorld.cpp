#include <iostream>
#include <maya/MSimple.h>
#include <maya/MIOStream.h>
DeclareSimpleCommand(HelloWorld, "Autodesk", "2017");
MStatus HelloWorld::doIt(const MArgList&)
{
    std::cout << "Hello Worldasdfasdf\n" << std::endl;
    return MS::kSuccess;
}