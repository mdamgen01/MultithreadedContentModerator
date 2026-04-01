//
// Created by Matthew Damgen on 3/25/26.
//

#include "RuleEngine.h"

namespace content_moderator {

    void RuleEngine::addRule(std::unique_ptr<Rule> rule) {
        rules.push_back(std::move(rule));
    }

    std::vector<Finding> RuleEngine::run(
            const std::unordered_set<std::string>& tokens) {

        std::vector<Finding> allFindings;

        for (auto& rule : rules) {
            auto findings = rule->evaluate(tokens);
            allFindings.insert(
                allFindings.end(),
                findings.begin(),
                findings.end());
        }

        return allFindings;
    }

}