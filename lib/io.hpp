#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class __io__ final
{
    public:
        bool allowNewLine = true;

        string readFile(string file)
        {
            char c;
            string result;
            ifstream FileRead(file);

            getline (FileRead, result);

            FileRead.seekg(-1,ios_base::end);
            FileRead.get(c);

            // automatically adds new line at the end
            if(c!='\n' && allowNewLine)
                result+'\n';
                
            FileRead.close();

            return result;
        };
        
        void writeFile(string Filename, string Input)
        {
            ofstream FileWrite(Filename);
            FileWrite << Input;
            FileWrite.close();
        }
};

__io__ io;