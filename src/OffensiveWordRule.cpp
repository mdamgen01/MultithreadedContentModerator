//
// Created by nikkola on 3/29/26.
//
#include "OffensiveWordRule.h"

namespace content_moderator {

    OffensiveWordRule::OffensiveWordRule() {
        badWords = {
            "stupid",
            "idiot",
            "hate",
            "trash",
            "butthead",
            "nancyboy"
        };
    }

    std::vector<Finding> OffensiveWordRule::evaluate(
            const std::unordered_set<std::string>& tokens) {

        std::vector<Finding> findings;

        for (const auto& word : badWords) {
            if (tokens.contains(word)) {
                findings.push_back({
                    "OffensiveWordRule",
                    "Found offensive word: " + word
                });
            }
        }

        return findings;
    }

}