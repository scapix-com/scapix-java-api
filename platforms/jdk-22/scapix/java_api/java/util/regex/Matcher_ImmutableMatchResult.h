// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/regex/MatchResult.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Matcher_ImmutableMatchResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Matcher_ImmutableMatchResult>
{
	static constexpr fixed_string class_name = "java/util/regex/Matcher$ImmutableMatchResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::regex::MatchResult>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Matcher_ImmutableMatchResult : public jni::object_base<"java/util/regex/Matcher$ImmutableMatchResult",
	java::lang::Object,
	java::util::regex::MatchResult>
{
public:

	jint start() { return call_method<"start", jint>(); }
	jint start(jint group) { return call_method<"start", jint>(group); }
	jint end() { return call_method<"end", jint>(); }
	jint end(jint group) { return call_method<"end", jint>(group); }
	jint groupCount() { return call_method<"groupCount", jint>(); }
	jni::ref<java::lang::String> group() { return call_method<"group", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> group(jint group) { return call_method<"group", jni::ref<java::lang::String>>(group); }
	jni::ref<java::util::Map> namedGroups() { return call_method<"namedGroups", jni::ref<java::util::Map>>(); }
	jboolean hasMatch() { return call_method<"hasMatch", jboolean>(); }

protected:

	Matcher_ImmutableMatchResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_IMMUTABLEMATCHRESULT