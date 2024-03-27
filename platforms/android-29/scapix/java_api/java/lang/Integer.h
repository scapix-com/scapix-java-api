// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INTEGER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INTEGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Integer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Integer>
{
	static constexpr fixed_string class_name = "java/lang/Integer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INTEGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INTEGER)
#define SCAPIX_JAVA_API_JAVA_LANG_INTEGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Integer : public jni::object_base<"java/lang/Integer",
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jint BYTES() { return get_static_field<"BYTES", jint>(); }
	static jint MAX_VALUE() { return get_static_field<"MAX_VALUE", jint>(); }
	static jint MIN_VALUE() { return get_static_field<"MIN_VALUE", jint>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Integer> new_object(jint value) { return base_::new_object(value); }
	static jni::ref<java::lang::Integer> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::lang::String> toString(jint i, jint radix) { return call_static_method<"toString", jni::ref<java::lang::String>>(i, radix); }
	static jni::ref<java::lang::String> toUnsignedString(jint i, jint radix) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(i, radix); }
	static jni::ref<java::lang::String> toHexString(jint i) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toOctalString(jint i) { return call_static_method<"toOctalString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toBinaryString(jint i) { return call_static_method<"toBinaryString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toString(jint i) { return call_static_method<"toString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toUnsignedString(jint i) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(i); }
	static jint parseInt(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseInt", jint>(s, radix); }
	static jint parseInt(jni::ref<java::lang::String> s) { return call_static_method<"parseInt", jint>(s); }
	static jint parseUnsignedInt(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseUnsignedInt", jint>(s, radix); }
	static jint parseUnsignedInt(jni::ref<java::lang::String> s) { return call_static_method<"parseUnsignedInt", jint>(s); }
	static jni::ref<java::lang::Integer> valueOf(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"valueOf", jni::ref<java::lang::Integer>>(s, radix); }
	static jni::ref<java::lang::Integer> valueOf(jni::ref<java::lang::String> s) { return call_static_method<"valueOf", jni::ref<java::lang::Integer>>(s); }
	static jni::ref<java::lang::Integer> valueOf(jint i) { return call_static_method<"valueOf", jni::ref<java::lang::Integer>>(i); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jint value) { return call_static_method<"hashCode", jint>(value); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	static jni::ref<java::lang::Integer> getInteger(jni::ref<java::lang::String> nm) { return call_static_method<"getInteger", jni::ref<java::lang::Integer>>(nm); }
	static jni::ref<java::lang::Integer> getInteger(jni::ref<java::lang::String> nm, jint val) { return call_static_method<"getInteger", jni::ref<java::lang::Integer>>(nm, val); }
	static jni::ref<java::lang::Integer> getInteger(jni::ref<java::lang::String> nm, jni::ref<java::lang::Integer> val) { return call_static_method<"getInteger", jni::ref<java::lang::Integer>>(nm, val); }
	static jni::ref<java::lang::Integer> decode(jni::ref<java::lang::String> nm) { return call_static_method<"decode", jni::ref<java::lang::Integer>>(nm); }
	jint compareTo(jni::ref<java::lang::Integer> anotherInteger) { return call_method<"compareTo", jint>(anotherInteger); }
	static jint compare(jint x, jint y) { return call_static_method<"compare", jint>(x, y); }
	static jint compareUnsigned(jint x, jint y) { return call_static_method<"compareUnsigned", jint>(x, y); }
	static jlong toUnsignedLong(jint x) { return call_static_method<"toUnsignedLong", jlong>(x); }
	static jint divideUnsigned(jint dividend, jint divisor) { return call_static_method<"divideUnsigned", jint>(dividend, divisor); }
	static jint remainderUnsigned(jint dividend, jint divisor) { return call_static_method<"remainderUnsigned", jint>(dividend, divisor); }
	static jint highestOneBit(jint i) { return call_static_method<"highestOneBit", jint>(i); }
	static jint lowestOneBit(jint i) { return call_static_method<"lowestOneBit", jint>(i); }
	static jint numberOfLeadingZeros(jint i) { return call_static_method<"numberOfLeadingZeros", jint>(i); }
	static jint numberOfTrailingZeros(jint i) { return call_static_method<"numberOfTrailingZeros", jint>(i); }
	static jint bitCount(jint i) { return call_static_method<"bitCount", jint>(i); }
	static jint rotateLeft(jint i, jint distance) { return call_static_method<"rotateLeft", jint>(i, distance); }
	static jint rotateRight(jint i, jint distance) { return call_static_method<"rotateRight", jint>(i, distance); }
	static jint reverse(jint i) { return call_static_method<"reverse", jint>(i); }
	static jint signum(jint i) { return call_static_method<"signum", jint>(i); }
	static jint reverseBytes(jint i) { return call_static_method<"reverseBytes", jint>(i); }
	static jint sum(jint a, jint b) { return call_static_method<"sum", jint>(a, b); }
	static jint max(jint a, jint b) { return call_static_method<"max", jint>(a, b); }
	static jint min(jint a, jint b) { return call_static_method<"min", jint>(a, b); }

protected:

	Integer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INTEGER
