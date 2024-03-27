// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class ExtendedPlatformComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::ExtendedPlatformComponent>
{
	static constexpr fixed_string class_name = "sun/management/ExtendedPlatformComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/management/PlatformManagedObject.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::ExtendedPlatformComponent : public jni::object_base<"sun/management/ExtendedPlatformComponent",
	java::lang::Object>
{
public:

	static jni::ref<java::util::List> getMXBeans() { return call_static_method<"getMXBeans", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::management::PlatformManagedObject> getMXBean(jni::ref<java::lang::Class> p1) { return call_static_method<"getMXBean", jni::ref<java::lang::management::PlatformManagedObject>>(p1); }

protected:

	ExtendedPlatformComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_EXTENDEDPLATFORMCOMPONENT
