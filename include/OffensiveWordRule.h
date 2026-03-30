//
// Created by nikkola on 3/29/26.
//

#ifndef CONTENT_MODERATOR_OFFENSIVEWORDRULE_H
#define CONTENT_MODERATOR_OFFENSIVEWORDRULE_H

#pragma once
#include "Rule.h"
#include <unordered_set>

namespace content_moderator {

    class OffensiveWordRule : public Rule {
    private:
        std::unordered_set<std::string> badWords;

    public:
        OffensiveWordRule();

        std::vector<Finding> evaluate(
            const std::unordered_set<std::string>& tokens) override;
    };

}

#endif //CONTENT_MODERATOR_OFFENSIVEWORDRULE_H
