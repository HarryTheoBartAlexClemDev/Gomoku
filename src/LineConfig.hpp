//
// Created by alexandre on 13/11/23.
//

struct LineConfig {
    int count;
    int openEnds;
    int blockedEnds;
    bool holes;

    bool operator==(const LineConfig& other) const;
};
