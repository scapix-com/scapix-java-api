// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_Pos; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_Pos>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$Pos";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_Pos : public jni::object_base<"java/util/regex/Pattern$Pos",
	java::util::regex::Pattern_Node>
{
public:


protected:

	Pattern_Pos(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_POS
