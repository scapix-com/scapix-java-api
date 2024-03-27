// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/ManagementFactoryHelper_LoggingMXBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class ManagementFactoryHelper_PlatformLoggingImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::ManagementFactoryHelper_PlatformLoggingImpl>
{
	static constexpr fixed_string class_name = "sun/management/ManagementFactoryHelper$PlatformLoggingImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::ManagementFactoryHelper_LoggingMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::ManagementFactoryHelper_PlatformLoggingImpl : public jni::object_base<"sun/management/ManagementFactoryHelper$PlatformLoggingImpl",
	java::lang::Object,
	sun::management::ManagementFactoryHelper_LoggingMXBean>
{
public:

	jni::ref<javax::management::ObjectName> getObjectName() { return call_method<"getObjectName", jni::ref<javax::management::ObjectName>>(); }
	jni::ref<java::util::List> getLoggerNames() { return call_method<"getLoggerNames", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getLoggerLevel(jni::ref<java::lang::String> p1) { return call_method<"getLoggerLevel", jni::ref<java::lang::String>>(p1); }
	void setLoggerLevel(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setLoggerLevel", void>(p1, p2); }
	jni::ref<java::lang::String> getParentLoggerName(jni::ref<java::lang::String> p1) { return call_method<"getParentLoggerName", jni::ref<java::lang::String>>(p1); }

protected:

	ManagementFactoryHelper_PlatformLoggingImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MANAGEMENTFACTORYHELPER_PLATFORMLOGGINGIMPL
