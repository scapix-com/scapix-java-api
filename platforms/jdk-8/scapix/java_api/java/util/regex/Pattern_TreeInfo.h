// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_TreeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_TreeInfo>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$TreeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_TreeInfo : public jni::object_base<"java/util/regex/Pattern$TreeInfo",
	java::lang::Object>
{
public:


protected:

	Pattern_TreeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_TREEINFO
