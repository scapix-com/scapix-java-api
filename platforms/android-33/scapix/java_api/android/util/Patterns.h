// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class Patterns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::Patterns>
{
	static constexpr fixed_string class_name = "android/util/Patterns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS)
#define SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/regex/Matcher.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::Patterns : public jni::object_base<"android/util/Patterns",
	java::lang::Object>
{
public:

	static jni::ref<java::util::regex::Pattern> DOMAIN_NAME() { return get_static_field<"DOMAIN_NAME", jni::ref<java::util::regex::Pattern>>(); }
	static jni::ref<java::util::regex::Pattern> EMAIL_ADDRESS() { return get_static_field<"EMAIL_ADDRESS", jni::ref<java::util::regex::Pattern>>(); }
	static jni::ref<java::lang::String> GOOD_IRI_CHAR() { return get_static_field<"GOOD_IRI_CHAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::regex::Pattern> IP_ADDRESS() { return get_static_field<"IP_ADDRESS", jni::ref<java::util::regex::Pattern>>(); }
	static jni::ref<java::util::regex::Pattern> PHONE() { return get_static_field<"PHONE", jni::ref<java::util::regex::Pattern>>(); }
	static jni::ref<java::util::regex::Pattern> TOP_LEVEL_DOMAIN() { return get_static_field<"TOP_LEVEL_DOMAIN", jni::ref<java::util::regex::Pattern>>(); }
	static jni::ref<java::lang::String> TOP_LEVEL_DOMAIN_STR() { return get_static_field<"TOP_LEVEL_DOMAIN_STR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL() { return get_static_field<"TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::regex::Pattern> WEB_URL() { return get_static_field<"WEB_URL", jni::ref<java::util::regex::Pattern>>(); }

	static jni::ref<java::lang::String> concatGroups(jni::ref<java::util::regex::Matcher> matcher) { return call_static_method<"concatGroups", jni::ref<java::lang::String>>(matcher); }
	static jni::ref<java::lang::String> digitsAndPlusOnly(jni::ref<java::util::regex::Matcher> matcher) { return call_static_method<"digitsAndPlusOnly", jni::ref<java::lang::String>>(matcher); }

protected:

	Patterns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_PATTERNS
