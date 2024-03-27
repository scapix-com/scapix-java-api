// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::regex { class ASCII; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::regex::ASCII>
{
	static constexpr fixed_string class_name = "java/util/regex/ASCII";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII)
#define SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::regex::ASCII : public jni::object_base<"java/util/regex/ASCII",
	java::lang::Object>
{
public:


protected:

	ASCII(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REGEX_ASCII
