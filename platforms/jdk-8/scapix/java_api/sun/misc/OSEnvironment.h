// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT_FWD
#define SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class OSEnvironment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::OSEnvironment>
{
	static constexpr fixed_string class_name = "sun/misc/OSEnvironment";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT)
#define SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::OSEnvironment : public jni::object_base<"sun/misc/OSEnvironment",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::OSEnvironment> new_object() { return base_::new_object(); }
	static void initialize() { return call_static_method<"initialize", void>(); }

protected:

	OSEnvironment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_OSENVIRONMENT
