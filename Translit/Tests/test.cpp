
#include "pch.h"
#include "gtest/gtest.h"
using namespace std;


TEST(Test1, TestName1) {
	ASSERT_STREQ("!", translitfunction("!"));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
TEST(Test2, TestName2) {
	ASSERT_STREQ("qwerty[]asdfghjkl;'zxcvbnm,./", translitfunction("qwerty[]asdfghjkl;'zxcvbnm,./"));
}
TEST(Test3, TestName3) {
	ASSERT_STREQ("QWERTY{}ASDFGHJKL:ZXCVBNM<>?", translitfunction("QWERTY{}ASDFGHJKL:ZXCVBNM<>?"));
}
TEST(Test4, TestName4) {
	ASSERT_STREQ("abvgdeyozhziklmnoprstufhchshsch/y|ehyuyaABVGDEYOZHZIKLMNOPRSTUFHCHSHSCH/Y|EHYUYA", translitfunction("абвгдеёжзиклмнопрстуфхчшщьыъэюяАБВГДЕЁЖЗИКЛМНОПРСТУФХЧШЩЬЫЪЭЮЯ"));
}
TEST(Test5, TestName5) {
	ASSERT_STREQ("abvgd, eyozhz iyk;lmn op(r)st ufhchshsch /y|ehyuya!  ABVGD EYOZHZ. IK[L]MN OPR:ST UF{HCH}SHSCH /Y|EHYUYA?", translitfunction("абвгд, еёжз ийк;лмн оп(р)ст уфхчшщ ьыъэюя!  АБВГД ЕЁЖЗ. ИК[Л]МН ОПР:СТ УФ{ХЧ}ШЩ ЬЫЪЭЮЯ?"));
}
TEST(Test6, TestName6) {
	ASSERT_STREQ("1234567890-=!№;%:?*()_+@#$%^&`~", translitfunction("1234567890-=!№;%:?*()_+@#$%^&`~"));
}
TEST(Test7, TestName7) {
	ASSERT_STREQ("Privet, mir!", translitfunction("Привет, мир!"));
}
TEST(Test8, TestName8) {
	ASSERT_STREQ("Luchshe pozdno, chem nikogda.", translitfunction("Лучше поздно, чем никогда."));
}
TEST(Test9, TestName9) {
	ASSERT_STREQ("Microsoft Visual Studio - lineyka produktov kompanii Microsoft, vklyuchayuschih integrirovannuyu sredu razrabotki programmnogo obespecheniya i ryad drugih instrumental/nyh sredstv.", translitfunction("Microsoft Visual Studio - линейка продуктов компании Microsoft, включающих интегрированную среду разработки программного обеспечения и ряд других инструментальных средств."));
}
TEST(Test10, TestName10) {
	ASSERT_STREQ("Prosto 10-y test dlya kruglogo chisla", translitfunction("Просто 10-й тест для круглого числа"));
}
TEST(Test11, TestName11) {
	ASSERT_STREQ("", translitfunction(""));
}
TEST(Test12, TestName12) {
	ASSERT_STREQ(" ", translitfunction(" "));
}