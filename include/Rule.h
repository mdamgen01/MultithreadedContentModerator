//
// Created by nikkola on 3/29/26.
//

#ifndef CONTENT_MODERATOR_RULE_H
#define CONTENT_MODERATOR_RULE_H

#include <unordered_set>
#include <string>
#include <vector>

namespace content_moderator {

    struct Finding {
        std::string ruleName;
        std::string message;
    };


    class Rule {
        public:
            virtual ~Rule() = default;

            virtual std::vector<Finding> evaluate(const std::unordered_set<std::string>& tokens) = 0;
    };
}

#endif //CONTENT_MODERATOR_RULE_H
