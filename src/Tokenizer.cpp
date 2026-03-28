//
// Created by Matthew Damgen on 3/25/26.
//

#include "Tokenizer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>  //I chose this for O(1) lookup performance

namespace content_moderator {

    std::unordered_set<std::string> Tokenizer::tokenizeFile(const std::string& fileName) {
        std::ifstream file(fileName);
        std::unordered_set<std::string> tokens;
        std::string line;

        if (!file.is_open()) {
            std::cout << "Unable to open file" << "\n";
        }

        // *** Need to implement std::unordered_map<std::string, int> wordCount; ***
        //Used manual string parsing rather than nested while loop.
        //Both approaches are O(n), but manual parsing is faster due to lower constant overhead and better cache locality
        while (std::getline(file, line)) {
            std::string word;
            for (char c : line)
                if (std::isspace(c)) {
                    if (!word.empty()) {
                        tokens.insert(word);
                        word.clear();
                    }
                }else {
                    word += c;
                }
            if (!word.empty()) {
                tokens.insert(word);
            }
        }
        return tokens;
    }

    //Compares the words found in the file to the words specified in the main function
    void Tokenizer::findBadWords(const std::unordered_set<std::string>& bWords, const std::unordered_set<std::string>& lines) {

        for (const auto& word : bWords) {
            if (lines.contains(word)) {
                std::cout << word << " is in the file" << "\n";
            }
        }
        //A nested loop performs redundant comparisons,
        //while the hash set reduces lookup to constant time by trading additional memory for hashing.
    }
} // content_moderator