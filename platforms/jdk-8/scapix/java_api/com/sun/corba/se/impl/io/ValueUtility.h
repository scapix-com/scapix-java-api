// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class ValueUtility; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::ValueUtility>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/ValueUtility";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/io/ObjectStreamClass.h>
#include <scapix/java_api/com/sun/org/omg/CORBA/ValueDefPackage/FullValueDescription.h>
#include <scapix/java_api/com/sun/org/omg/SendingContext/CodeBase.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/rmi/CORBA/ValueHandler.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/ValueMember.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::io::ValueUtility : public jni::object_base<"com/sun/corba/se/impl/io/ValueUtility",
	java::lang::Object>
{
public:

	static jshort PRIVATE_MEMBER() { return get_static_field<"PRIVATE_MEMBER", jshort>(); }
	static jshort PUBLIC_MEMBER() { return get_static_field<"PUBLIC_MEMBER", jshort>(); }

	static jni::ref<com::sun::corba::se::impl::io::ValueUtility> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getSignature(jni::ref<org::omg::CORBA::ValueMember> p1) { return call_static_method<"getSignature", jni::ref<java::lang::String>>(p1); }
	static jni::ref<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription> translate(jni::ref<org::omg::CORBA::ORB> p1, jni::ref<com::sun::corba::se::impl::io::ObjectStreamClass> p2, jni::ref<javax::rmi::CORBA::ValueHandler> p3) { return call_static_method<"translate", jni::ref<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription>>(p1, p2, p3); }
	static jboolean isAssignableFrom(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription> p2, jni::ref<com::sun::org::omg::SendingContext::CodeBase> p3) { return call_static_method<"isAssignableFrom", jboolean>(p1, p2, p3); }
	static jni::ref<org::omg::CORBA::TypeCode> createTypeCodeForClass(jni::ref<org::omg::CORBA::ORB> p1, jni::ref<java::lang::Class> p2, jni::ref<javax::rmi::CORBA::ValueHandler> p3) { return call_static_method<"createTypeCodeForClass", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	static jni::ref<org::omg::CORBA::TypeCode> getPrimitiveTypeCodeForClass(jni::ref<org::omg::CORBA::ORB> p1, jni::ref<java::lang::Class> p2, jni::ref<javax::rmi::CORBA::ValueHandler> p3) { return call_static_method<"getPrimitiveTypeCodeForClass", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }

protected:

	ValueUtility(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_VALUEUTILITY
