//
// Created by Matthew Damgen on 3/25/26.
//

#include "Scanner.h"
#include "OffensiveWordRule.h"
#include <iostream>

namespace content_moderator {

    Scanner::Scanner() {
        engine.addRule(std::make_unique<OffensiveWordRule>());
    }

    void Scanner::scanFile(const std::string& file) {
        auto tokens = tokenizer.tokenizeFile(file);
        auto findings = engine.run(tokens);

        for (const auto& f : findings) {
            std::cout << f.message << "\n";
        }
    }

}// content_moderator