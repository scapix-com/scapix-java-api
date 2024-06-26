// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class Target; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::Target>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/Target";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/rmi/dgc/VMID.h>
#include <scapix/java_api/java/rmi/server/ObjID.h>
#include <scapix/java_api/sun/rmi/server/Dispatcher.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::Target : public jni::object_base<"sun/rmi/transport/Target",
	java::lang::Object>
{
public:

	static jni::ref<sun::rmi::transport::Target> new_object(jni::ref<java::rmi::Remote> p1, jni::ref<sun::rmi::server::Dispatcher> p2, jni::ref<java::rmi::Remote> p3, jni::ref<java::rmi::server::ObjID> p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::rmi::Remote> getStub() { return call_method<"getStub", jni::ref<java::rmi::Remote>>(); }
	void vmidDead(jni::ref<java::rmi::dgc::VMID> p1) { return call_method<"vmidDead", void>(p1); }

protected:

	Target(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_TARGET
