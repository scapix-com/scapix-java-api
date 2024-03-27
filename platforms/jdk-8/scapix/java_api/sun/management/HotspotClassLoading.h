// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/management/HotspotClassLoadingMBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotClassLoading; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotClassLoading>
{
	static constexpr fixed_string class_name = "sun/management/HotspotClassLoading";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::management::HotspotClassLoadingMBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::HotspotClassLoading : public jni::object_base<"sun/management/HotspotClassLoading",
	java::lang::Object,
	sun::management::HotspotClassLoadingMBean>
{
public:

	jlong getLoadedClassSize() { return call_method<"getLoadedClassSize", jlong>(); }
	jlong getUnloadedClassSize() { return call_method<"getUnloadedClassSize", jlong>(); }
	jlong getClassLoadingTime() { return call_method<"getClassLoadingTime", jlong>(); }
	jlong getMethodDataSize() { return call_method<"getMethodDataSize", jlong>(); }
	jlong getInitializedClassCount() { return call_method<"getInitializedClassCount", jlong>(); }
	jlong getClassInitializationTime() { return call_method<"getClassInitializationTime", jlong>(); }
	jlong getClassVerificationTime() { return call_method<"getClassVerificationTime", jlong>(); }
	jni::ref<java::util::List> getInternalClassLoadingCounters() { return call_method<"getInternalClassLoadingCounters", jni::ref<java::util::List>>(); }

protected:

	HotspotClassLoading(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADING