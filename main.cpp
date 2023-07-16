#include <iostream>
#include <string>
#include "lib/console.hpp"
#include "lib/io.hpp"
using namespace std;

// test Console.h
void TestCONSOLE()
{
    console.log("Testing \'console.h\'");

    console.log("Hello");

    console.blank();
}

// test io.h
void TestIO()
{
    console.log("Testing \'io.h\'");

    // read existing file
    string fileread = io.readFile("test.txt");
    console.log(fileread);

    console.blank();

    // create new file
    io.writeFile("newFile.txt", "This is newly generated file.");

    // read the created file
    string fileread2 = io.readFile("newFile.txt");
    console.log(fileread2);
}

int main()
{
    // toggles between COUT or PRINTF
    console.useCOUT = false;

    TestCONSOLE();

    TestIO();

    return 0;
}