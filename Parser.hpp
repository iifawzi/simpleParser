//
//  Parser.hpp
//  Parser
//
//  Created by Fawzi on 25/04/2022.
//

#pragma once
#include <vector>
#include "Tokenizer.hpp"

namespace SimpleParser {
using namespace std;

class parser {
public:
    void parse (vector<Token> &Tokens);
};

}

