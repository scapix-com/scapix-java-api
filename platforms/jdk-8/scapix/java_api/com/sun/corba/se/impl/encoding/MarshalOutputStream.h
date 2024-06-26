// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class MarshalOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::MarshalOutputStream>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/MarshalOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Principal.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::MarshalOutputStream : public jni::object_base<"com/sun/corba/se/impl/encoding/MarshalOutputStream",
	java::lang::Object>
{
public:

	jni::ref<org::omg::CORBA::portable::InputStream> create_input_stream() { return call_method<"create_input_stream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }
	void write_boolean(jboolean p1) { return call_method<"write_boolean", void>(p1); }
	void write_char(jchar p1) { return call_method<"write_char", void>(p1); }
	void write_wchar(jchar p1) { return call_method<"write_wchar", void>(p1); }
	void write_octet(jbyte p1) { return call_method<"write_octet", void>(p1); }
	void write_short(jshort p1) { return call_method<"write_short", void>(p1); }
	void write_ushort(jshort p1) { return call_method<"write_ushort", void>(p1); }
	void write_long(jint p1) { return call_method<"write_long", void>(p1); }
	void write_ulong(jint p1) { return call_method<"write_ulong", void>(p1); }
	void write_longlong(jlong p1) { return call_method<"write_longlong", void>(p1); }
	void write_ulonglong(jlong p1) { return call_method<"write_ulonglong", void>(p1); }
	void write_float(jfloat p1) { return call_method<"write_float", void>(p1); }
	void write_double(jdouble p1) { return call_method<"write_double", void>(p1); }
	void write_string(jni::ref<java::lang::String> p1) { return call_method<"write_string", void>(p1); }
	void write_wstring(jni::ref<java::lang::String> p1) { return call_method<"write_wstring", void>(p1); }
	void write_boolean_array(jni::ref<jni::array<jboolean>> p1, jint p2, jint p3) { return call_method<"write_boolean_array", void>(p1, p2, p3); }
	void write_char_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"write_char_array", void>(p1, p2, p3); }
	void write_wchar_array(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"write_wchar_array", void>(p1, p2, p3); }
	void write_octet_array(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write_octet_array", void>(p1, p2, p3); }
	void write_short_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"write_short_array", void>(p1, p2, p3); }
	void write_ushort_array(jni::ref<jni::array<jshort>> p1, jint p2, jint p3) { return call_method<"write_ushort_array", void>(p1, p2, p3); }
	void write_long_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"write_long_array", void>(p1, p2, p3); }
	void write_ulong_array(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return call_method<"write_ulong_array", void>(p1, p2, p3); }
	void write_longlong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"write_longlong_array", void>(p1, p2, p3); }
	void write_ulonglong_array(jni::ref<jni::array<jlong>> p1, jint p2, jint p3) { return call_method<"write_ulonglong_array", void>(p1, p2, p3); }
	void write_float_array(jni::ref<jni::array<jfloat>> p1, jint p2, jint p3) { return call_method<"write_float_array", void>(p1, p2, p3); }
	void write_double_array(jni::ref<jni::array<jdouble>> p1, jint p2, jint p3) { return call_method<"write_double_array", void>(p1, p2, p3); }
	void write_Object(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"write_Object", void>(p1); }
	void write_TypeCode(jni::ref<org::omg::CORBA::TypeCode> p1) { return call_method<"write_TypeCode", void>(p1); }
	void write_any(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"write_any", void>(p1); }
	void write_Principal(jni::ref<org::omg::CORBA::Principal> p1) { return call_method<"write_Principal", void>(p1); }
	void write_value(jni::ref<java::io::Serializable> p1) { return call_method<"write_value", void>(p1); }
	void start_block() { return call_method<"start_block", void>(); }
	void end_block() { return call_method<"end_block", void>(); }
	void putEndian() { return call_method<"putEndian", void>(); }
	void writeTo(jni::ref<java::io::OutputStream> p1) { return call_method<"writeTo", void>(p1); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }

protected:

	MarshalOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_MARSHALOUTPUTSTREAM
