// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SHORT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SHORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Short; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Short>
{
	static constexpr fixed_string class_name = "java/lang/Short";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SHORT)
#define SCAPIX_JAVA_API_JAVA_LANG_SHORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Short : public jni::object_base<"java/lang/Short",
	java::lang::Number,
	java::lang::Comparable>
{
public:

	static jint BYTES() { return get_static_field<"BYTES", jint>(); }
	static jshort MAX_VALUE() { return get_static_field<"MAX_VALUE", jshort>(); }
	static jshort MIN_VALUE() { return get_static_field<"MIN_VALUE", jshort>(); }
	static jint SIZE() { return get_static_field<"SIZE", jint>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Short> new_object(jshort value) { return base_::new_object(value); }
	static jni::ref<java::lang::Short> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }
	static jni::ref<java::lang::String> toString(jshort s) { return call_static_method<"toString", jni::ref<java::lang::String>>(s); }
	static jshort parseShort(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"parseShort", jshort>(s, radix); }
	static jshort parseShort(jni::ref<java::lang::String> s) { return call_static_method<"parseShort", jshort>(s); }
	static jni::ref<java::lang::Short> valueOf(jni::ref<java::lang::String> s, jint radix) { return call_static_method<"valueOf", jni::ref<java::lang::Short>>(s, radix); }
	static jni::ref<java::lang::Short> valueOf(jni::ref<java::lang::String> s) { return call_static_method<"valueOf", jni::ref<java::lang::Short>>(s); }
	static jni::ref<java::lang::Short> valueOf(jshort s) { return call_static_method<"valueOf", jni::ref<java::lang::Short>>(s); }
	static jni::ref<java::lang::Short> decode(jni::ref<java::lang::String> nm) { return call_static_method<"decode", jni::ref<java::lang::Short>>(nm); }
	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jshort value) { return call_static_method<"hashCode", jint>(value); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint compareTo(jni::ref<java::lang::Short> anotherShort) { return call_method<"compareTo", jint>(anotherShort); }
	static jint compare(jshort x, jshort y) { return call_static_method<"compare", jint>(x, y); }
	static jshort reverseBytes(jshort i) { return call_static_method<"reverseBytes", jshort>(i); }
	static jint toUnsignedInt(jshort x) { return call_static_method<"toUnsignedInt", jint>(x); }
	static jlong toUnsignedLong(jshort x) { return call_static_method<"toUnsignedLong", jlong>(x); }

protected:

	Short(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SHORT
