// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArrayPrefixHelpers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArrayPrefixHelpers>
{
	static constexpr fixed_string class_name = "java/util/ArrayPrefixHelpers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArrayPrefixHelpers : public jni::object_base<"java/util/ArrayPrefixHelpers",
	java::lang::Object>
{
public:


protected:

	ArrayPrefixHelpers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYPREFIXHELPERS
