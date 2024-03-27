// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/PlatformManagedObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class RuntimeMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::RuntimeMXBean>
{
	static constexpr fixed_string class_name = "java/lang/management/RuntimeMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::PlatformManagedObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::RuntimeMXBean : public jni::object_base<"java/lang/management/RuntimeMXBean",
	java::lang::Object,
	java::lang::management::PlatformManagedObject>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmName() { return call_method<"getVmName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmVendor() { return call_method<"getVmVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVmVersion() { return call_method<"getVmVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSpecName() { return call_method<"getSpecName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSpecVendor() { return call_method<"getSpecVendor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSpecVersion() { return call_method<"getSpecVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getManagementSpecVersion() { return call_method<"getManagementSpecVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getClassPath() { return call_method<"getClassPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLibraryPath() { return call_method<"getLibraryPath", jni::ref<java::lang::String>>(); }
	jboolean isBootClassPathSupported() { return call_method<"isBootClassPathSupported", jboolean>(); }
	jni::ref<java::lang::String> getBootClassPath() { return call_method<"getBootClassPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getInputArguments() { return call_method<"getInputArguments", jni::ref<java::util::List>>(); }
	jlong getUptime() { return call_method<"getUptime", jlong>(); }
	jlong getStartTime() { return call_method<"getStartTime", jlong>(); }
	jni::ref<java::util::Map> getSystemProperties() { return call_method<"getSystemProperties", jni::ref<java::util::Map>>(); }

protected:

	RuntimeMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_RUNTIMEMXBEAN
