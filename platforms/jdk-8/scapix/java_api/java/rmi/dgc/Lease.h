// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::dgc { class Lease; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::dgc::Lease>
{
	static constexpr fixed_string class_name = "java/rmi/dgc/Lease";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE)
#define SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/dgc/VMID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::dgc::Lease : public jni::object_base<"java/rmi/dgc/Lease",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::rmi::dgc::Lease> new_object(jni::ref<java::rmi::dgc::VMID> p1, jlong p2) { return base_::new_object(p1, p2); }
	jni::ref<java::rmi::dgc::VMID> getVMID() { return call_method<"getVMID", jni::ref<java::rmi::dgc::VMID>>(); }
	jlong getValue() { return call_method<"getValue", jlong>(); }

protected:

	Lease(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_DGC_LEASE