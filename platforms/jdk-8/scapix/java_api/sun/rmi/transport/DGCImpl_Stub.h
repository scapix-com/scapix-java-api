// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/rmi/server/RemoteStub.h>
#include <scapix/java_api/java/rmi/dgc/DGC.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class DGCImpl_Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::DGCImpl_Stub>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/DGCImpl_Stub";
	using base_classes = std::tuple<scapix::java_api::java::rmi::server::RemoteStub, scapix::java_api::java::rmi::dgc::DGC>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/dgc/Lease.h>
#include <scapix/java_api/java/rmi/dgc/VMID.h>
#include <scapix/java_api/java/rmi/server/ObjID.h>
#include <scapix/java_api/java/rmi/server/RemoteRef.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::DGCImpl_Stub : public jni::object_base<"sun/rmi/transport/DGCImpl_Stub",
	java::rmi::server::RemoteStub,
	java::rmi::dgc::DGC>
{
public:

	static jni::ref<sun::rmi::transport::DGCImpl_Stub> new_object() { return base_::new_object(); }
	static jni::ref<sun::rmi::transport::DGCImpl_Stub> new_object(jni::ref<java::rmi::server::RemoteRef> p1) { return base_::new_object(p1); }
	void clean(jni::ref<jni::array<java::rmi::server::ObjID>> p1, jlong p2, jni::ref<java::rmi::dgc::VMID> p3, jboolean p4) { return call_method<"clean", void>(p1, p2, p3, p4); }
	jni::ref<java::rmi::dgc::Lease> dirty(jni::ref<jni::array<java::rmi::server::ObjID>> p1, jlong p2, jni::ref<java::rmi::dgc::Lease> p3) { return call_method<"dirty", jni::ref<java::rmi::dgc::Lease>>(p1, p2, p3); }

protected:

	DGCImpl_Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_DGCIMPL_STUB