// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_BnM.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_BnMS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_BnMS>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$BnMS";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_BnM>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_BnMS : public jni::object_base<"java/util/regex/Pattern$BnMS",
	java::util::regex::Pattern_BnM>
{
public:


protected:

	Pattern_BnMS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BNMS
