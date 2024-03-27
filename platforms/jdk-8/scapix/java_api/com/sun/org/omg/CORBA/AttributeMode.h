// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::omg::CORBA { class AttributeMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::omg::CORBA::AttributeMode>
{
	static constexpr fixed_string class_name = "com/sun/org/omg/CORBA/AttributeMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::omg::CORBA::AttributeMode : public jni::object_base<"com/sun/org/omg/CORBA/AttributeMode",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jint _ATTR_NORMAL() { return get_static_field<"_ATTR_NORMAL", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::AttributeMode> ATTR_NORMAL() { return get_static_field<"ATTR_NORMAL", jni::ref<com::sun::org::omg::CORBA::AttributeMode>>(); }
	static jint _ATTR_READONLY() { return get_static_field<"_ATTR_READONLY", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::AttributeMode> ATTR_READONLY() { return get_static_field<"ATTR_READONLY", jni::ref<com::sun::org::omg::CORBA::AttributeMode>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<com::sun::org::omg::CORBA::AttributeMode> from_int(jint p1) { return call_static_method<"from_int", jni::ref<com::sun::org::omg::CORBA::AttributeMode>>(p1); }

protected:

	AttributeMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_CORBA_ATTRIBUTEMODE