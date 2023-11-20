//
// Created by todd on 11/3/23.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
namespace lib {
    void textEdit() {

        int ap = 1;
        string op;
        cin >> op;
        fstream writer(op);
        int loop;
        while (loop > -2) {

            loop++;
            //

            string str1;
            getline(writer, str1);
            getline(cin, str1);
            writer << str1 << endl;

            if ("q" == op) {
                loop = -3;
                ap = 0;
            }
        }
    }


    void passwords(std::string user) {
        std::string read;
        ifstream reader(std::string user);

    }
    void App(char command,char input)
    {
        char a = command + input;

    }

}




