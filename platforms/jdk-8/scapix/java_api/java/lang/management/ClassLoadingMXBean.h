// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/PlatformManagedObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class ClassLoadingMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::ClassLoadingMXBean>
{
	static constexpr fixed_string class_name = "java/lang/management/ClassLoadingMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::PlatformManagedObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::ClassLoadingMXBean : public jni::object_base<"java/lang/management/ClassLoadingMXBean",
	java::lang::Object,
	java::lang::management::PlatformManagedObject>
{
public:

	jlong getTotalLoadedClassCount() { return call_method<"getTotalLoadedClassCount", jlong>(); }
	jint getLoadedClassCount() { return call_method<"getLoadedClassCount", jint>(); }
	jlong getUnloadedClassCount() { return call_method<"getUnloadedClassCount", jlong>(); }
	jboolean isVerbose() { return call_method<"isVerbose", jboolean>(); }
	void setVerbose(jboolean p1) { return call_method<"setVerbose", void>(p1); }

protected:

	ClassLoadingMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_CLASSLOADINGMXBEAN
