// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/ClassLoadingMXBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class ClassLoadingImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::ClassLoadingImpl>
{
	static constexpr fixed_string class_name = "sun/management/ClassLoadingImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::ClassLoadingMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::ClassLoadingImpl : public jni::object_base<"sun/management/ClassLoadingImpl",
	java::lang::Object,
	java::lang::management::ClassLoadingMXBean>
{
public:

	jlong getTotalLoadedClassCount() { return call_method<"getTotalLoadedClassCount", jlong>(); }
	jint getLoadedClassCount() { return call_method<"getLoadedClassCount", jint>(); }
	jlong getUnloadedClassCount() { return call_method<"getUnloadedClassCount", jlong>(); }
	jboolean isVerbose() { return call_method<"isVerbose", jboolean>(); }
	void setVerbose(jboolean p1) { return call_method<"setVerbose", void>(p1); }
	jni::ref<javax::management::ObjectName> getObjectName() { return call_method<"getObjectName", jni::ref<javax::management::ObjectName>>(); }

protected:

	ClassLoadingImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_CLASSLOADINGIMPL
