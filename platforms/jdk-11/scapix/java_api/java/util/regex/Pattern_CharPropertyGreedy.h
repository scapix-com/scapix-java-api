// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_CharPropertyGreedy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_CharPropertyGreedy>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$CharPropertyGreedy";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_CharPropertyGreedy : public jni::object_base<"java/util/regex/Pattern$CharPropertyGreedy",
	java::util::regex::Pattern_Node>
{
public:


protected:

	Pattern_CharPropertyGreedy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_CHARPROPERTYGREEDY
