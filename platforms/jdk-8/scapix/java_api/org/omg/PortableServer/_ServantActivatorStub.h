// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/org/omg/PortableServer/ServantActivator.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class _ServantActivatorStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::_ServantActivatorStub>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/_ServantActivatorStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::org::omg::PortableServer::ServantActivator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#include <scapix/java_api/org/omg/PortableServer/Servant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::_ServantActivatorStub : public jni::object_base<"org/omg/PortableServer/_ServantActivatorStub",
	org::omg::CORBA::portable::ObjectImpl,
	org::omg::PortableServer::ServantActivator>
{
public:

	static jni::ref<java::lang::Class> _opsClass() { return get_static_field<"_opsClass", jni::ref<java::lang::Class>>(); }

	static jni::ref<org::omg::PortableServer::_ServantActivatorStub> new_object() { return base_::new_object(); }
	jni::ref<org::omg::PortableServer::Servant> incarnate(jni::ref<jni::array<jbyte>> p1, jni::ref<org::omg::PortableServer::POA> p2) { return call_method<"incarnate", jni::ref<org::omg::PortableServer::Servant>>(p1, p2); }
	void etherealize(jni::ref<jni::array<jbyte>> p1, jni::ref<org::omg::PortableServer::POA> p2, jni::ref<org::omg::PortableServer::Servant> p3, jboolean p4, jboolean p5) { return call_method<"etherealize", void>(p1, p2, p3, p4, p5); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_ServantActivatorStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER__SERVANTACTIVATORSTUB