// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/Streamable.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class PolicyErrorHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::PolicyErrorHolder>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/PolicyErrorHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::Streamable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/PolicyError.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::PolicyErrorHolder : public jni::object_base<"org/omg/CORBA/PolicyErrorHolder",
	java::lang::Object,
	org::omg::CORBA::portable::Streamable>
{
public:

	jni::ref<org::omg::CORBA::PolicyError> value() { return get_field<"value", jni::ref<org::omg::CORBA::PolicyError>>(); }
	void value(jni::ref<org::omg::CORBA::PolicyError> v) { set_field<"value", jni::ref<org::omg::CORBA::PolicyError>>(v); }

	static jni::ref<org::omg::CORBA::PolicyErrorHolder> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CORBA::PolicyErrorHolder> new_object(jni::ref<org::omg::CORBA::PolicyError> p1) { return base_::new_object(p1); }
	void _read(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_method<"_read", void>(p1); }
	void _write(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"_write", void>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> _type() { return call_method<"_type", jni::ref<org::omg::CORBA::TypeCode>>(); }

protected:

	PolicyErrorHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_POLICYERRORHOLDER
