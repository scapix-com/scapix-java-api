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

	static jlong MIN_VALUE() { return get_static_field<"MIN_VALUE", jlong>(); }
	static jlong MAX_VALUE() { return get_static_field<"MAX_VALUE", jlong>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jint BYTES() { return get_static_field<"BYTES", jint>(); }

	static jni::ref<java::lang::String> toString(jlong p1, jint p2) { return call_static_method<"toString", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> toUnsignedString(jlong p1, jint p2) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> toHexString(jlong p1) { return call_static_method<"toHexString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toOctalString(jlong p1) { return call_static_method<"toOctalString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toBinaryString(jlong p1) { return call_static_method<"toBinaryString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toString(jlong p1) { return call_static_method<"toString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> toUnsignedString(jlong p1) { return call_static_method<"toUnsignedString", jni::ref<java::lang::String>>(p1); }
	static jlong parseLong(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"parseLong", jlong>(p1, p2); }
	static jlong parseLong(jni::ref<java::lang::String> p1) { return call_static_method<"parseLong", jlong>(p1); }
	static jlong parseUnsignedLong(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"parseUnsignedLong", jlong>(p1, p2); }
	static jlong parseUnsignedLong(jni::ref<java::lang::String> p1) { return call_static_method<"parseUnsignedLong", jlong>(p1); }
	static jni::ref<java::lang::Long> valueOf(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(p1, p2); }
	static jni::ref<java::lang::Long> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(p1); }
	static jni::ref<java::lang::Long> valueOf(jlong p1) { return call_static_method<"valueOf", jni::ref<java::lang::Long>>(p1); }
	static jni::ref<java::lang::Long> decode(jni::ref<java::lang::String> p1) { return call_static_method<"decode", jni::ref<java::lang::Long>>(p1); }
	static jni::ref<java::lang::Long> new_object(jlong p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::Long> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jlong p1) { return call_static_method<"hashCode", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> p1) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(p1); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> p1, jlong p2) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(p1, p2); }
	static jni::ref<java::lang::Long> getLong(jni::ref<java::lang::String> p1, jni::ref<java::lang::Long> p2) { return call_static_method<"getLong", jni::ref<java::lang::Long>>(p1, p2); }
	jint compareTo(jni::ref<java::lang::Long> p1) { return call_method<"compareTo", jint>(p1); }
	static jint compare(jlong p1, jlong p2) { return call_static_method<"compare", jint>(p1, p2); }
	static jint compareUnsigned(jlong p1, jlong p2) { return call_static_method<"compareUnsigned", jint>(p1, p2); }
	static jlong divideUnsigned(jlong p1, jlong p2) { return call_static_method<"divideUnsigned", jlong>(p1, p2); }
	static jlong remainderUnsigned(jlong p1, jlong p2) { return call_static_method<"remainderUnsigned", jlong>(p1, p2); }
	static jlong highestOneBit(jlong p1) { return call_static_method<"highestOneBit", jlong>(p1); }
	static jlong lowestOneBit(jlong p1) { return call_static_method<"lowestOneBit", jlong>(p1); }
	static jint numberOfLeadingZeros(jlong p1) { return call_static_method<"numberOfLeadingZeros", jint>(p1); }
	static jint numberOfTrailingZeros(jlong p1) { return call_static_method<"numberOfTrailingZeros", jint>(p1); }
	static jint bitCount(jlong p1) { return call_static_method<"bitCount", jint>(p1); }
	static jlong rotateLeft(jlong p1, jint p2) { return call_static_method<"rotateLeft", jlong>(p1, p2); }
	static jlong rotateRight(jlong p1, jint p2) { return call_static_method<"rotateRight", jlong>(p1, p2); }
	static jlong reverse(jlong p1) { return call_static_method<"reverse", jlong>(p1); }
	static jint signum(jlong p1) { return call_static_method<"signum", jint>(p1); }
	static jlong reverseBytes(jlong p1) { return call_static_method<"reverseBytes", jlong>(p1); }
	static jlong sum(jlong p1, jlong p2) { return call_static_method<"sum", jlong>(p1, p2); }
	static jlong max(jlong p1, jlong p2) { return call_static_method<"max", jlong>(p1, p2); }
	static jlong min(jlong p1, jlong p2) { return call_static_method<"min", jlong>(p1, p2); }

protected:

	Long(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_LONG