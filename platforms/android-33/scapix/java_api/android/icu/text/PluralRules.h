// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class PluralRules; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::PluralRules>
{
	static constexpr fixed_string class_name = "android/icu/text/PluralRules";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/icu/number/FormattedNumber.h>
#include <scapix/java_api/android/icu/number/FormattedNumberRange.h>
#include <scapix/java_api/android/icu/text/PluralRules_PluralType.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::PluralRules : public jni::object_base<"android/icu/text/PluralRules",
	java::lang::Object,
	java::io::Serializable>
{
public:

	using PluralType = PluralRules_PluralType;

	static jni::ref<android::icu::text::PluralRules> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<android::icu::text::PluralRules>>(); }
	static jni::ref<java::lang::String> KEYWORD_FEW() { return get_static_field<"KEYWORD_FEW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEYWORD_MANY() { return get_static_field<"KEYWORD_MANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEYWORD_ONE() { return get_static_field<"KEYWORD_ONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEYWORD_OTHER() { return get_static_field<"KEYWORD_OTHER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEYWORD_TWO() { return get_static_field<"KEYWORD_TWO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEYWORD_ZERO() { return get_static_field<"KEYWORD_ZERO", jni::ref<java::lang::String>>(); }
	static jdouble NO_UNIQUE_VALUE() { return get_static_field<"NO_UNIQUE_VALUE", jdouble>(); }

	static jni::ref<android::icu::text::PluralRules> parseDescription(jni::ref<java::lang::String> description) { return call_static_method<"parseDescription", jni::ref<android::icu::text::PluralRules>>(description); }
	static jni::ref<android::icu::text::PluralRules> createRules(jni::ref<java::lang::String> description) { return call_static_method<"createRules", jni::ref<android::icu::text::PluralRules>>(description); }
	static jni::ref<android::icu::text::PluralRules> forLocale(jni::ref<android::icu::util::ULocale> locale) { return call_static_method<"forLocale", jni::ref<android::icu::text::PluralRules>>(locale); }
	static jni::ref<android::icu::text::PluralRules> forLocale(jni::ref<java::util::Locale> locale) { return call_static_method<"forLocale", jni::ref<android::icu::text::PluralRules>>(locale); }
	static jni::ref<android::icu::text::PluralRules> forLocale(jni::ref<android::icu::util::ULocale> locale, jni::ref<android::icu::text::PluralRules_PluralType> type) { return call_static_method<"forLocale", jni::ref<android::icu::text::PluralRules>>(locale, type); }
	static jni::ref<android::icu::text::PluralRules> forLocale(jni::ref<java::util::Locale> locale, jni::ref<android::icu::text::PluralRules_PluralType> type) { return call_static_method<"forLocale", jni::ref<android::icu::text::PluralRules>>(locale, type); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> select(jdouble number) { return call_method<"select", jni::ref<java::lang::String>>(number); }
	jni::ref<java::lang::String> select(jni::ref<android::icu::number::FormattedNumber> number) { return call_method<"select", jni::ref<java::lang::String>>(number); }
	jni::ref<java::lang::String> select(jni::ref<android::icu::number::FormattedNumberRange> range) { return call_method<"select", jni::ref<java::lang::String>>(range); }
	jni::ref<java::util::Set> getKeywords() { return call_method<"getKeywords", jni::ref<java::util::Set>>(); }
	jdouble getUniqueKeywordValue(jni::ref<java::lang::String> keyword) { return call_method<"getUniqueKeywordValue", jdouble>(keyword); }
	jni::ref<java::util::Collection> getAllKeywordValues(jni::ref<java::lang::String> keyword) { return call_method<"getAllKeywordValues", jni::ref<java::util::Collection>>(keyword); }
	jni::ref<java::util::Collection> getSamples(jni::ref<java::lang::String> keyword) { return call_method<"getSamples", jni::ref<java::util::Collection>>(keyword); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> rhs) { return call_method<"equals", jboolean>(rhs); }
	jboolean equals(jni::ref<android::icu::text::PluralRules> rhs) { return call_method<"equals", jboolean>(rhs); }

protected:

	PluralRules(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_PLURALRULES
