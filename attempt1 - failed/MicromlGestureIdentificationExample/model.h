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
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[17] <= -1.2949999570846558) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[64] <= -4.705000162124634) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[4] <= -4.859999895095825) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[19] <= 0.009999997913837433) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[49] <= -5.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[11] <= -2.434999942779541) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[79] <= -0.255000002682209) {
                                    if (x[68] <= -0.935000017285347) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= -2.4849997758865356) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[73] <= -2.759999990463257) {
                            if (x[55] <= -4.474999904632568) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[75] <= -5.069999814033508) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[23] <= -0.3649999871850014) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[82] <= -0.32499999552965164) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[41] <= 2.9200000166893005) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[55] <= -4.829999923706055) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= -1.3849999904632568) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[4] <= 1.4449999928474426) {
                                    if (x[55] <= 0.2199999950826168) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[52] <= -4.920000076293945) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[2] <= -1.3849999904632568) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[37] <= 0.1549999937415123) {
                                    if (x[88] <= 0.5649999836459756) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[57] <= -0.5450000166893005) {
                            if (x[49] <= -5.309999942779541) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[17] <= -2.550000011920929) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[28] <= -3.225000023841858) {
                                if (x[23] <= -7.060000171884894) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5749999526888132) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[58] <= -4.3999998569488525) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[63] <= -1.024999976158142) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[5] <= -1.8450000584125519) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[10] <= -3.7100000381469727) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[19] <= -0.2200000062584877) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[11] <= -0.8199999928474426) {
                            if (x[27] <= 4.050000101327896) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[76] <= -2.759999990463257) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[24] <= -2.4299999475479126) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[76] <= 0.8199999928474426) {
                                        if (x[56] <= 1.804999977350235) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[82] <= -4.815000057220459) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[51] <= -1.225000023841858) {
                                if (x[31] <= -5.254999995231628) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 1.4949999824166298) {
                                    if (x[4] <= -5.134999990463257) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[69] <= 1.4700000584125519) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[58] <= -4.3999998569488525) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[23] <= -0.4599999934434891) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[7] <= 1.8450000286102295) {
                                    if (x[34] <= 0.33500000834465027) {
                                        if (x[7] <= -5.049999952316284) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= -1.5600000023841858) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[70] <= -4.6499998569488525) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[70] <= 0.75) {
                                    if (x[8] <= 5.790000081062317) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[25] <= 0.434999942779541) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[33] <= -1.0000000298023224) {
                            if (x[15] <= -4.879999876022339) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 2.184999942779541) {
                                if (x[40] <= -8.434999942779541) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[13] <= 5.7799999713897705) {
                                        votes[2] += 1;
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

                        // tree #13
                        if (x[39] <= -0.8299999833106995) {
                            if (x[14] <= 1.199999988079071) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[42] <= -4.509999871253967) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[43] <= -2.700000114738941) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[14] <= -1.2949999570846558) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[2] <= 5.585000157356262) {
                                    if (x[10] <= -1.8700000047683716) {
                                        if (x[36] <= 0.3449999876320362) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[67] <= -4.639999866485596) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[47] <= 3.1100000143051147) {
                                if (x[11] <= -2.350000023841858) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[70] <= 1.050000011920929) {
                                        if (x[50] <= -1.3500000089406967) {
                                            votes[2] += 1;
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
                                votes[2] += 1;
                            }
                        }

                        // tree #15
                        if (x[1] <= 3.9199999570846558) {
                            if (x[60] <= -0.5450000166893005) {
                                if (x[4] <= -7.9150002002716064) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[69] <= 1.7600000202655792) {
                                    if (x[16] <= -6.335000038146973) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= -5.134999990463257) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #16
                        if (x[76] <= -4.775000095367432) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[11] <= -2.350000023841858) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[10] <= 1.0049999952316284) {
                                    if (x[14] <= 1.1549999713897705) {
                                        if (x[69] <= -0.45000000298023224) {
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

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[76] <= -4.325000047683716) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[33] <= -2.709999978542328) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[4] <= -5.134999990463257) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[23] <= -0.4599999934434891) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 0.9100000187754631) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[42] <= -0.7849999964237213) {
                            if (x[63] <= -2.6549999713897705) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[24] <= -4.884999990463257) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -1.6050000488758087) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[45] <= 0.6949999928474426) {
                                    if (x[25] <= -0.7900000214576721) {
                                        if (x[51] <= -0.17500000074505806) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[76] <= -4.75) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[28] <= -4.68500018119812) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[51] <= -1.2850000262260437) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[23] <= -0.38499999791383743) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[25] <= 0.14000000059604645) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[49] <= -5.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[73] <= -0.2749999910593033) {
                                if (x[65] <= -0.945000022649765) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[29] <= -0.2849999964237213) {
                                        if (x[20] <= -0.8600000236183405) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[56] <= 2.434999942779541) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
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
                            return "left";
                            case 1:
                            return "punch";
                            case 2:
                            return "up";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }