// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::omg::CORBA { class ParameterMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::omg::CORBA::ParameterMode>
{
	static constexpr fixed_string class_name = "com/sun/org/omg/CORBA/ParameterMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::omg::CORBA::ParameterMode : public jni::object_base<"com/sun/org/omg/CORBA/ParameterMode",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jint _PARAM_IN() { return get_static_field<"_PARAM_IN", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::ParameterMode> PARAM_IN() { return get_static_field<"PARAM_IN", jni::ref<com::sun::org::omg::CORBA::ParameterMode>>(); }
	static jint _PARAM_OUT() { return get_static_field<"_PARAM_OUT", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::ParameterMode> PARAM_OUT() { return get_static_field<"PARAM_OUT", jni::ref<com::sun::org::omg::CORBA::ParameterMode>>(); }
	static jint _PARAM_INOUT() { return get_static_field<"_PARAM_INOUT", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::ParameterMode> PARAM_INOUT() { return get_static_field<"PARAM_INOUT", jni::ref<com::sun::org::omg::CORBA::ParameterMode>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::ParameterMode> from_int(jint p1) { return call_static_method<"from_int", jni::ref<com::sun::org::omg::CORBA::ParameterMode>>(p1); }

protected:

	ParameterMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_PARAMETERMODE
