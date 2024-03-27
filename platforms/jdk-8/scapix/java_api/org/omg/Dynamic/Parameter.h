// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER_FWD
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::Dynamic { class Parameter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::Dynamic::Parameter>
{
	static constexpr fixed_string class_name = "org/omg/Dynamic/Parameter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER)
#define SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/ParameterMode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::Dynamic::Parameter : public jni::object_base<"org/omg/Dynamic/Parameter",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	jni::ref<org::omg::CORBA::Any> argument() { return get_field<"argument", jni::ref<org::omg::CORBA::Any>>(); }
	void argument(jni::ref<org::omg::CORBA::Any> v) { set_field<"argument", jni::ref<org::omg::CORBA::Any>>(v); }
	jni::ref<org::omg::CORBA::ParameterMode> mode() { return get_field<"mode", jni::ref<org::omg::CORBA::ParameterMode>>(); }
	void mode(jni::ref<org::omg::CORBA::ParameterMode> v) { set_field<"mode", jni::ref<org::omg::CORBA::ParameterMode>>(v); }

	static jni::ref<org::omg::Dynamic::Parameter> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::Dynamic::Parameter> new_object(jni::ref<org::omg::CORBA::Any> p1, jni::ref<org::omg::CORBA::ParameterMode> p2) { return base_::new_object(p1, p2); }

protected:

	Parameter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_DYNAMIC_PARAMETER
