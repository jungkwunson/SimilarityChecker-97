#include "pch.h"
#include "../Day9_SimilarityChecker/SimilarityChecker.cpp"

TEST(TestSimilarityChecker, checker1) {
	Checker checker;

	EXPECT_EQ(60, checker.lengthCharacter("ASD", "DSA"));
	EXPECT_EQ(0, checker.lengthCharacter("A", "BB"));
	EXPECT_EQ(20, checker.lengthCharacter("AAABB", "BAA"));
	EXPECT_EQ(30, checker.lengthCharacter("AA", "AAA"));
	EXPECT_EQ(40, checker.lengthCharacter("AABB", "BAA"));
}

TEST(TestSimilarityChecker, checker2) {
	Checker checker;

	EXPECT_EQ(40, checker.sameCharacter("ASD", "DSA"));
	EXPECT_EQ(0, checker.sameCharacter("A", "BB"));
	EXPECT_EQ(40, checker.sameCharacter("AAABB", "BA"));
	EXPECT_EQ(20, checker.sameCharacter("AA", "AAE"));
	EXPECT_EQ(40, checker.sameCharacter("AABB", "BAA"));

	EXPECT_EQ(0, checker.sameCharacter("", "BAA"));
	EXPECT_EQ(0, checker.sameCharacter("A", ""));

	EXPECT_EQ(0, checker.sameCharacter("a", "AA"));
	EXPECT_EQ(0, checker.sameCharacter("a", "ab"));

	EXPECT_EQ(40, checker.sameCharacter("AAAAAA", "AAAAAA"));
}