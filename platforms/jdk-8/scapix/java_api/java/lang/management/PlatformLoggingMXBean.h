// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/PlatformManagedObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class PlatformLoggingMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::PlatformLoggingMXBean>
{
	static constexpr fixed_string class_name = "java/lang/management/PlatformLoggingMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::PlatformManagedObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::PlatformLoggingMXBean : public jni::object_base<"java/lang/management/PlatformLoggingMXBean",
	java::lang::Object,
	java::lang::management::PlatformManagedObject>
{
public:

	jni::ref<java::util::List> getLoggerNames() { return call_method<"getLoggerNames", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getLoggerLevel(jni::ref<java::lang::String> p1) { return call_method<"getLoggerLevel", jni::ref<java::lang::String>>(p1); }
	void setLoggerLevel(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setLoggerLevel", void>(p1, p2); }
	jni::ref<java::lang::String> getParentLoggerName(jni::ref<java::lang::String> p1) { return call_method<"getParentLoggerName", jni::ref<java::lang::String>>(p1); }

protected:

	PlatformLoggingMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_PLATFORMLOGGINGMXBEAN
