// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/regex/MatchResult.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Matcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Matcher>
{
	static constexpr fixed_string class_name = "java/util/regex/Matcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::regex::MatchResult>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::regex::Matcher : public jni::object_base<"java/util/regex/Matcher",
	java::lang::Object,
	java::util::regex::MatchResult>
{
public:

	jni::ref<java::util::regex::Pattern> pattern() { return call_method<"pattern", jni::ref<java::util::regex::Pattern>>(); }
	jni::ref<java::util::regex::MatchResult> toMatchResult() { return call_method<"toMatchResult", jni::ref<java::util::regex::MatchResult>>(); }
	jni::ref<java::util::regex::Matcher> usePattern(jni::ref<java::util::regex::Pattern> newPattern) { return call_method<"usePattern", jni::ref<java::util::regex::Matcher>>(newPattern); }
	jint end() { return call_method<"end", jint>(); }
	jint end(jint group) { return call_method<"end", jint>(group); }
	jint end(jni::ref<java::lang::String> name) { return call_method<"end", jint>(name); }
	jni::ref<java::lang::String> group() { return call_method<"group", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> group(jint group) { return call_method<"group", jni::ref<java::lang::String>>(group); }
	jni::ref<java::lang::String> group(jni::ref<java::lang::String> name) { return call_method<"group", jni::ref<java::lang::String>>(name); }
	jint groupCount() { return call_method<"groupCount", jint>(); }
	jboolean matches() { return call_method<"matches", jboolean>(); }
	jboolean find() { return call_method<"find", jboolean>(); }
	jboolean find(jint start) { return call_method<"find", jboolean>(start); }
	jboolean lookingAt() { return call_method<"lookingAt", jboolean>(); }
	static jni::ref<java::lang::String> quoteReplacement(jni::ref<java::lang::String> s) { return call_static_method<"quoteReplacement", jni::ref<java::lang::String>>(s); }
	jni::ref<java::util::regex::Matcher> appendReplacement(jni::ref<java::lang::StringBuffer> sb, jni::ref<java::lang::String> replacement) { return call_method<"appendReplacement", jni::ref<java::util::regex::Matcher>>(sb, replacement); }
	jni::ref<java::lang::StringBuffer> appendTail(jni::ref<java::lang::StringBuffer> sb) { return call_method<"appendTail", jni::ref<java::lang::StringBuffer>>(sb); }
	jni::ref<java::lang::String> replaceAll(jni::ref<java::lang::String> replacement) { return call_method<"replaceAll", jni::ref<java::lang::String>>(replacement); }
	jni::ref<java::lang::String> replaceFirst(jni::ref<java::lang::String> replacement) { return call_method<"replaceFirst", jni::ref<java::lang::String>>(replacement); }
	jni::ref<java::util::regex::Matcher> region(jint start, jint end) { return call_method<"region", jni::ref<java::util::regex::Matcher>>(start, end); }
	jint regionStart() { return call_method<"regionStart", jint>(); }
	jint regionEnd() { return call_method<"regionEnd", jint>(); }
	jboolean hasTransparentBounds() { return call_method<"hasTransparentBounds", jboolean>(); }
	jni::ref<java::util::regex::Matcher> useTransparentBounds(jboolean value) { return call_method<"useTransparentBounds", jni::ref<java::util::regex::Matcher>>(value); }
	jboolean hasAnchoringBounds() { return call_method<"hasAnchoringBounds", jboolean>(); }
	jni::ref<java::util::regex::Matcher> useAnchoringBounds(jboolean value) { return call_method<"useAnchoringBounds", jni::ref<java::util::regex::Matcher>>(value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean hitEnd() { return call_method<"hitEnd", jboolean>(); }
	jboolean requireEnd() { return call_method<"requireEnd", jboolean>(); }
	jni::ref<java::util::regex::Matcher> reset() { return call_method<"reset", jni::ref<java::util::regex::Matcher>>(); }
	jni::ref<java::util::regex::Matcher> reset(jni::ref<java::lang::CharSequence> input) { return call_method<"reset", jni::ref<java::util::regex::Matcher>>(input); }
	jint start() { return call_method<"start", jint>(); }
	jint start(jint group) { return call_method<"start", jint>(group); }
	jint start(jni::ref<java::lang::String> name) { return call_method<"start", jint>(name); }

protected:

	Matcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_MATCHER
