// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_LONG_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_LONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Long; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Long>
{
	static constexpr fixed_string class_name = "java/lang/Long";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_LONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_LONG)
#define SCAPIX_JAVA_API_JAVA_LANG_LONG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Long : public jni::object_base<"java/lang/Long",
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jint BYTES() { return get_static_field<"BYTES", jint>(); }
	static jlong MAX_VALUE() { return get_static_field<"MAX_VALUE", jlong>(); }
	static jlong MIN_VALUE() { return get_static_field<"MIN_VALUE", jlong>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Long> new_object(jlong value) { return base_::new_object(value); }
	static jni::ref<java::lang::Long> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::lang::String> toString(jlong i, jint p2) { return call_static_method<"toString", jni::ref<java::lang::String>>(i, p2); }
	static jni::ref<java::lang::String> toUnsignedString(jlong i, jint p2) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(i, p2); }
	static jni::ref<java::lang::String> toHexString(jlong i) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toOctalString(jlong i) { return call_static_method<"toOctalString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toBinaryString(jlong i) { return call_static_method<"toBinaryString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toString(jlong i) { return call_static_method<"toString", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> toUnsignedString(jlong i) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(i); }
	static jlong parseLong(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseLong", jlong>(s, radix); }
	static jlong parseLong(jni::ref<java::lang::String> s) { return call_static_method<"parseLong", jlong>(s); }
	static jlong parseUnsignedLong(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseUnsignedLong", jlong>(s, radix); }
	static jlong parseUnsignedLong(jni::ref<java::lang::String> s) { return call_static_method<"parseUnsignedLong", jlong>(s); }
	static jni::ref<java::lang::Long> valueOf(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(s, radix); }
	static jni::ref<java::lang::Long> valueOf(jni::ref<java::lang::String> s) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(s); }
	static jni::ref<java::lang::Long> valueOf(jlong l) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(l); }
	static jni::ref<java::lang::Long> decode(jni::ref<java::lang::String> nm) { return call_static_method<"decode", jni::ref<java::lang::Long>>(nm); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jlong value) { return call_static_method<"hashCode", jint>(value); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> nm) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(nm); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> nm, jlong val) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(nm, val); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> nm, jni::ref<java::lang::Long> val) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(nm, val); }
	jint compareTo(jni::ref<java::lang::Long> anotherLong) { return call_method<"compareTo", jint>(anotherLong); }
	static jint compare(jlong x, jlong p2) { return call_static_method<"compare", jint>(x, p2); }
	static jint compareUnsigned(jlong x, jlong p2) { return call_static_method<"compareUnsigned", jint>(x, p2); }
	static jlong divideUnsigned(jlong dividend, jlong p2) { return call_static_method<"divideUnsigned", jlong>(dividend, p2); }
	static jlong remainderUnsigned(jlong dividend, jlong p2) { return call_static_method<"remainderUnsigned", jlong>(dividend, p2); }
	static jlong highestOneBit(jlong i) { return call_static_method<"highestOneBit", jlong>(i); }
	static jlong lowestOneBit(jlong i) { return call_static_method<"lowestOneBit", jlong>(i); }
	static jint numberOfLeadingZeros(jlong i) { return call_static_method<"numberOfLeadingZeros", jint>(i); }
	static jint numberOfTrailingZeros(jlong i) { return call_static_method<"numberOfTrailingZeros", jint>(i); }
	static jint bitCount(jlong i) { return call_static_method<"bitCount", jint>(i); }
	static jlong rotateLeft(jlong i, jint p2) { return call_static_method<"rotateLeft", jlong>(i, p2); }
	static jlong rotateRight(jlong i, jint p2) { return call_static_method<"rotateRight", jlong>(i, p2); }
	static jlong reverse(jlong i) { return call_static_method<"reverse", jlong>(i); }
	static jint signum(jlong i) { return call_static_method<"signum", jint>(i); }
	static jlong reverseBytes(jlong i) { return call_static_method<"reverseBytes", jlong>(i); }
	static jlong sum(jlong a, jlong p2) { return call_static_method<"sum", jlong>(a, p2); }
	static jlong max(jlong a, jlong p2) { return call_static_method<"max", jlong>(a, p2); }
	static jlong min(jlong a, jlong p2) { return call_static_method<"min", jlong>(a, p2); }

protected:

	Long(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_LONG
