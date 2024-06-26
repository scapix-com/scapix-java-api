// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class HotspotClassLoadingMBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::HotspotClassLoadingMBean>
{
	static constexpr fixed_string class_name = "sun/management/HotspotClassLoadingMBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::HotspotClassLoadingMBean : public jni::object_base<"sun/management/HotspotClassLoadingMBean",
	java::lang::Object>
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

	HotspotClassLoadingMBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_HOTSPOTCLASSLOADINGMBEAN
