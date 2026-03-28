/*
 * Built a multithreaded content moderation system in C++ that scans documents and emails
 * for sensitive and offensive language using a custom thread pool and rule-based
 * classification engine. Implemented parallel file processing, keyword categorization,
 * and severity scoring to flag high-risk content efficiently.
 */

#include <string>
#include <unordered_set>
#include "Tokenizer.h"


int main() {
    content_moderator::Tokenizer tokenizer;

    std::unordered_set<std::string> nasty = {"Nancyboy","Butthead"};
    std::unordered_set<std::string> lines = tokenizer.tokenizeFile("/Users/matthewdamgen/Personal Projects/txt_file/bad_words.txt");

    tokenizer.findBadWords(nasty, lines);
    return 0;
}