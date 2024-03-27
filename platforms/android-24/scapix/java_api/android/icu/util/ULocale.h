// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::util { class ULocale; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::util::ULocale>
{
	static constexpr fixed_string class_name = "android/icu/util/ULocale";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE)
#define SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/util/ULocale_Category.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/icu/util/ULocale_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::util::ULocale : public jni::object_base<"android/icu/util/ULocale",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	using Builder = ULocale_Builder;
	using Category = ULocale_Category;

	static jni::ref<android::icu::util::ULocale> CANADA() { return get_static_field<"CANADA", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> CANADA_FRENCH() { return get_static_field<"CANADA_FRENCH", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> CHINA() { return get_static_field<"CHINA", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> CHINESE() { return get_static_field<"CHINESE", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> ENGLISH() { return get_static_field<"ENGLISH", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> FRANCE() { return get_static_field<"FRANCE", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> FRENCH() { return get_static_field<"FRENCH", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> GERMAN() { return get_static_field<"GERMAN", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> GERMANY() { return get_static_field<"GERMANY", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> ITALIAN() { return get_static_field<"ITALIAN", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> ITALY() { return get_static_field<"ITALY", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> JAPAN() { return get_static_field<"JAPAN", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> JAPANESE() { return get_static_field<"JAPANESE", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> KOREA() { return get_static_field<"KOREA", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> KOREAN() { return get_static_field<"KOREAN", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> PRC() { return get_static_field<"PRC", jni::ref<android::icu::util::ULocale>>(); }
	static jchar PRIVATE_USE_EXTENSION() { return get_static_field<"PRIVATE_USE_EXTENSION", jchar>(); }
	static jni::ref<android::icu::util::ULocale> ROOT() { return get_static_field<"ROOT", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> SIMPLIFIED_CHINESE() { return get_static_field<"SIMPLIFIED_CHINESE", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> TAIWAN() { return get_static_field<"TAIWAN", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> TRADITIONAL_CHINESE() { return get_static_field<"TRADITIONAL_CHINESE", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> UK() { return get_static_field<"UK", jni::ref<android::icu::util::ULocale>>(); }
	static jchar UNICODE_LOCALE_EXTENSION() { return get_static_field<"UNICODE_LOCALE_EXTENSION", jchar>(); }
	static jni::ref<android::icu::util::ULocale> US() { return get_static_field<"US", jni::ref<android::icu::util::ULocale>>(); }

	static jni::ref<android::icu::util::ULocale> new_object(jni::ref<java::lang::String> localeID) { return base_::new_object(localeID); }
	static jni::ref<android::icu::util::ULocale> new_object(jni::ref<java::lang::String> a, jni::ref<java::lang::String> b) { return base_::new_object(a, b); }
	static jni::ref<android::icu::util::ULocale> new_object(jni::ref<java::lang::String> a, jni::ref<java::lang::String> b, jni::ref<java::lang::String> c) { return base_::new_object(a, b, c); }
	static jni::ref<android::icu::util::ULocale> forLocale(jni::ref<java::util::Locale> loc) { return call_static_method<"forLocale", jni::ref<android::icu::util::ULocale>>(loc); }
	static jni::ref<android::icu::util::ULocale> createCanonical(jni::ref<java::lang::String> nonCanonicalID) { return call_static_method<"createCanonical", jni::ref<android::icu::util::ULocale>>(nonCanonicalID); }
	jni::ref<java::util::Locale> toLocale() { return call_method<"toLocale", jni::ref<java::util::Locale>>(); }
	static jni::ref<android::icu::util::ULocale> getDefault() { return call_static_method<"getDefault", jni::ref<android::icu::util::ULocale>>(); }
	static jni::ref<android::icu::util::ULocale> getDefault(jni::ref<android::icu::util::ULocale_Category> category) { return call_static_method<"getDefault", jni::ref<android::icu::util::ULocale>>(category); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint compareTo(jni::ref<android::icu::util::ULocale> other) { return call_method<"compareTo", jint>(other); }
	static jni::ref<jni::array<android::icu::util::ULocale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<android::icu::util::ULocale>>>(); }
	static jni::ref<jni::array<java::lang::String>> getISOCountries() { return call_static_method<"getISOCountries", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<jni::array<java::lang::String>> getISOLanguages() { return call_static_method<"getISOLanguages", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getLanguage() { return call_method<"getLanguage", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getLanguage(jni::ref<java::lang::String> localeID) { return call_static_method<"getLanguage", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> getScript() { return call_method<"getScript", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getScript(jni::ref<java::lang::String> localeID) { return call_static_method<"getScript", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> getCountry() { return call_method<"getCountry", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getCountry(jni::ref<java::lang::String> localeID) { return call_static_method<"getCountry", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> getVariant() { return call_method<"getVariant", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getVariant(jni::ref<java::lang::String> localeID) { return call_static_method<"getVariant", jni::ref<java::lang::String>>(localeID); }
	static jni::ref<java::lang::String> getFallback(jni::ref<java::lang::String> localeID) { return call_static_method<"getFallback", jni::ref<java::lang::String>>(localeID); }
	jni::ref<android::icu::util::ULocale> getFallback() { return call_method<"getFallback", jni::ref<android::icu::util::ULocale>>(); }
	jni::ref<java::lang::String> getBaseName() { return call_method<"getBaseName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getBaseName(jni::ref<java::lang::String> localeID) { return call_static_method<"getBaseName", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getName(jni::ref<java::lang::String> localeID) { return call_static_method<"getName", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Iterator> getKeywords() { return call_method<"getKeywords", jni::ref<java::util::Iterator>>(); }
	static jni::ref<java::util::Iterator> getKeywords(jni::ref<java::lang::String> localeID) { return call_static_method<"getKeywords", jni::ref<java::util::Iterator>>(localeID); }
	jni::ref<java::lang::String> getKeywordValue(jni::ref<java::lang::String> keywordName) { return call_method<"getKeywordValue", jni::ref<java::lang::String>>(keywordName); }
	static jni::ref<java::lang::String> getKeywordValue(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> keywordName) { return call_static_method<"getKeywordValue", jni::ref<java::lang::String>>(localeID, keywordName); }
	static jni::ref<java::lang::String> canonicalize(jni::ref<java::lang::String> localeID) { return call_static_method<"canonicalize", jni::ref<java::lang::String>>(localeID); }
	jni::ref<android::icu::util::ULocale> setKeywordValue(jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> value) { return call_method<"setKeywordValue", jni::ref<android::icu::util::ULocale>>(keyword, value); }
	static jni::ref<java::lang::String> setKeywordValue(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> value) { return call_static_method<"setKeywordValue", jni::ref<java::lang::String>>(localeID, keyword, value); }
	jni::ref<java::lang::String> getISO3Language() { return call_method<"getISO3Language", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getISO3Language(jni::ref<java::lang::String> localeID) { return call_static_method<"getISO3Language", jni::ref<java::lang::String>>(localeID); }
	jni::ref<java::lang::String> getISO3Country() { return call_method<"getISO3Country", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> getISO3Country(jni::ref<java::lang::String> localeID) { return call_static_method<"getISO3Country", jni::ref<java::lang::String>>(localeID); }
	jboolean isRightToLeft() { return call_method<"isRightToLeft", jboolean>(); }
	jni::ref<java::lang::String> getDisplayLanguage() { return call_method<"getDisplayLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayLanguage(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayLanguage", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayLanguage(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayLanguage", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayLanguage(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayLanguage", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getDisplayLanguageWithDialect() { return call_method<"getDisplayLanguageWithDialect", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayLanguageWithDialect(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayLanguageWithDialect", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayLanguageWithDialect(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayLanguageWithDialect", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayLanguageWithDialect(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayLanguageWithDialect", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getDisplayScript() { return call_method<"getDisplayScript", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayScript(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayScript", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayScript(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayScript", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayScript(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayScript", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getDisplayCountry() { return call_method<"getDisplayCountry", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayCountry(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayCountry", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayCountry(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayCountry", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayCountry(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayCountry", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getDisplayVariant() { return call_method<"getDisplayVariant", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayVariant(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayVariant", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayVariant(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayVariant", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayVariant(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayVariant", jni::ref<java::lang::String>>(localeID, displayLocale); }
	static jni::ref<java::lang::String> getDisplayKeyword(jni::ref<java::lang::String> keyword) { return call_static_method<"getDisplayKeyword", jni::ref<java::lang::String>>(keyword); }
	static jni::ref<java::lang::String> getDisplayKeyword(jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayKeyword", jni::ref<java::lang::String>>(keyword, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayKeyword(jni::ref<java::lang::String> keyword, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayKeyword", jni::ref<java::lang::String>>(keyword, displayLocale); }
	jni::ref<java::lang::String> getDisplayKeywordValue(jni::ref<java::lang::String> keyword) { return call_method<"getDisplayKeywordValue", jni::ref<java::lang::String>>(keyword); }
	jni::ref<java::lang::String> getDisplayKeywordValue(jni::ref<java::lang::String> keyword, jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayKeywordValue", jni::ref<java::lang::String>>(keyword, displayLocale); }
	static jni::ref<java::lang::String> getDisplayKeywordValue(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayKeywordValue", jni::ref<java::lang::String>>(localeID, keyword, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayKeywordValue(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> keyword, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayKeywordValue", jni::ref<java::lang::String>>(localeID, keyword, displayLocale); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayName", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayName(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayName", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getDisplayNameWithDialect() { return call_method<"getDisplayNameWithDialect", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayNameWithDialect(jni::ref<android::icu::util::ULocale> displayLocale) { return call_method<"getDisplayNameWithDialect", jni::ref<java::lang::String>>(displayLocale); }
	static jni::ref<java::lang::String> getDisplayNameWithDialect(jni::ref<java::lang::String> localeID, jni::ref<java::lang::String> displayLocaleID) { return call_static_method<"getDisplayNameWithDialect", jni::ref<java::lang::String>>(localeID, displayLocaleID); }
	static jni::ref<java::lang::String> getDisplayNameWithDialect(jni::ref<java::lang::String> localeID, jni::ref<android::icu::util::ULocale> displayLocale) { return call_static_method<"getDisplayNameWithDialect", jni::ref<java::lang::String>>(localeID, displayLocale); }
	jni::ref<java::lang::String> getCharacterOrientation() { return call_method<"getCharacterOrientation", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLineOrientation() { return call_method<"getLineOrientation", jni::ref<java::lang::String>>(); }
	static jni::ref<android::icu::util::ULocale> acceptLanguage(jni::ref<java::lang::String> acceptLanguageList, jni::ref<jni::array<android::icu::util::ULocale>> availableLocales, jni::ref<jni::array<jboolean>> fallback) { return call_static_method<"acceptLanguage", jni::ref<android::icu::util::ULocale>>(acceptLanguageList, availableLocales, fallback); }
	static jni::ref<android::icu::util::ULocale> acceptLanguage(jni::ref<jni::array<android::icu::util::ULocale>> acceptLanguageList, jni::ref<jni::array<android::icu::util::ULocale>> availableLocales, jni::ref<jni::array<jboolean>> fallback) { return call_static_method<"acceptLanguage", jni::ref<android::icu::util::ULocale>>(acceptLanguageList, availableLocales, fallback); }
	static jni::ref<android::icu::util::ULocale> acceptLanguage(jni::ref<java::lang::String> acceptLanguageList, jni::ref<jni::array<jboolean>> fallback) { return call_static_method<"acceptLanguage", jni::ref<android::icu::util::ULocale>>(acceptLanguageList, fallback); }
	static jni::ref<android::icu::util::ULocale> acceptLanguage(jni::ref<jni::array<android::icu::util::ULocale>> acceptLanguageList, jni::ref<jni::array<jboolean>> fallback) { return call_static_method<"acceptLanguage", jni::ref<android::icu::util::ULocale>>(acceptLanguageList, fallback); }
	static jni::ref<android::icu::util::ULocale> addLikelySubtags(jni::ref<android::icu::util::ULocale> loc) { return call_static_method<"addLikelySubtags", jni::ref<android::icu::util::ULocale>>(loc); }
	static jni::ref<android::icu::util::ULocale> minimizeSubtags(jni::ref<android::icu::util::ULocale> loc) { return call_static_method<"minimizeSubtags", jni::ref<android::icu::util::ULocale>>(loc); }
	jni::ref<java::lang::String> getExtension(jchar key) { return call_method<"getExtension", jni::ref<java::lang::String>>(key); }
	jni::ref<java::util::Set> getExtensionKeys() { return call_method<"getExtensionKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getUnicodeLocaleAttributes() { return call_method<"getUnicodeLocaleAttributes", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> getUnicodeLocaleType(jni::ref<java::lang::String> key) { return call_method<"getUnicodeLocaleType", jni::ref<java::lang::String>>(key); }
	jni::ref<java::util::Set> getUnicodeLocaleKeys() { return call_method<"getUnicodeLocaleKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> toLanguageTag() { return call_method<"toLanguageTag", jni::ref<java::lang::String>>(); }
	static jni::ref<android::icu::util::ULocale> forLanguageTag(jni::ref<java::lang::String> languageTag) { return call_static_method<"forLanguageTag", jni::ref<android::icu::util::ULocale>>(languageTag); }
	static jni::ref<java::lang::String> toUnicodeLocaleKey(jni::ref<java::lang::String> keyword) { return call_static_method<"toUnicodeLocaleKey", jni::ref<java::lang::String>>(keyword); }
	static jni::ref<java::lang::String> toUnicodeLocaleType(jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> value) { return call_static_method<"toUnicodeLocaleType", jni::ref<java::lang::String>>(keyword, value); }
	static jni::ref<java::lang::String> toLegacyKey(jni::ref<java::lang::String> keyword) { return call_static_method<"toLegacyKey", jni::ref<java::lang::String>>(keyword); }
	static jni::ref<java::lang::String> toLegacyType(jni::ref<java::lang::String> keyword, jni::ref<java::lang::String> value) { return call_static_method<"toLegacyType", jni::ref<java::lang::String>>(keyword, value); }

protected:

	ULocale(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_UTIL_ULOCALE
