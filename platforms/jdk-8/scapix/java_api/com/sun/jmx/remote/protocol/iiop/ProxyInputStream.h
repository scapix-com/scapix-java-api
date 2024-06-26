// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::protocol::iiop { class ProxyInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::protocol::iiop::ProxyInputStream>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/protocol/iiop/ProxyInputStream";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA_2_3::portable::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Context.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Principal.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/BoxedValueHelper.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::protocol::iiop::ProxyInputStream : public jni::object_base<"com/sun/jmx/remote/protocol/iiop/ProxyInputStream",
	org::omg::CORBA_2_3::portable::InputStream>
{
public:

	static jni::ref<com::sun::jmx::remote::protocol::iiop::ProxyInputStream> new_object(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return base_::new_object(p1); }
	jboolean read_boolean() { return call_method<"read_boolean", jboolean>(); }
	jchar read_char() { return call_method<"read_char", jchar>(); }
	jchar read_wchar() { return call_method<"read_wchar", jchar>(); }
	jbyte read_octet() { return call_method<"read_octet", jbyte>(); }
	jshort read_short() { return call_method<"read_short", jshort>(); }
	jshort read_ushort() { return call_method<"read_ushort", jshort>(); }
	jint read_long() { return call_method<"read_long", jint>(); }
	jint read_ulong() { return call_method<"read_ulong", jint>(); }
	jlong read_longlong() { return call_method<"read_longlong", jlong>(); }
	jlong read_ulonglong() { return call_method<"read_ulonglong", jlong>(); }
	jfloat read_float() { return call_method<"read_float", jfloat>(); }
	jdouble read_double() { return call_method<"read_double", jdouble>(); }
	jni::ref<java::lang::String> read_string() { return call_method<"read_string", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> read_wstring() { return call_method<"read_wstring", jni::ref<java::lang::String>>(); }
	void read_boolean_array(jni::ref<jni::array<jboolean>> p1, jint p2, jint p3) { return call_method<"read_boolean_array", void>(p1, p2, p3); }
	void read_char_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"read_char_array", void>(p1, p2, p3); }
	void read_wchar_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"read_wchar_array", void>(p1, p2, p3); }
	void read_octet_array(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read_octet_array", void>(p1, p2, p3); }
	void read_short_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"read_short_array", void>(p1, p2, p3); }
	void read_ushort_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"read_ushort_array", void>(p1, p2, p3); }
	void read_long_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"read_long_array", void>(p1, p2, p3); }
	void read_ulong_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"read_ulong_array", void>(p1, p2, p3); }
	void read_longlong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"read_longlong_array", void>(p1, p2, p3); }
	void read_ulonglong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"read_ulonglong_array", void>(p1, p2, p3); }
	void read_float_array(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"read_float_array", void>(p1, p2, p3); }
	void read_double_array(jni::ref<jni::array<jdouble>> p1, jint p2, jint p3) { return call_method<"read_double_array", void>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::Object> read_Object() { return call_method<"read_Object", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::TypeCode> read_TypeCode() { return call_method<"read_TypeCode", jni::ref<org::omg::CORBA::TypeCode>>(); }
	jni::ref<org::omg::CORBA::Any> read_any() { return call_method<"read_any", jni::ref<org::omg::CORBA::Any>>(); }
	jni::ref<org::omg::CORBA::Principal> read_Principal() { return call_method<"read_Principal", jni::ref<org::omg::CORBA::Principal>>(); }
	jint read() { return call_method<"read", jint>(); }
	jni::ref<java::math::BigDecimal> read_fixed() { return call_method<"read_fixed", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<org::omg::CORBA::Context> read_Context() { return call_method<"read_Context", jni::ref<org::omg::CORBA::Context>>(); }
	jni::ref<org::omg::CORBA::Object> read_Object(jni::ref<java::lang::Class> p1) { return call_method<"read_Object", jni::ref<org::omg::CORBA::Object>>(p1); }
	jni::ref<org::omg::CORBA::ORB> orb() { return call_method<"orb", jni::ref<org::omg::CORBA::ORB>>(); }
	jni::ref<java::io::Serializable> read_value() { return call_method<"read_value", jni::ref<java::io::Serializable>>(); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::lang::Class> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<org::omg::CORBA::portable::BoxedValueHelper> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::lang::String> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::io::Serializable> read_value(jni::ref<java::io::Serializable> p1) { return call_method<"read_value", jni::ref<java::io::Serializable>>(p1); }
	jni::ref<java::lang::Object> read_abstract_interface() { return call_method<"read_abstract_interface", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> read_abstract_interface(jni::ref<java::lang::Class> p1) { return call_method<"read_abstract_interface", jni::ref<java::lang::Object>>(p1); }
	jni::ref<org::omg::CORBA::portable::InputStream> getProxiedInputStream() { return call_method<"getProxiedInputStream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }

protected:

	ProxyInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_IIOP_PROXYINPUTSTREAM
