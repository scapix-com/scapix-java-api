// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class BindingType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::BindingType>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/BindingType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::BindingType : public jni::object_base<"org/omg/CosNaming/BindingType",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jint _nobject() { return get_static_field<"_nobject", jint>(); }
	static jni::ref<org::omg::CosNaming::BindingType> nobject() { return get_static_field<"nobject", jni::ref<org::omg::CosNaming::BindingType>>(); }
	static jint _ncontext() { return get_static_field<"_ncontext", jint>(); }
	static jni::ref<org::omg::CosNaming::BindingType> ncontext() { return get_static_field<"ncontext", jni::ref<org::omg::CosNaming::BindingType>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<org::omg::CosNaming::BindingType> from_int(jint p1) { return call_static_method<"from_int", jni::ref<org::omg::CosNaming::BindingType>>(p1); }

protected:

	BindingType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGTYPE