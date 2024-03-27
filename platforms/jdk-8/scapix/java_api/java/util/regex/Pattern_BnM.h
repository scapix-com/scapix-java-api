// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_BnM; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_BnM>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$BnM";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_BnM : public jni::object_base<"java/util/regex/Pattern$BnM",
	java::util::regex::Pattern_Node>
{
public:


protected:

	Pattern_BnM(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNM
