// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES_FWD
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::invoke::util { class ValueConversions_Handles; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::invoke::util::ValueConversions_Handles>
{
	static constexpr fixed_string class_name = "sun/invoke/util/ValueConversions$Handles";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES)
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::invoke::util::ValueConversions_Handles : public jni::object_base<"sun/invoke/util/ValueConversions$Handles",
	java::lang::Object>
{
public:


protected:

	ValueConversions_Handles(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_HANDLES
