// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport { class LiveRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::LiveRef>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/LiveRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/server/ObjID.h>
#include <scapix/java_api/java/rmi/server/RMIClientSocketFactory.h>
#include <scapix/java_api/java/rmi/server/RMIServerSocketFactory.h>
#include <scapix/java_api/sun/rmi/transport/Channel.h>
#include <scapix/java_api/sun/rmi/transport/Endpoint.h>
#include <scapix/java_api/sun/rmi/transport/Target.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::transport::LiveRef : public jni::object_base<"sun/rmi/transport/LiveRef",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<sun::rmi::transport::LiveRef> new_object(jni::ref<java::rmi::server::ObjID> p1, jni::ref<sun::rmi::transport::Endpoint> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::rmi::transport::LiveRef> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::rmi::transport::LiveRef> new_object(jint p1, jni::ref<java::rmi::server::RMIClientSocketFactory> p2, jni::ref<java::rmi::server::RMIServerSocketFactory> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::rmi::transport::LiveRef> new_object(jni::ref<java::rmi::server::ObjID> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::rmi::transport::LiveRef> new_object(jni::ref<java::rmi::server::ObjID> p1, jint p2, jni::ref<java::rmi::server::RMIClientSocketFactory> p3, jni::ref<java::rmi::server::RMIServerSocketFactory> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jni::ref<java::rmi::server::RMIClientSocketFactory> getClientSocketFactory() { return call_method<"getClientSocketFactory", jni::ref<java::rmi::server::RMIClientSocketFactory>>(); }
	jni::ref<java::rmi::server::RMIServerSocketFactory> getServerSocketFactory() { return call_method<"getServerSocketFactory", jni::ref<java::rmi::server::RMIServerSocketFactory>>(); }
	void exportObject(jni::ref<sun::rmi::transport::Target> p1) { return call_method<"exportObject", void>(p1); }
	jni::ref<sun::rmi::transport::Channel> getChannel() { return call_method<"getChannel", jni::ref<sun::rmi::transport::Channel>>(); }
	jni::ref<java::rmi::server::ObjID> getObjID() { return call_method<"getObjID", jni::ref<java::rmi::server::ObjID>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean remoteEquals(jni::ref<java::lang::Object> p1) { return call_method<"remoteEquals", jboolean>(p1); }
	void write(jni::ref<java::io::ObjectOutput> p1, jboolean p2) { return call_method<"write", void>(p1, p2); }
	static jni::ref<sun::rmi::transport::LiveRef> read(jni::ref<java::io::ObjectInput> p1, jboolean p2) { return call_static_method<"read", jni::ref<sun::rmi::transport::LiveRef>>(p1, p2); }

protected:

	LiveRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_LIVEREF
