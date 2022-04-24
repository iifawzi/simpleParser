//
//  main.cpp
//  Parser
//
//  Created by Fawzi on 22/04/2022.
//

#include "Tokenizer.hpp"
#include <iostream>

using namespace std;
using namespace simpleparser;

int main() {
        std::cout << "simpleparser 0.1\n" << endl;

        FILE *fh = fopen("/Users/iifawzi/Desktop/Parser/parser/test.myc", "r");
        if (!fh) { cerr << "Can't find file." << endl; }
        fseek(fh, 0, SEEK_END);
        size_t fileSize = ftell(fh);
        fseek(fh, 0, SEEK_SET);
        string fileContents(fileSize, ' ');
        fread(fileContents.data(), 1, fileSize, fh);

        cout << fileContents << endl << endl;

        Tokenizer tokenizer;
        vector<Token> tokens = tokenizer.parse(fileContents);

        for(Token currToken : tokens) {
            currToken.debugPrint();
        }

    return 0;
}
