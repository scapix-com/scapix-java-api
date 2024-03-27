// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/CompilationMXBean.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class CompilationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::CompilationImpl>
{
	static constexpr fixed_string class_name = "sun/management/CompilationImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::CompilationMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::CompilationImpl : public jni::object_base<"sun/management/CompilationImpl",
	java::lang::Object,
	java::lang::management::CompilationMXBean>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isCompilationTimeMonitoringSupported() { return call_method<"isCompilationTimeMonitoringSupported", jboolean>(); }
	jlong getTotalCompilationTime() { return call_method<"getTotalCompilationTime", jlong>(); }
	jni::ref<javax::management::ObjectName> getObjectName() { return call_method<"getObjectName", jni::ref<javax::management::ObjectName>>(); }

protected:

	CompilationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COMPILATIONIMPL