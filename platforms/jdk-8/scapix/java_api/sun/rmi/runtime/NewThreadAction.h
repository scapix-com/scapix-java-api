// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION_FWD
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::runtime { class NewThreadAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::runtime::NewThreadAction>
{
	static constexpr fixed_string class_name = "sun/rmi/runtime/NewThreadAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION)
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::runtime::NewThreadAction : public jni::object_base<"sun/rmi/runtime/NewThreadAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<sun::rmi::runtime::NewThreadAction> new_object(jni::ref<java::lang::Runnable> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::rmi::runtime::NewThreadAction> new_object(jni::ref<java::lang::Runnable> p1, jni::ref<java::lang::String> p2, jboolean p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::Thread> run() { return call_method<"run", jni::ref<java::lang::Thread>>(); }

protected:

	NewThreadAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_NEWTHREADACTION
