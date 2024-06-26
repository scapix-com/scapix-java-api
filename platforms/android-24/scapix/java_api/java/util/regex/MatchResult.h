// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class MatchResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::MatchResult>
{
	static constexpr fixed_string class_name = "java/util/regex/MatchResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::regex::MatchResult : public jni::object_base<"java/util/regex/MatchResult",
	java::lang::Object>
{
public:

	jint start() { return call_method<"start", jint>(); }
	jint start(jint p1) { return call_method<"start", jint>(p1); }
	jint end() { return call_method<"end", jint>(); }
	jint end(jint p1) { return call_method<"end", jint>(p1); }
	jni::ref<java::lang::String> group() { return call_method<"group", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> group(jint p1) { return call_method<"group", jni::ref<java::lang::String>>(p1); }
	jint groupCount() { return call_method<"groupCount", jint>(); }

protected:

	MatchResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHRESULT
