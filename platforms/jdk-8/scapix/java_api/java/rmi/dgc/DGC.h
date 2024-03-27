// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::dgc { class DGC; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::dgc::DGC>
{
	static constexpr fixed_string class_name = "java/rmi/dgc/DGC";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC)
#define SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/dgc/Lease.h>
#include <scapix/java_api/java/rmi/dgc/VMID.h>
#include <scapix/java_api/java/rmi/server/ObjID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::dgc::DGC : public jni::object_base<"java/rmi/dgc/DGC",
	java::lang::Object,
	java::rmi::Remote>
{
public:

	jni::ref<java::rmi::dgc::Lease> dirty(jni::ref<jni::array<java::rmi::server::ObjID>> p1, jlong p2, jni::ref<java::rmi::dgc::Lease> p3) { return call_method<"dirty", jni::ref<java::rmi::dgc::Lease>>(p1, p2, p3); }
	void clean(jni::ref<jni::array<java::rmi::server::ObjID>> p1, jlong p2, jni::ref<java::rmi::dgc::VMID> p3, jboolean p4) { return call_method<"clean", void>(p1, p2, p3, p4); }

protected:

	DGC(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_DGC_DGC