// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class LocalObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::LocalObject>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/LocalObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Context.h>
#include <scapix/java_api/org/omg/CORBA/ContextList.h>
#include <scapix/java_api/org/omg/CORBA/DomainManager.h>
#include <scapix/java_api/org/omg/CORBA/ExceptionList.h>
#include <scapix/java_api/org/omg/CORBA/NVList.h>
#include <scapix/java_api/org/omg/CORBA/NamedValue.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>
#include <scapix/java_api/org/omg/CORBA/Request.h>
#include <scapix/java_api/org/omg/CORBA/SetOverrideType.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/ServantObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::LocalObject : public jni::object_base<"org/omg/CORBA/LocalObject",
	java::lang::Object,
	org::omg::CORBA::Object>
{
public:

	static jni::ref<org::omg::CORBA::LocalObject> new_object() { return base_::new_object(); }
	jboolean _is_equivalent(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"_is_equivalent", jboolean>(p1); }
	jboolean _non_existent() { return call_method<"_non_existent", jboolean>(); }
	jint _hash(jint p1) { return call_method<"_hash", jint>(p1); }
	jboolean _is_a(jni::ref<java::lang::String> p1) { return call_method<"_is_a", jboolean>(p1); }
	jni::ref<org::omg::CORBA::Object> _duplicate() { return call_method<"_duplicate", jni::ref<org::omg::CORBA::Object>>(); }
	void _release() { return call_method<"_release", void>(); }
	jni::ref<org::omg::CORBA::Request> _request(jni::ref<java::lang::String> p1) { return call_method<"_request", jni::ref<org::omg::CORBA::Request>>(p1); }
	jni::ref<org::omg::CORBA::Request> _create_request(jni::ref<org::omg::CORBA::Context> p1, jni::ref<java::lang::String> p2, jni::ref<org::omg::CORBA::NVList> p3, jni::ref<org::omg::CORBA::NamedValue> p4) { return call_method<"_create_request", jni::ref<org::omg::CORBA::Request>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::Request> _create_request(jni::ref<org::omg::CORBA::Context> p1, jni::ref<java::lang::String> p2, jni::ref<org::omg::CORBA::NVList> p3, jni::ref<org::omg::CORBA::NamedValue> p4, jni::ref<org::omg::CORBA::ExceptionList> p5, jni::ref<org::omg::CORBA::ContextList> p6) { return call_method<"_create_request", jni::ref<org::omg::CORBA::Request>>(p1, p2, p3, p4, p5, p6); }
	jni::ref<org::omg::CORBA::Object> _get_interface() { return call_method<"_get_interface", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::Object> _get_interface_def() { return call_method<"_get_interface_def", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::ORB> _orb() { return call_method<"_orb", jni::ref<org::omg::CORBA::ORB>>(); }
	jni::ref<org::omg::CORBA::Policy> _get_policy(jint p1) { return call_method<"_get_policy", jni::ref<org::omg::CORBA::Policy>>(p1); }
	jni::ref<jni::array<org::omg::CORBA::DomainManager>> _get_domain_managers() { return call_method<"_get_domain_managers", jni::ref<jni::array<org::omg::CORBA::DomainManager>>>(); }
	jni::ref<org::omg::CORBA::Object> _set_policy_override(jni::ref<jni::array<org::omg::CORBA::Policy>> p1, jni::ref<org::omg::CORBA::SetOverrideType> p2) { return call_method<"_set_policy_override", jni::ref<org::omg::CORBA::Object>>(p1, p2); }
	jboolean _is_local() { return call_method<"_is_local", jboolean>(); }
	jni::ref<org::omg::CORBA::portable::ServantObject> _servant_preinvoke(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2) { return call_method<"_servant_preinvoke", jni::ref<org::omg::CORBA::portable::ServantObject>>(p1, p2); }
	void _servant_postinvoke(jni::ref<org::omg::CORBA::portable::ServantObject> p1) { return call_method<"_servant_postinvoke", void>(p1); }
	jni::ref<org::omg::CORBA::portable::OutputStream> _request(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"_request", jni::ref<org::omg::CORBA::portable::OutputStream>>(p1, p2); }
	jni::ref<org::omg::CORBA::portable::InputStream> _invoke(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"_invoke", jni::ref<org::omg::CORBA::portable::InputStream>>(p1); }
	void _releaseReply(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_method<"_releaseReply", void>(p1); }
	jboolean validate_connection() { return call_method<"validate_connection", jboolean>(); }

protected:

	LocalObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_LOCALOBJECT