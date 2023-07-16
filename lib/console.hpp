#include <iostream>
#include <string>
#include <any>
using namespace std;

class __console__ final
{
    public:
        // set to True to use cout
        // set to False to use printf
        bool useCOUT = true;

        // output text to console
        template <typename T>
        void log(T input)
        {
            if(useCOUT)
                cout << input << endl;
            else
            {
                string str = input;
                str.append("\n");
                printf(str.c_str());
            }
        }

        // output text to console without new line
        template <typename T>
        void write(T input)
        {
            if(useCOUT)
                cout << input;
            else
            {
                string str = input;
                str.append("\n");
                printf(str.c_str());
            }
        }

        // add blank new line
        void blank()
        {
            printf("\n");
        }

        // read line on console
        string readline()
        {
            string result;

            getline(cin, result);

            return result;
        }
};

__console__ console;