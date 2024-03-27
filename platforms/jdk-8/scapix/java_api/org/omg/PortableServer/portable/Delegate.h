// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer::portable { class Delegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::portable::Delegate>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/portable/Delegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#include <scapix/java_api/org/omg/PortableServer/Servant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::portable::Delegate : public jni::object_base<"org/omg/PortableServer/portable/Delegate",
	java::lang::Object>
{
public:

	jni::ref<org::omg::CORBA::ORB> orb(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"orb", jni::ref<org::omg::CORBA::ORB>>(p1); }
	jni::ref<org::omg::CORBA::Object> this_object(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"this_object", jni::ref<org::omg::CORBA::Object>>(p1); }
	jni::ref<org::omg::PortableServer::POA> poa(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"poa", jni::ref<org::omg::PortableServer::POA>>(p1); }
	jni::ref<jni::array<jbyte>> object_id(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"object_id", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<org::omg::PortableServer::POA> default_POA(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"default_POA", jni::ref<org::omg::PortableServer::POA>>(p1); }
	jboolean is_a(jni::ref<org::omg::PortableServer::Servant> p1, jni::ref<java::lang::String> p2) { return call_method<"is_a", jboolean>(p1, p2); }
	jboolean non_existent(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"non_existent", jboolean>(p1); }
	jni::ref<org::omg::CORBA::Object> get_interface_def(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"get_interface_def", jni::ref<org::omg::CORBA::Object>>(p1); }

protected:

	Delegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_PORTABLE_DELEGATE