//
// Created by Matthew Damgen on 3/25/26.
//

#ifndef CONTENT_MODERATOR_RULEENGINE_H
#define CONTENT_MODERATOR_RULEENGINE_H

#pragma once
#include "Rule.h"
#include <memory>
#include <vector>

namespace content_moderator {

    class RuleEngine {
    private:
        std::vector<std::unique_ptr<Rule>> rules;

    public:
        void addRule(std::unique_ptr<Rule> rule);

        std::vector<Finding> run(
            const std::unordered_set<std::string>& tokens);
    };

}

#endif //CONTENT_MODERATOR_RULEENGINE_H