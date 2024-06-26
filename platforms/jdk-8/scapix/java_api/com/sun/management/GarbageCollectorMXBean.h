// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/GarbageCollectorMXBean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management { class GarbageCollectorMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::GarbageCollectorMXBean>
{
	static constexpr fixed_string class_name = "com/sun/management/GarbageCollectorMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::GarbageCollectorMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/management/GcInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::management::GarbageCollectorMXBean : public jni::object_base<"com/sun/management/GarbageCollectorMXBean",
	java::lang::Object,
	java::lang::management::GarbageCollectorMXBean>
{
public:

	jni::ref<com::sun::management::GcInfo> getLastGcInfo() { return call_method<"getLastGcInfo", jni::ref<com::sun::management::GcInfo>>(); }

protected:

	GarbageCollectorMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_GARBAGECOLLECTORMXBEAN
