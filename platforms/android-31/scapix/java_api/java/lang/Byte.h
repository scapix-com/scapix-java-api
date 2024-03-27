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

	static jint BYTES() { return get_static_field<"BYTES", jint>(); }
	static jbyte MAX_VALUE() { return get_static_field<"MAX_VALUE", jbyte>(); }
	static jbyte MIN_VALUE() { return get_static_field<"MIN_VALUE", jbyte>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Byte> new_object(jbyte value) { return base_::new_object(value); }
	static jni::ref<java::lang::Byte> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::lang::String> toString(jbyte b) { return call_static_method<"toString", jni::ref<java::lang::String>>(b); }
	static jni::ref<java::lang::Byte> valueOf(jbyte b) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(b); }
	static jbyte parseByte(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseByte", jbyte>(s, radix); }
	static jbyte parseByte(jni::ref<java::lang::String> s) { return call_static_method<"parseByte", jbyte>(s); }
	static jni::ref<java::lang::Byte> valueOf(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(s, radix); }
	static jni::ref<java::lang::Byte> valueOf(jni::ref<java::lang::String> s) { return call_static_method<"valueOf", jni::ref<java::lang::Byte>>(s); }
	static jni::ref<java::lang::Byte> decode(jni::ref<java::lang::String> nm) { return call_static_method<"decode", jni::ref<java::lang::Byte>>(nm); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jbyte value) { return call_static_method<"hashCode", jint>(value); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint compareTo(jni::ref<java::lang::Byte> anotherByte) { return call_method<"compareTo", jint>(anotherByte); }
	static jint compare(jbyte x, jbyte y) { return call_static_method<"compare", jint>(x, y); }
	static jint compareUnsigned(jbyte x, jbyte y) { return call_static_method<"compareUnsigned", jint>(x, y); }
	static jint toUnsignedInt(jbyte x) { return call_static_method<"toUnsignedInt", jint>(x); }
	static jlong toUnsignedLong(jbyte x) { return call_static_method<"toUnsignedLong", jlong>(x); }

protected:

	Byte(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_BYTE
