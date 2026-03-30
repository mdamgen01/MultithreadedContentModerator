//
// Created by Matthew Damgen on 3/25/26.
//

#ifndef CONTENT_MODERATOR_SCANNER_H
#define CONTENT_MODERATOR_SCANNER_H

#include <Tokenizer.h>
#include <RuleEngine.h>

namespace content_moderator {
    class Scanner {
    private:
        Tokenizer tokenizer;
        RuleEngine engine;

    public:
        Scanner();
        void scanFile(const std::string& file);
    };
}
#endif //CONTENT_MODERATOR_SCANNER_H