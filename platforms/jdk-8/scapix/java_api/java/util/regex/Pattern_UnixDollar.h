// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_UnixDollar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_UnixDollar>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$UnixDollar";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_UnixDollar : public jni::object_base<"java/util/regex/Pattern$UnixDollar",
	java::util::regex::Pattern_Node>
{
public:


protected:

	Pattern_UnixDollar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_UNIXDOLLAR
