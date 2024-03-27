// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Locale; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Locale>
{
	static constexpr fixed_string class_name = "java/util/Locale";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOCALE)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/Locale_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Locale : public jni::object_base<"java/util/Locale",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	using Builder = Locale_Builder;

	static jni::ref<java::util::Locale> CANADA() { return get_static_field<"CANADA", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> CANADA_FRENCH() { return get_static_field<"CANADA_FRENCH", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> CHINA() { return get_static_field<"CHINA", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> CHINESE() { return get_static_field<"CHINESE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> ENGLISH() { return get_static_field<"ENGLISH", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> FRANCE() { return get_static_field<"FRANCE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> FRENCH() { return get_static_field<"FRENCH", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> GERMAN() { return get_static_field<"GERMAN", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> GERMANY() { return get_static_field<"GERMANY", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> ITALIAN() { return get_static_field<"ITALIAN", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> ITALY() { return get_static_field<"ITALY", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> JAPAN() { return get_static_field<"JAPAN", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> JAPANESE() { return get_static_field<"JAPANESE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> KOREA() { return get_static_field<"KOREA", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> KOREAN() { return get_static_field<"KOREAN", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> PRC() { return get_static_field<"PRC", jni::ref<java::util::Locale>>(); }
	static jchar PRIVATE_USE_EXTENSION() { return get_static_field<"PRIVATE_USE_EXTENSION", jchar>(); }
	static jni::ref<java::util::Locale> ROOT() { return get_static_field<"ROOT", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> SIMPLIFIED_CHINESE() { return get_static_field<"SIMPLIFIED_CHINESE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> TAIWAN() { return get_static_field<"TAIWAN", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> TRADITIONAL_CHINESE() { return get_static_field<"TRADITIONAL_CHINESE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::util::Locale> UK() { return get_static_field<"UK", jni::ref<java::util::Locale>>(); }
	static jchar UNICODE_LOCALE_EXTENSION() { return get_static_field<"UNICODE_LOCALE_EXTENSION", jchar>(); }
	static jni::ref<java::util::Locale> US() { return get_static_field<"US", jni::ref<java::util::Locale>>(); }

	static jni::ref<java::util::Locale> new_object(jni::ref<java::lang::String> language) { return base_::new_object(language); }
	static jni::ref<java::util::Locale> new_object(jni::ref<java::lang::String> language, jni::ref<java::lang::String> country) { return base_::new_object(language, country); }
	static jni::ref<java::util::Locale> new_object(jni::ref<java::lang::String> language, jni::ref<java::lang::String> country, jni::ref<java::lang::String> variant) { return base_::new_object(language, country, variant); }
	static jni::ref<java::util::Locale> forLanguageTag(jni::ref<java::lang::String> languageTag) { return call_static_method<"forLanguageTag", jni::ref<java::util::Locale>>(languageTag); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	jni::ref<java::lang::String> getCountry() { return call_method<"getCountry", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::Locale> getDefault() { return call_static_method<"getDefault", jni::ref<java::util::Locale>>(); }
	jni::ref<java::lang::String> getDisplayCountry() { return call_method<"getDisplayCountry", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayCountry(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayCountry", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayLanguage() { return call_method<"getDisplayLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayLanguage(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayLanguage", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getDisplayVariant() { return call_method<"getDisplayVariant", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayVariant(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayVariant", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> getISO3Country() { return call_method<"getISO3Country", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getISO3Language() { return call_method<"getISO3Language", jni::ref<java::lang::String>>(); }
	static jni::ref<jni::array<java::lang::String>> getISOCountries() { return call_static_method<"getISOCountries", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<jni::array<java::lang::String>> getISOLanguages() { return call_static_method<"getISOLanguages", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getLanguage() { return call_method<"getLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVariant() { return call_method<"getVariant", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getScript() { return call_method<"getScript", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayScript() { return call_method<"getDisplayScript", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayScript(jni::ref<java::util::Locale> locale) { return call_method<"getDisplayScript", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> toLanguageTag() { return call_method<"toLanguageTag", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> getExtensionKeys() { return call_method<"getExtensionKeys", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> getExtension(jchar extensionKey) { return call_method<"getExtension", jni::ref<java::lang::String>>(extensionKey); }
	jni::ref<java::lang::String> getUnicodeLocaleType(jni::ref<java::lang::String> keyWord) { return call_method<"getUnicodeLocaleType", jni::ref<java::lang::String>>(keyWord); }
	jni::ref<java::util::Set> getUnicodeLocaleAttributes() { return call_method<"getUnicodeLocaleAttributes", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getUnicodeLocaleKeys() { return call_method<"getUnicodeLocaleKeys", jni::ref<java::util::Set>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static void setDefault(jni::ref<java::util::Locale> locale) { return call_static_method<"setDefault", void>(locale); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Locale(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE
