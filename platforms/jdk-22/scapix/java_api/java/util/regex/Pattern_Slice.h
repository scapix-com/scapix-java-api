// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_SliceNode.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_Slice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_Slice>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$Slice";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_SliceNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_Slice : public jni::object_base<"java/util/regex/Pattern$Slice",
	java::util::regex::Pattern_SliceNode>
{
public:


protected:

	Pattern_Slice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_SLICE
