// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_Behind.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_BehindS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_BehindS>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$BehindS";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_Behind>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_BehindS : public jni::object_base<"java/util/regex/Pattern$BehindS",
	java::util::regex::Pattern_Behind>
{
public:


protected:

	Pattern_BehindS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BEHINDS