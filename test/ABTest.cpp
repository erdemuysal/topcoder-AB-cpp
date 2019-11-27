#include <gtest/gtest.h>
#include <AB.h>

class ABTest : public ::testing::Test {
protected:
    AB ab = AB();

    static bool controlPairs(const string &result, int N, int K) {
        if (!AB::isPossible(N, K)) {
            N = 0;
            if (result.length() == N) { //otherwise next if catch the incorrect result
                return true;
            }
        }
        if (result.length() != N) {
            cerr << "N (" << N << ") doesn't match with result.length (" << result.length() << ")" << endl;
            return false;
        }
        int pairCount = 0;
        for (int i = 0; i < N; i++) {
            if (result[i] == 'A') {
                for (int j = i + 1; j < N; j++) {
                    if (result[j] == 'B') {
                        pairCount++;
                    }
                }
            }
        }
        if (pairCount == K) {
            return true;
        } else {
            cerr << "Result must contain K (" << K << ") number of pair(s) but found pairCount (" << pairCount
                 << ") isn't correct" << endl;
            return false;
        }
    }
};

TEST_F(ABTest, controlPairsTest) {
    ASSERT_TRUE(controlPairs("ABAAB", 5, 4));
    ASSERT_TRUE(controlPairs("BA", 2, 0));
    ASSERT_TRUE(controlPairs("AB", 2, 1));
    ASSERT_TRUE(controlPairs("", 5, 8));
    ASSERT_TRUE(controlPairs("BAABBABAAB", 10, 12));
}

TEST_F(ABTest, N5K4) {
    ASSERT_TRUE(controlPairs(ab.createString(5, 4), 5, 4));
}

TEST_F(ABTest, N2K0) {
    ASSERT_TRUE(controlPairs(ab.createString(2, 0), 2, 0));
}

TEST_F(ABTest, N2K1) {
    ASSERT_TRUE(controlPairs(ab.createString(2, 1), 2, 1));
}

TEST_F(ABTest, N5K8) {
    ASSERT_TRUE(controlPairs(ab.createString(5, 8), 5, 8));
}

TEST_F(ABTest, N10K12) {
    ASSERT_TRUE(controlPairs(ab.createString(10, 12), 10, 12));
}

TEST_F(ABTest, ABcreateStringN9K0) {
    ASSERT_STREQ("BBBBBBBBA", ab.createString(9, 0).c_str());
}

TEST_F(ABTest, ABcreateStringN9K1) {
    ASSERT_STREQ("BBBBBBBAB", ab.createString(9, 1).c_str());
}

TEST_F(ABTest, ABcreateStringN9K2) {
    ASSERT_STREQ("BBBBBBABB", ab.createString(9, 2).c_str());
}

TEST_F(ABTest, ABcreateStringN9K3) {
    ASSERT_STREQ("BBBBBABBB", ab.createString(9, 3).c_str());
}

TEST_F(ABTest, ABcreateStringN9K4) {
    ASSERT_STREQ("BBBBABBBB", ab.createString(9, 4).c_str());
}

TEST_F(ABTest, ABcreateStringN9K5) {
    ASSERT_STREQ("BBBABBBBB", ab.createString(9, 5).c_str());
}

TEST_F(ABTest, ABcreateStringN9K6) {
    ASSERT_STREQ("BBABBBBBB", ab.createString(9, 6).c_str());
}

TEST_F(ABTest, ABcreateStringN9K7) {
    ASSERT_STREQ("BABBBBBBB", ab.createString(9, 7).c_str());
}

TEST_F(ABTest, ABcreateStringN9K8) {
    ASSERT_STREQ("ABBBBBBBB", ab.createString(9, 8).c_str());
}

TEST_F(ABTest, ABcreateStringN9K9) {
    ASSERT_STREQ("ABBBBBABB", ab.createString(9, 9).c_str());
}

TEST_F(ABTest, ABcreateStringN9K10) {
    ASSERT_STREQ("ABBBBABBB", ab.createString(9, 10).c_str());
}

TEST_F(ABTest, ABcreateStringN9K11) {
    ASSERT_STREQ("ABBBABBBB", ab.createString(9, 11).c_str());
}

TEST_F(ABTest, ABcreateStringN9K12) {
    ASSERT_STREQ("ABBABBBBB", ab.createString(9, 12).c_str());
}

TEST_F(ABTest, ABcreateStringN9K13) {
    ASSERT_STREQ("ABABBBBBB", ab.createString(9, 13).c_str());
}

TEST_F(ABTest, ABcreateStringN9K14) {
    ASSERT_STREQ("AABBBBBBB", ab.createString(9, 14).c_str());
}

TEST_F(ABTest, ABcreateStringN9K15) {
    ASSERT_STREQ("AABBBABBB", ab.createString(9, 15).c_str());
}

TEST_F(ABTest, ABcreateStringN9K16) {
    ASSERT_STREQ("AABBABBBB", ab.createString(9, 16).c_str());
}

TEST_F(ABTest, ABcreateStringN9K17) {
    ASSERT_STREQ("AABABBBBB", ab.createString(9, 17).c_str());
}

TEST_F(ABTest, ABcreateStringN9K18) {
    ASSERT_STREQ("AAABBBBBB", ab.createString(9, 18).c_str());
}

TEST_F(ABTest, ABcreateStringN9K19) {
    ASSERT_STREQ("AAABABBBB", ab.createString(9, 19).c_str());
}

TEST_F(ABTest, ABcreateStringN9K20) {
    ASSERT_STREQ("AAAABBBBB", ab.createString(9, 20).c_str());
}

TEST_F(ABTest, ABcontrolStringN9K0) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 0), 9, 0));
}

TEST_F(ABTest, ABcontrolStringN9K1) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 1), 9, 1));
}

TEST_F(ABTest, ABcontrolStringN9K2) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 2), 9, 2));
}

TEST_F(ABTest, ABcontrolStringN9K3) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 3), 9, 3));
}

TEST_F(ABTest, ABcontrolStringN9K4) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 4), 9, 4));
}

TEST_F(ABTest, ABcontrolStringN9K5) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 5), 9, 5));
}

TEST_F(ABTest, ABcontrolStringN9K6) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 6), 9, 6));
}

TEST_F(ABTest, ABcontrolStringN9K7) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 7), 9, 7));
}

TEST_F(ABTest, ABcontrolStringN9K8) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 8), 9, 8));
}

TEST_F(ABTest, ABcontrolStringN9K9) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 9), 9, 9));
}

TEST_F(ABTest, ABcontrolStringN9K10) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 10), 9, 10));
}

TEST_F(ABTest, ABcontrolStringN9K11) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 11), 9, 11));
}

TEST_F(ABTest, ABcontrolStringN9K12) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 12), 9, 12));
}

TEST_F(ABTest, ABcontrolStringN9K13) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 13), 9, 13));
}

TEST_F(ABTest, ABcontrolStringN9K14) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 14), 9, 14));
}

TEST_F(ABTest, ABcontrolStringN9K15) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 15), 9, 15));
}

TEST_F(ABTest, ABcontrolStringN9K16) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 16), 9, 16));
}

TEST_F(ABTest, ABcontrolStringN9K17) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 17), 9, 17));
}

TEST_F(ABTest, ABcontrolStringN9K18) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 18), 9, 18));
}

TEST_F(ABTest, ABcontrolStringN9K19) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 19), 9, 19));
}

TEST_F(ABTest, ABcontrolStringN9K20) {
    ASSERT_TRUE(controlPairs(ab.createString(9, 20), 9, 20));
}

