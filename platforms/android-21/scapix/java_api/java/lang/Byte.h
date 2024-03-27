// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_BYTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_BYTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Byte; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Byte>
{
	static constexpr fixed_string class_name = "java/lang/Byte";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_BYTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_BYTE)
#define SCAPIX_JAVA_API_JAVA_LANG_BYTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Byte : public jni::object_base<"java/lang/Byte",
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jbyte MAX_VALUE() { return get_static_field<"MAX_VALUE", jbyte>(); }
	static jbyte MIN_VALUE() { return get_static_field<"MIN_VALUE", jbyte>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Byte> new_object(jbyte value) { return base_::new_object(value); }
	static jni::ref<java::lang::Byte> new_object(jni::ref<java::lang::String> string) { return base_::new_object(string); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jint compareTo(jni::ref<java::lang::Byte> object) { return call_method<"compareTo", jint>(object); }
	static jint compare(jbyte lhs, jbyte rhs) { return call_static_method<"compare", jint>(lhs, rhs); }
	static jni::ref<java::lang::Byte> decode(jni::ref<java::lang::String> string) { return call_static_method<"decode", jni::ref<java::lang::Byte>>(string); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	static jbyte parseByte(jni::ref<java::lang::String> string) { return call_static_method<"parseByte", jbyte>(string); }
	static jbyte parseByte(jni::ref<java::lang::String> string, jint radix) { return call_static_method<"parseByte", jbyte>(string, radix); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> toString(jbyte value) { return call_static_method<"toString", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::Byte> valueOf(jni::ref<java::lang::String> string) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(string); }
	static jni::ref<java::lang::Byte> valueOf(jni::ref<java::lang::String> string, jint radix) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(string, radix); }
	static jni::ref<java::lang::Byte> valueOf(jbyte b) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(b); }

protected:

	Byte(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_BYTE
