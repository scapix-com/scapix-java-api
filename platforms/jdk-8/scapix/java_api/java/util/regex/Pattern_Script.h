// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_CharProperty.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_Script; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_Script>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$Script";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_CharProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_Script : public jni::object_base<"java/util/regex/Pattern$Script",
	java::util::regex::Pattern_CharProperty>
{
public:


protected:

	Pattern_Script(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SCRIPT