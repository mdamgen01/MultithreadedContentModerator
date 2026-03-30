//
// Created by Matthew Damgen on 3/25/26.
//

#ifndef CONTENT_MODERATOR_RULEENGINE_H
#define CONTENT_MODERATOR_RULEENGINE_H

#pragma once
#include <unordered_set>
#include <string>
#include <vector>

namespace content_moderator {

    struct Finding {
        std::string message;
        std::string ruleName;
    };

    class RuleEngine {
        public:

    };
} // content_moderator

#endif //CONTENT_MODERATOR_RULEENGINE_H