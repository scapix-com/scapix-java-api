// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::omg::CORBA { class OperationDescription; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::omg::CORBA::OperationDescription>
{
	static constexpr fixed_string class_name = "com/sun/org/omg/CORBA/OperationDescription";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/omg/CORBA/ExceptionDescription.h>
#include <scapix/java_api/com/sun/org/omg/CORBA/OperationMode.h>
#include <scapix/java_api/com/sun/org/omg/CORBA/ParameterDescription.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::omg::CORBA::OperationDescription : public jni::object_base<"com/sun/org/omg/CORBA/OperationDescription",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> id() { return get_field<"id", jni::ref<java::lang::String>>(); }
	void id(jni::ref<java::lang::String> v) { set_field<"id", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> defined_in() { return get_field<"defined_in", jni::ref<java::lang::String>>(); }
	void defined_in(jni::ref<java::lang::String> v) { set_field<"defined_in", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> version() { return get_field<"version", jni::ref<java::lang::String>>(); }
	void version(jni::ref<java::lang::String> v) { set_field<"version", jni::ref<java::lang::String>>(v); }
	jni::ref<org::omg::CORBA::TypeCode> result() { return get_field<"result", jni::ref<org::omg::CORBA::TypeCode>>(); }
	void result(jni::ref<org::omg::CORBA::TypeCode> v) { set_field<"result", jni::ref<org::omg::CORBA::TypeCode>>(v); }
	jni::ref<com::sun::org::omg::CORBA::OperationMode> mode() { return get_field<"mode", jni::ref<com::sun::org::omg::CORBA::OperationMode>>(); }
	void mode(jni::ref<com::sun::org::omg::CORBA::OperationMode> v) { set_field<"mode", jni::ref<com::sun::org::omg::CORBA::OperationMode>>(v); }
	jni::ref<jni::array<java::lang::String>> contexts() { return get_field<"contexts", jni::ref<jni::array<java::lang::String>>>(); }
	void contexts(jni::ref<jni::array<java::lang::String>> v) { set_field<"contexts", jni::ref<jni::array<java::lang::String>>>(v); }
	jni::ref<jni::array<com::sun::org::omg::CORBA::ParameterDescription>> parameters() { return get_field<"parameters", jni::ref<jni::array<com::sun::org::omg::CORBA::ParameterDescription>>>(); }
	void parameters(jni::ref<jni::array<com::sun::org::omg::CORBA::ParameterDescription>> v) { set_field<"parameters", jni::ref<jni::array<com::sun::org::omg::CORBA::ParameterDescription>>>(v); }
	jni::ref<jni::array<com::sun::org::omg::CORBA::ExceptionDescription>> exceptions() { return get_field<"exceptions", jni::ref<jni::array<com::sun::org::omg::CORBA::ExceptionDescription>>>(); }
	void exceptions(jni::ref<jni::array<com::sun::org::omg::CORBA::ExceptionDescription>> v) { set_field<"exceptions", jni::ref<jni::array<com::sun::org::omg::CORBA::ExceptionDescription>>>(v); }

	static jni::ref<com::sun::org::omg::CORBA::OperationDescription> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::omg::CORBA::OperationDescription> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<org::omg::CORBA::TypeCode> p5, jni::ref<com::sun::org::omg::CORBA::OperationMode> p6, jni::ref<jni::array<java::lang::String>> p7, jni::ref<jni::array<com::sun::org::omg::CORBA::ParameterDescription>> p8, jni::ref<jni::array<com::sun::org::omg::CORBA::ExceptionDescription>> p9) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9); }

protected:

	OperationDescription(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_OPERATIONDESCRIPTION
