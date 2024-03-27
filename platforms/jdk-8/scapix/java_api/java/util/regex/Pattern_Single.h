// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_BmpCharProperty.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_Single; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_Single>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$Single";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_BmpCharProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_Single : public jni::object_base<"java/util/regex/Pattern$Single",
	java::util::regex::Pattern_BmpCharProperty>
{
public:


protected:

	Pattern_Single(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SINGLE