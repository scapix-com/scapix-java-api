// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT_FWD
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::invoke::util { class Wrapper_Format; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::invoke::util::Wrapper_Format>
{
	static constexpr fixed_string class_name = "sun/invoke/util/Wrapper$Format";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT)
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::invoke::util::Wrapper_Format : public jni::object_base<"sun/invoke/util/Wrapper$Format",
	java::lang::Object>
{
public:


protected:

	Wrapper_Format(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_WRAPPER_FORMAT
