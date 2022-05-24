#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[0] <= 0.2500000037252903) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #2
                        if (x[0] <= 0.30000000447034836) {
                            if (x[0] <= 0.05000000074505806) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 0.6000000089406967) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 0.8499999940395355) {
                                if (x[1] <= 0.050000011920928955) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #3
                        if (x[2] <= -0.6000000089406967) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 0.15000000223517418) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #4
                        if (x[1] <= -0.3500000089406967) {
                            if (x[0] <= 0.15000000223517418) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= -0.10000000149011612) {
                                if (x[1] <= -0.05000000074505806) {
                                    if (x[0] <= -0.44999998807907104) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 0.30000000447034836) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[2] <= -0.8499999940395355) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 0.3500000089406967) {
                                if (x[0] <= 0.2500000037252903) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 0.4000000059604645) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= -1.0500000715255737) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[2] <= -0.9000000059604645) {
                            if (x[0] <= 1.8499999940395355) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 0.30000000447034836) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #7
                        if (x[1] <= 0.10000000149011612) {
                            if (x[2] <= -0.9000000059604645) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 1.1500000357627869) {
                                if (x[0] <= 2.5500000417232513) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.2499999776482582) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #8
                        if (x[2] <= -1.25) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[0] <= 0.8499999940395355) {
                                if (x[2] <= -0.15000000223517418) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 0.2500000074505806) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= -0.04999999701976776) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #9
                        if (x[1] <= -0.3500000089406967) {
                            if (x[1] <= -0.75) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= -1.350000023841858) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 0.05000000074505806) {
                                if (x[2] <= -0.800000011920929) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 2.5500000417232513) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[2] <= -0.7000000178813934) {
                            if (x[1] <= -1.199999988079071) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 0.3500000089406967) {
                                if (x[1] <= 0.10000000149011612) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 1.350000023841858) {
                                    if (x[0] <= -1.2000000476837158) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.2499999776482582) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= -0.7000000178813934) {
                            if (x[1] <= -1.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 1.300000011920929) {
                                if (x[1] <= 0.10000000149011612) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.2499999776482582) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[0] <= 0.4000000134110451) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 0.3500000089406967) {
                                if (x[1] <= 0.4000000059604645) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #13
                        if (x[2] <= -0.8499999940395355) {
                            if (x[0] <= 1.949999999254942) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 1.350000023841858) {
                                if (x[0] <= -0.04999999701976776) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.2499999776482582) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[1] <= -0.3500000089406967) {
                            if (x[0] <= -1.3500000461935997) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 0.05000000074505806) {
                                if (x[2] <= -0.9000000059604645) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.0000000298023224) {
                                    if (x[0] <= 2.250000048428774) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 1.25) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[2] <= -0.8499999940395355) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[1] <= 0.10000000149011612) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.4999999701976776) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #16
                        if (x[2] <= -0.7000000178813934) {
                            if (x[1] <= -1.0499999821186066) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= -0.05000000074505806) {
                                    if (x[2] <= -1.0999999940395355) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 0.15000000223517418) {
                                if (x[2] <= 0.05000000074505806) {
                                    if (x[0] <= -0.050000011920928955) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 0.15000000596046448) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[0] <= 0.3999999947845936) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= 0.3500000089406967) {
                                if (x[2] <= 0.2500000074505806) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= -0.09999999403953552) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #18
                        if (x[1] <= -0.3500000089406967) {
                            if (x[1] <= -0.550000011920929) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= -0.700000025331974) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 0.10000000149011612) {
                                if (x[1] <= -0.2500000074505806) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= -0.15000000223517418) {
                                        if (x[0] <= -0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -0.44999997317790985) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #19
                        if (x[2] <= -0.7000000178813934) {
                            if (x[2] <= -1.25) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= -1.050000011920929) {
                                    if (x[0] <= 1.949999999254942) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 0.10000000149011612) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 0.2500000074505806) {
                                    if (x[0] <= 1.5000000596046448) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 0.9000000059604645) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.2499999776482582) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[2] <= -0.8499999940395355) {
                            if (x[1] <= -1.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 0.05000000074505806) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 0.800000011920929) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 1.2499999776482582) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "left_swipe";
                            case 1:
                            return "right_swipe";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }