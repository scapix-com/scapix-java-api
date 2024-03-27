// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/Streamable.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming::NamingContextPackage { class InvalidNameHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::NamingContextPackage::InvalidNameHolder>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/NamingContextPackage/InvalidNameHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::Streamable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContextPackage/InvalidName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::NamingContextPackage::InvalidNameHolder : public jni::object_base<"org/omg/CosNaming/NamingContextPackage/InvalidNameHolder",
	java::lang::Object,
	org::omg::CORBA::portable::Streamable>
{
public:

	jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidName> value() { return get_field<"value", jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidName>>(); }
	void value(jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidName> v) { set_field<"value", jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidName>>(v); }

	static jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidNameHolder> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidNameHolder> new_object(jni::ref<org::omg::CosNaming::NamingContextPackage::InvalidName> p1) { return base_::new_object(p1); }
	void _read(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_method<"_read", void>(p1); }
	void _write(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"_write", void>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> _type() { return call_method<"_type", jni::ref<org::omg::CORBA::TypeCode>>(); }

protected:

	InvalidNameHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_NAMINGCONTEXTPACKAGE_INVALIDNAMEHOLDER
