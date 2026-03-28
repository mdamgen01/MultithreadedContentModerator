//
// Created by Matthew Damgen on 3/25/26.
//

#ifndef CONTENT_MODERATOR_TOKENIZER_H
#define CONTENT_MODERATOR_TOKENIZER_H

#pragma once // Ensures the header file is included only once during compilation.
             //Prevents multiple definitions if the header is included in different .cpp files or included multiple times in the same file.
#include <unordered_set>
#include <string>

namespace content_moderator {
    class Tokenizer {
    public:
        std::unordered_set<std::string> tokenizeFile(const std::string& fileName);
        void findBadWords(const std::unordered_set<std::string>& nasty,
                          const std::unordered_set<std::string>& lines);
    };
} // content_moderator

#endif //CONTENT_MODERATOR_TOKENIZER_H