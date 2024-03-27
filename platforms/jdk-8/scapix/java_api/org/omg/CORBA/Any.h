// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class Any; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::Any>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/Any";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Principal.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/Streamable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::Any : public jni::object_base<"org/omg/CORBA/Any",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jni::ref<org::omg::CORBA::Any> new_object() { return base_::new_object(); }
	jboolean equal(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"equal", jboolean>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> type() { return call_method<"type", jni::ref<org::omg::CORBA::TypeCode>>(); }
	void type(jni::ref<org::omg::CORBA::TypeCode> p1) { return call_method<"type", void>(p1); }
	void read_value(jni::ref<org::omg::CORBA::portable::InputStream> p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"read_value", void>(p1, p2); }
	void write_value(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"write_value", void>(p1); }
	jni::ref<org::omg::CORBA::portable::OutputStream> create_output_stream() { return call_method<"create_output_stream", jni::ref<org::omg::CORBA::portable::OutputStream>>(); }
	jni::ref<org::omg::CORBA::portable::InputStream> create_input_stream() { return call_method<"create_input_stream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }
	jshort extract_short() { return call_method<"extract_short", jshort>(); }
	void insert_short(jshort p1) { return call_method<"insert_short", void>(p1); }
	jint extract_long() { return call_method<"extract_long", jint>(); }
	void insert_long(jint p1) { return call_method<"insert_long", void>(p1); }
	jlong extract_longlong() { return call_method<"extract_longlong", jlong>(); }
	void insert_longlong(jlong p1) { return call_method<"insert_longlong", void>(p1); }
	jshort extract_ushort() { return call_method<"extract_ushort", jshort>(); }
	void insert_ushort(jshort p1) { return call_method<"insert_ushort", void>(p1); }
	jint extract_ulong() { return call_method<"extract_ulong", jint>(); }
	void insert_ulong(jint p1) { return call_method<"insert_ulong", void>(p1); }
	jlong extract_ulonglong() { return call_method<"extract_ulonglong", jlong>(); }
	void insert_ulonglong(jlong p1) { return call_method<"insert_ulonglong", void>(p1); }
	jfloat extract_float() { return call_method<"extract_float", jfloat>(); }
	void insert_float(jfloat p1) { return call_method<"insert_float", void>(p1); }
	jdouble extract_double() { return call_method<"extract_double", jdouble>(); }
	void insert_double(jdouble p1) { return call_method<"insert_double", void>(p1); }
	jboolean extract_boolean() { return call_method<"extract_boolean", jboolean>(); }
	void insert_boolean(jboolean p1) { return call_method<"insert_boolean", void>(p1); }
	jchar extract_char() { return call_method<"extract_char", jchar>(); }
	void insert_char(jchar p1) { return call_method<"insert_char", void>(p1); }
	jchar extract_wchar() { return call_method<"extract_wchar", jchar>(); }
	void insert_wchar(jchar p1) { return call_method<"insert_wchar", void>(p1); }
	jbyte extract_octet() { return call_method<"extract_octet", jbyte>(); }
	void insert_octet(jbyte p1) { return call_method<"insert_octet", void>(p1); }
	jni::ref<org::omg::CORBA::Any> extract_any() { return call_method<"extract_any", jni::ref<org::omg::CORBA::Any>>(); }
	void insert_any(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"insert_any", void>(p1); }
	jni::ref<org::omg::CORBA::Object> extract_Object() { return call_method<"extract_Object", jni::ref<org::omg::CORBA::Object>>(); }
	void insert_Object(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"insert_Object", void>(p1); }
	jni::ref<java::io::Serializable> extract_Value() { return call_method<"extract_Value", jni::ref<java::io::Serializable>>(); }
	void insert_Value(jni::ref<java::io::Serializable> p1) { return call_method<"insert_Value", void>(p1); }
	void insert_Value(jni::ref<java::io::Serializable> p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"insert_Value", void>(p1, p2); }
	void insert_Object(jni::ref<org::omg::CORBA::Object> p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"insert_Object", void>(p1, p2); }
	jni::ref<java::lang::String> extract_string() { return call_method<"extract_string", jni::ref<java::lang::String>>(); }
	void insert_string(jni::ref<java::lang::String> p1) { return call_method<"insert_string", void>(p1); }
	jni::ref<java::lang::String> extract_wstring() { return call_method<"extract_wstring", jni::ref<java::lang::String>>(); }
	void insert_wstring(jni::ref<java::lang::String> p1) { return call_method<"insert_wstring", void>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> extract_TypeCode() { return call_method<"extract_TypeCode", jni::ref<org::omg::CORBA::TypeCode>>(); }
	void insert_TypeCode(jni::ref<org::omg::CORBA::TypeCode> p1) { return call_method<"insert_TypeCode", void>(p1); }
	jni::ref<org::omg::CORBA::Principal> extract_Principal() { return call_method<"extract_Principal", jni::ref<org::omg::CORBA::Principal>>(); }
	void insert_Principal(jni::ref<org::omg::CORBA::Principal> p1) { return call_method<"insert_Principal", void>(p1); }
	jni::ref<org::omg::CORBA::portable::Streamable> extract_Streamable() { return call_method<"extract_Streamable", jni::ref<org::omg::CORBA::portable::Streamable>>(); }
	void insert_Streamable(jni::ref<org::omg::CORBA::portable::Streamable> p1) { return call_method<"insert_Streamable", void>(p1); }
	jni::ref<java::math::BigDecimal> extract_fixed() { return call_method<"extract_fixed", jni::ref<java::math::BigDecimal>>(); }
	void insert_fixed(jni::ref<java::math::BigDecimal> p1) { return call_method<"insert_fixed", void>(p1); }
	void insert_fixed(jni::ref<java::math::BigDecimal> p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"insert_fixed", void>(p1, p2); }

protected:

	Any(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_ANY
