// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_CharProperty.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_UnixDot; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_UnixDot>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$UnixDot";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_CharProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_UnixDot : public jni::object_base<"java/util/regex/Pattern$UnixDot",
	java::util::regex::Pattern_CharProperty>
{
public:


protected:

	Pattern_UnixDot(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOT
