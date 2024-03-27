// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/management/LazyCompositeData.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class MonitorInfoCompositeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::MonitorInfoCompositeData>
{
	static constexpr fixed_string class_name = "sun/management/MonitorInfoCompositeData";
	using base_classes = std::tuple<scapix::java_api::sun::management::LazyCompositeData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StackTraceElement.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/management/MonitorInfo.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::MonitorInfoCompositeData : public jni::object_base<"sun/management/MonitorInfoCompositeData",
	sun::management::LazyCompositeData>
{
public:

	jni::ref<java::lang::management::MonitorInfo> getMonitorInfo() { return call_method<"getMonitorInfo", jni::ref<java::lang::management::MonitorInfo>>(); }
	static jni::ref<javax::management::openmbean::CompositeData> toCompositeData(jni::ref<java::lang::management::MonitorInfo> p1) { return call_static_method<"toCompositeData", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	static jni::ref<java::lang::String> getClassName(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getClassName", jni::ref<java::lang::String>>(p1); }
	static jint getIdentityHashCode(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getIdentityHashCode", jint>(p1); }
	static jni::ref<java::lang::StackTraceElement> getLockedStackFrame(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getLockedStackFrame", jni::ref<java::lang::StackTraceElement>>(p1); }
	static jint getLockedStackDepth(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"getLockedStackDepth", jint>(p1); }
	static void validateCompositeData(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"validateCompositeData", void>(p1); }

protected:

	MonitorInfoCompositeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_MONITORINFOCOMPOSITEDATA