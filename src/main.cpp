/*
 * Built a multithreaded content moderation system in C++ that scans documents and emails
 * for sensitive and offensive language using a custom thread pool and rule-based
 * classification engine. Implemented parallel file processing, keyword categorization,
 * and severity scoring to flag high-risk content efficiently.
 */

#include "Scanner.h"

int main() {
    content_moderator::Scanner scanner;
    scanner.scanFile("txt_file");
}