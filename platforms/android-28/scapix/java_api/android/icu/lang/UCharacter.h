// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/icu/lang/UCharacterEnums_ECharacterCategory.h>
#include <scapix/java_api/android/icu/lang/UCharacterEnums_ECharacterDirection.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::lang { class UCharacter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::lang::UCharacter>
{
	static constexpr fixed_string class_name = "android/icu/lang/UCharacter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::icu::lang::UCharacterEnums_ECharacterCategory, scapix::java_api::android::icu::lang::UCharacterEnums_ECharacterDirection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER)
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/text/BreakIterator.h>
#include <scapix/java_api/android/icu/util/RangeValueIterator.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/android/icu/util/ValueIterator.h>
#include <scapix/java_api/android/icu/util/VersionInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/android/icu/lang/UCharacter_WordBreak.h>
#include <scapix/java_api/android/icu/lang/UCharacter_UnicodeBlock.h>
#include <scapix/java_api/android/icu/lang/UCharacter_SentenceBreak.h>
#include <scapix/java_api/android/icu/lang/UCharacter_NumericType.h>
#include <scapix/java_api/android/icu/lang/UCharacter_LineBreak.h>
#include <scapix/java_api/android/icu/lang/UCharacter_JoiningType.h>
#include <scapix/java_api/android/icu/lang/UCharacter_JoiningGroup.h>
#include <scapix/java_api/android/icu/lang/UCharacter_HangulSyllableType.h>
#include <scapix/java_api/android/icu/lang/UCharacter_GraphemeClusterBreak.h>
#include <scapix/java_api/android/icu/lang/UCharacter_EastAsianWidth.h>
#include <scapix/java_api/android/icu/lang/UCharacter_DecompositionType.h>
#include <scapix/java_api/android/icu/lang/UCharacter_BidiPairedBracketType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::lang::UCharacter : public jni::object_base<"android/icu/lang/UCharacter",
	java::lang::Object,
	android::icu::lang::UCharacterEnums_ECharacterCategory,
	android::icu::lang::UCharacterEnums_ECharacterDirection>
{
public:

	using WordBreak = UCharacter_WordBreak;
	using UnicodeBlock = UCharacter_UnicodeBlock;
	using SentenceBreak = UCharacter_SentenceBreak;
	using NumericType = UCharacter_NumericType;
	using LineBreak = UCharacter_LineBreak;
	using JoiningType = UCharacter_JoiningType;
	using JoiningGroup = UCharacter_JoiningGroup;
	using HangulSyllableType = UCharacter_HangulSyllableType;
	using GraphemeClusterBreak = UCharacter_GraphemeClusterBreak;
	using EastAsianWidth = UCharacter_EastAsianWidth;
	using DecompositionType = UCharacter_DecompositionType;
	using BidiPairedBracketType = UCharacter_BidiPairedBracketType;

	static jint FOLD_CASE_DEFAULT() { return get_static_field<"FOLD_CASE_DEFAULT", jint>(); }
	static jint FOLD_CASE_EXCLUDE_SPECIAL_I() { return get_static_field<"FOLD_CASE_EXCLUDE_SPECIAL_I", jint>(); }
	static jint MAX_CODE_POINT() { return get_static_field<"MAX_CODE_POINT", jint>(); }
	static jchar MAX_HIGH_SURROGATE() { return get_static_field<"MAX_HIGH_SURROGATE", jchar>(); }
	static jchar MAX_LOW_SURROGATE() { return get_static_field<"MAX_LOW_SURROGATE", jchar>(); }
	static jint MAX_RADIX() { return get_static_field<"MAX_RADIX", jint>(); }
	static jchar MAX_SURROGATE() { return get_static_field<"MAX_SURROGATE", jchar>(); }
	static jint MAX_VALUE() { return get_static_field<"MAX_VALUE", jint>(); }
	static jint MIN_CODE_POINT() { return get_static_field<"MIN_CODE_POINT", jint>(); }
	static jchar MIN_HIGH_SURROGATE() { return get_static_field<"MIN_HIGH_SURROGATE", jchar>(); }
	static jchar MIN_LOW_SURROGATE() { return get_static_field<"MIN_LOW_SURROGATE", jchar>(); }
	static jint MIN_RADIX() { return get_static_field<"MIN_RADIX", jint>(); }
	static jint MIN_SUPPLEMENTARY_CODE_POINT() { return get_static_field<"MIN_SUPPLEMENTARY_CODE_POINT", jint>(); }
	static jchar MIN_SURROGATE() { return get_static_field<"MIN_SURROGATE", jchar>(); }
	static jint MIN_VALUE() { return get_static_field<"MIN_VALUE", jint>(); }
	static jdouble NO_NUMERIC_VALUE() { return get_static_field<"NO_NUMERIC_VALUE", jdouble>(); }
	static jint REPLACEMENT_CHAR() { return get_static_field<"REPLACEMENT_CHAR", jint>(); }
	static jint SUPPLEMENTARY_MIN_VALUE() { return get_static_field<"SUPPLEMENTARY_MIN_VALUE", jint>(); }
	static jint TITLECASE_NO_BREAK_ADJUSTMENT() { return get_static_field<"TITLECASE_NO_BREAK_ADJUSTMENT", jint>(); }
	static jint TITLECASE_NO_LOWERCASE() { return get_static_field<"TITLECASE_NO_LOWERCASE", jint>(); }

	static jint digit(jint ch, jint radix) { return call_static_method<"digit", jint>(ch, radix); }
	static jint digit(jint ch) { return call_static_method<"digit", jint>(ch); }
	static jint getNumericValue(jint ch) { return call_static_method<"getNumericValue", jint>(ch); }
	static jdouble getUnicodeNumericValue(jint ch) { return call_static_method<"getUnicodeNumericValue", jdouble>(ch); }
	static jint getType(jint ch) { return call_static_method<"getType", jint>(ch); }
	static jboolean isDefined(jint ch) { return call_static_method<"isDefined", jboolean>(ch); }
	static jboolean isDigit(jint ch) { return call_static_method<"isDigit", jboolean>(ch); }
	static jboolean isISOControl(jint ch) { return call_static_method<"isISOControl", jboolean>(ch); }
	static jboolean isLetter(jint ch) { return call_static_method<"isLetter", jboolean>(ch); }
	static jboolean isLetterOrDigit(jint ch) { return call_static_method<"isLetterOrDigit", jboolean>(ch); }
	static jboolean isJavaIdentifierStart(jint cp) { return call_static_method<"isJavaIdentifierStart", jboolean>(cp); }
	static jboolean isJavaIdentifierPart(jint cp) { return call_static_method<"isJavaIdentifierPart", jboolean>(cp); }
	static jboolean isLowerCase(jint ch) { return call_static_method<"isLowerCase", jboolean>(ch); }
	static jboolean isWhitespace(jint ch) { return call_static_method<"isWhitespace", jboolean>(ch); }
	static jboolean isSpaceChar(jint ch) { return call_static_method<"isSpaceChar", jboolean>(ch); }
	static jboolean isTitleCase(jint ch) { return call_static_method<"isTitleCase", jboolean>(ch); }
	static jboolean isUnicodeIdentifierPart(jint ch) { return call_static_method<"isUnicodeIdentifierPart", jboolean>(ch); }
	static jboolean isUnicodeIdentifierStart(jint ch) { return call_static_method<"isUnicodeIdentifierStart", jboolean>(ch); }
	static jboolean isIdentifierIgnorable(jint ch) { return call_static_method<"isIdentifierIgnorable", jboolean>(ch); }
	static jboolean isUpperCase(jint ch) { return call_static_method<"isUpperCase", jboolean>(ch); }
	static jint toLowerCase(jint ch) { return call_static_method<"toLowerCase", jint>(ch); }
	static jni::ref<java::lang::String> toString(jint ch) { return call_static_method<"toString", jni::ref<java::lang::String>>(ch); }
	static jint toTitleCase(jint ch) { return call_static_method<"toTitleCase", jint>(ch); }
	static jint toUpperCase(jint ch) { return call_static_method<"toUpperCase", jint>(ch); }
	static jboolean isSupplementary(jint ch) { return call_static_method<"isSupplementary", jboolean>(ch); }
	static jboolean isBMP(jint ch) { return call_static_method<"isBMP", jboolean>(ch); }
	static jboolean isPrintable(jint ch) { return call_static_method<"isPrintable", jboolean>(ch); }
	static jboolean isBaseForm(jint ch) { return call_static_method<"isBaseForm", jboolean>(ch); }
	static jint getDirection(jint ch) { return call_static_method<"getDirection", jint>(ch); }
	static jboolean isMirrored(jint ch) { return call_static_method<"isMirrored", jboolean>(ch); }
	static jint getMirror(jint ch) { return call_static_method<"getMirror", jint>(ch); }
	static jint getBidiPairedBracket(jint c) { return call_static_method<"getBidiPairedBracket", jint>(c); }
	static jint getCombiningClass(jint ch) { return call_static_method<"getCombiningClass", jint>(ch); }
	static jboolean isLegal(jint ch) { return call_static_method<"isLegal", jboolean>(ch); }
	static jboolean isLegal(jni::ref<java::lang::String> str) { return call_static_method<"isLegal", jboolean>(str); }
	static jni::ref<android::icu::util::VersionInfo> getUnicodeVersion() { return call_static_method<"getUnicodeVersion", jni::ref<android::icu::util::VersionInfo>>(); }
	static jni::ref<java::lang::String> getName(jint ch) { return call_static_method<"getName", jni::ref<java::lang::String>>(ch); }
	static jni::ref<java::lang::String> getName(jni::ref<java::lang::String> s, jni::ref<java::lang::String> separator) { return call_static_method<"getName", jni::ref<java::lang::String>>(s, separator); }
	static jni::ref<java::lang::String> getExtendedName(jint ch) { return call_static_method<"getExtendedName", jni::ref<java::lang::String>>(ch); }
	static jni::ref<java::lang::String> getNameAlias(jint ch) { return call_static_method<"getNameAlias", jni::ref<java::lang::String>>(ch); }
	static jint getCharFromName(jni::ref<java::lang::String> name) { return call_static_method<"getCharFromName", jint>(name); }
	static jint getCharFromExtendedName(jni::ref<java::lang::String> name) { return call_static_method<"getCharFromExtendedName", jint>(name); }
	static jint getCharFromNameAlias(jni::ref<java::lang::String> name) { return call_static_method<"getCharFromNameAlias", jint>(name); }
	static jni::ref<java::lang::String> getPropertyName(jint property, jint nameChoice) { return call_static_method<"getPropertyName", jni::ref<java::lang::String>>(property, nameChoice); }
	static jint getPropertyEnum(jni::ref<java::lang::CharSequence> propertyAlias) { return call_static_method<"getPropertyEnum", jint>(propertyAlias); }
	static jni::ref<java::lang::String> getPropertyValueName(jint property, jint value, jint nameChoice) { return call_static_method<"getPropertyValueName", jni::ref<java::lang::String>>(property, value, nameChoice); }
	static jint getPropertyValueEnum(jint property, jni::ref<java::lang::CharSequence> valueAlias) { return call_static_method<"getPropertyValueEnum", jint>(property, valueAlias); }
	static jint getCodePoint(jchar lead, jchar trail) { return call_static_method<"getCodePoint", jint>(lead, trail); }
	static jint getCodePoint(jchar char16) { return call_static_method<"getCodePoint", jint>(char16); }
	static jni::ref<java::lang::String> toUpperCase(jni::ref<java::lang::String> str) { return call_static_method<"toUpperCase", jni::ref<java::lang::String>>(str); }
	static jni::ref<java::lang::String> toLowerCase(jni::ref<java::lang::String> str) { return call_static_method<"toLowerCase", jni::ref<java::lang::String>>(str); }
	static jni::ref<java::lang::String> toTitleCase(jni::ref<java::lang::String> str, jni::ref<android::icu::text::BreakIterator> breakiter) { return call_static_method<"toTitleCase", jni::ref<java::lang::String>>(str, breakiter); }
	static jni::ref<java::lang::String> toUpperCase(jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> str) { return call_static_method<"toUpperCase", jni::ref<java::lang::String>>(locale, str); }
	static jni::ref<java::lang::String> toUpperCase(jni::ref<android::icu::util::ULocale> locale, jni::ref<java::lang::String> str) { return call_static_method<"toUpperCase", jni::ref<java::lang::String>>(locale, str); }
	static jni::ref<java::lang::String> toLowerCase(jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> str) { return call_static_method<"toLowerCase", jni::ref<java::lang::String>>(locale, str); }
	static jni::ref<java::lang::String> toLowerCase(jni::ref<android::icu::util::ULocale> locale, jni::ref<java::lang::String> str) { return call_static_method<"toLowerCase", jni::ref<java::lang::String>>(locale, str); }
	static jni::ref<java::lang::String> toTitleCase(jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> str, jni::ref<android::icu::text::BreakIterator> breakiter) { return call_static_method<"toTitleCase", jni::ref<java::lang::String>>(locale, str, breakiter); }
	static jni::ref<java::lang::String> toTitleCase(jni::ref<android::icu::util::ULocale> locale, jni::ref<java::lang::String> str, jni::ref<android::icu::text::BreakIterator> titleIter) { return call_static_method<"toTitleCase", jni::ref<java::lang::String>>(locale, str, titleIter); }
	static jni::ref<java::lang::String> toTitleCase(jni::ref<android::icu::util::ULocale> locale, jni::ref<java::lang::String> str, jni::ref<android::icu::text::BreakIterator> titleIter, jint options) { return call_static_method<"toTitleCase", jni::ref<java::lang::String>>(locale, str, titleIter, options); }
	static jni::ref<java::lang::String> toTitleCase(jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> str, jni::ref<android::icu::text::BreakIterator> titleIter, jint options) { return call_static_method<"toTitleCase", jni::ref<java::lang::String>>(locale, str, titleIter, options); }
	static jint foldCase(jint ch, jboolean defaultmapping) { return call_static_method<"foldCase", jint>(ch, defaultmapping); }
	static jni::ref<java::lang::String> foldCase(jni::ref<java::lang::String> str, jboolean defaultmapping) { return call_static_method<"foldCase", jni::ref<java::lang::String>>(str, defaultmapping); }
	static jint foldCase(jint ch, jint options) { return call_static_method<"foldCase", jint>(ch, options); }
	static jni::ref<java::lang::String> foldCase(jni::ref<java::lang::String> str, jint options) { return call_static_method<"foldCase", jni::ref<java::lang::String>>(str, options); }
	static jint getHanNumericValue(jint ch) { return call_static_method<"getHanNumericValue", jint>(ch); }
	static jni::ref<android::icu::util::RangeValueIterator> getTypeIterator() { return call_static_method<"getTypeIterator", jni::ref<android::icu::util::RangeValueIterator>>(); }
	static jni::ref<android::icu::util::ValueIterator> getNameIterator() { return call_static_method<"getNameIterator", jni::ref<android::icu::util::ValueIterator>>(); }
	static jni::ref<android::icu::util::ValueIterator> getExtendedNameIterator() { return call_static_method<"getExtendedNameIterator", jni::ref<android::icu::util::ValueIterator>>(); }
	static jni::ref<android::icu::util::VersionInfo> getAge(jint ch) { return call_static_method<"getAge", jni::ref<android::icu::util::VersionInfo>>(ch); }
	static jboolean hasBinaryProperty(jint ch, jint property) { return call_static_method<"hasBinaryProperty", jboolean>(ch, property); }
	static jboolean isUAlphabetic(jint ch) { return call_static_method<"isUAlphabetic", jboolean>(ch); }
	static jboolean isULowercase(jint ch) { return call_static_method<"isULowercase", jboolean>(ch); }
	static jboolean isUUppercase(jint ch) { return call_static_method<"isUUppercase", jboolean>(ch); }
	static jboolean isUWhiteSpace(jint ch) { return call_static_method<"isUWhiteSpace", jboolean>(ch); }
	static jint getIntPropertyValue(jint ch, jint type) { return call_static_method<"getIntPropertyValue", jint>(ch, type); }
	static jint getIntPropertyMinValue(jint type) { return call_static_method<"getIntPropertyMinValue", jint>(type); }
	static jint getIntPropertyMaxValue(jint type) { return call_static_method<"getIntPropertyMaxValue", jint>(type); }
	static jchar forDigit(jint digit, jint radix) { return call_static_method<"forDigit", jchar>(digit, radix); }
	static jboolean isValidCodePoint(jint cp) { return call_static_method<"isValidCodePoint", jboolean>(cp); }
	static jboolean isSupplementaryCodePoint(jint cp) { return call_static_method<"isSupplementaryCodePoint", jboolean>(cp); }
	static jboolean isHighSurrogate(jchar ch) { return call_static_method<"isHighSurrogate", jboolean>(ch); }
	static jboolean isLowSurrogate(jchar ch) { return call_static_method<"isLowSurrogate", jboolean>(ch); }
	static jboolean isSurrogatePair(jchar high, jchar low) { return call_static_method<"isSurrogatePair", jboolean>(high, low); }
	static jint charCount(jint cp) { return call_static_method<"charCount", jint>(cp); }
	static jint toCodePoint(jchar high, jchar low) { return call_static_method<"toCodePoint", jint>(high, low); }
	static jint codePointAt(jni::ref<java::lang::CharSequence> seq, jint index) { return call_static_method<"codePointAt", jint>(seq, index); }
	static jint codePointAt(jni::ref<jni::array<jchar>> text, jint index) { return call_static_method<"codePointAt", jint>(text, index); }
	static jint codePointAt(jni::ref<jni::array<jchar>> text, jint index, jint limit) { return call_static_method<"codePointAt", jint>(text, index, limit); }
	static jint codePointBefore(jni::ref<java::lang::CharSequence> seq, jint index) { return call_static_method<"codePointBefore", jint>(seq, index); }
	static jint codePointBefore(jni::ref<jni::array<jchar>> text, jint index) { return call_static_method<"codePointBefore", jint>(text, index); }
	static jint codePointBefore(jni::ref<jni::array<jchar>> text, jint index, jint limit) { return call_static_method<"codePointBefore", jint>(text, index, limit); }
	static jint toChars(jint cp, jni::ref<jni::array<jchar>> dst, jint dstIndex) { return call_static_method<"toChars", jint>(cp, dst, dstIndex); }
	static jni::ref<jni::array<jchar>> toChars(jint cp) { return call_static_method<"toChars", jni::ref<jni::array<jchar>>>(cp); }
	static jbyte getDirectionality(jint cp) { return call_static_method<"getDirectionality", jbyte>(cp); }
	static jint codePointCount(jni::ref<java::lang::CharSequence> text, jint start, jint limit) { return call_static_method<"codePointCount", jint>(text, start, limit); }
	static jint codePointCount(jni::ref<jni::array<jchar>> text, jint start, jint limit) { return call_static_method<"codePointCount", jint>(text, start, limit); }
	static jint offsetByCodePoints(jni::ref<java::lang::CharSequence> text, jint index, jint codePointOffset) { return call_static_method<"offsetByCodePoints", jint>(text, index, codePointOffset); }
	static jint offsetByCodePoints(jni::ref<jni::array<jchar>> text, jint start, jint count, jint index, jint codePointOffset) { return call_static_method<"offsetByCodePoints", jint>(text, start, count, index, codePointOffset); }

protected:

	UCharacter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTER
