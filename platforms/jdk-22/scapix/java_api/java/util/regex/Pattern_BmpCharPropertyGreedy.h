// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/regex/Pattern_CharPropertyGreedy.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class Pattern_BmpCharPropertyGreedy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::Pattern_BmpCharPropertyGreedy>
{
	static constexpr fixed_string class_name = "java/util/regex/Pattern$BmpCharPropertyGreedy";
	using base_classes = std::tuple<scapix::java_api::java::util::regex::Pattern_CharPropertyGreedy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::Pattern_BmpCharPropertyGreedy : public jni::object_base<"java/util/regex/Pattern$BmpCharPropertyGreedy",
	java::util::regex::Pattern_CharPropertyGreedy>
{
public:


protected:

	Pattern_BmpCharPropertyGreedy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_PATTERN_BMPCHARPROPERTYGREEDY