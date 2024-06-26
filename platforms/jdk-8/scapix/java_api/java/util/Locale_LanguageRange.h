// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Locale_LanguageRange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Locale_LanguageRange>
{
	static constexpr fixed_string class_name = "java/util/Locale$LanguageRange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Locale_LanguageRange : public jni::object_base<"java/util/Locale$LanguageRange",
	java::lang::Object>
{
public:

	static jdouble MAX_WEIGHT() { return get_static_field<"MAX_WEIGHT", jdouble>(); }
	static jdouble MIN_WEIGHT() { return get_static_field<"MIN_WEIGHT", jdouble>(); }

	static jni::ref<java::util::Locale_LanguageRange> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Locale_LanguageRange> new_object(jni::ref<java::lang::String> p1, jdouble p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getRange() { return call_method<"getRange", jni::ref<java::lang::String>>(); }
	jdouble getWeight() { return call_method<"getWeight", jdouble>(); }
	static jni::ref<java::util::List> parse(jni::ref<java::lang::String> p1) { return call_static_method<"parse", jni::ref<java::util::List>>(p1); }
	static jni::ref<java::util::List> parse(jni::ref<java::lang::String> p1, jni::ref<java::util::Map> p2) { return call_static_method<"parse", jni::ref<java::util::List>>(p1, p2); }
	static jni::ref<java::util::List> mapEquivalents(jni::ref<java::util::List> p1, jni::ref<java::util::Map> p2) { return call_static_method<"mapEquivalents", jni::ref<java::util::List>>(p1, p2); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Locale_LanguageRange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOCALE_LANGUAGERANGE
