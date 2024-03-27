// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class ArraysSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::ArraysSupport>
{
	static constexpr fixed_string class_name = "jdk/internal/util/ArraysSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::ArraysSupport : public jni::object_base<"jdk/internal/util/ArraysSupport",
	java::lang::Object>
{
public:

	static jint LOG2_ARRAY_BOOLEAN_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_BOOLEAN_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_BYTE_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_BYTE_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_CHAR_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_CHAR_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_SHORT_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_SHORT_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_INT_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_INT_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_LONG_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_LONG_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_FLOAT_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_FLOAT_INDEX_SCALE", jint>(); }
	static jint LOG2_ARRAY_DOUBLE_INDEX_SCALE() { return get_static_field<"LOG2_ARRAY_DOUBLE_INDEX_SCALE", jint>(); }
	static jint T_BOOLEAN() { return get_static_field<"T_BOOLEAN", jint>(); }
	static jint T_CHAR() { return get_static_field<"T_CHAR", jint>(); }
	static jint T_FLOAT() { return get_static_field<"T_FLOAT", jint>(); }
	static jint T_DOUBLE() { return get_static_field<"T_DOUBLE", jint>(); }
	static jint T_BYTE() { return get_static_field<"T_BYTE", jint>(); }
	static jint T_SHORT() { return get_static_field<"T_SHORT", jint>(); }
	static jint T_INT() { return get_static_field<"T_INT", jint>(); }
	static jint T_LONG() { return get_static_field<"T_LONG", jint>(); }
	static jint SOFT_MAX_ARRAY_LENGTH() { return get_static_field<"SOFT_MAX_ARRAY_LENGTH", jint>(); }

	static jint vectorizedMismatch(jni::ref<java::lang::Object> a, jlong aOffset, jni::ref<java::lang::Object> p3, jlong b, jint bOffset, jint p6) { return call_static_method<"vectorizedMismatch", jint>(a, aOffset, p3, b, bOffset, p6); }
	static jint vectorizedHashCode(jni::ref<java::lang::Object> array, jint fromIndex, jint length, jint initialValue, jint basicType) { return call_static_method<"vectorizedHashCode", jint>(array, fromIndex, length, initialValue, basicType); }
	static jint utf16hashCode(jint result, jni::ref<jni::array<jbyte>> value, jint fromIndex, jint length) { return call_static_method<"utf16hashCode", jint>(result, value, fromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jboolean>> a, jni::ref<jni::array<jboolean>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jboolean>> a, jint aFromIndex, jni::ref<jni::array<jboolean>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jbyte>> a, jni::ref<jni::array<jbyte>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jbyte>> a, jint aFromIndex, jni::ref<jni::array<jbyte>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jchar>> a, jni::ref<jni::array<jchar>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jchar>> a, jint aFromIndex, jni::ref<jni::array<jchar>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jshort>> a, jni::ref<jni::array<jshort>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jshort>> a, jint aFromIndex, jni::ref<jni::array<jshort>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jint>> a, jni::ref<jni::array<jint>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jint>> a, jint aFromIndex, jni::ref<jni::array<jint>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jfloat>> a, jni::ref<jni::array<jfloat>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jfloat>> a, jint aFromIndex, jni::ref<jni::array<jfloat>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jlong>> a, jni::ref<jni::array<jlong>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jlong>> a, jint aFromIndex, jni::ref<jni::array<jlong>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint mismatch(jni::ref<jni::array<jdouble>> a, jni::ref<jni::array<jdouble>> b, jint length) { return call_static_method<"mismatch", jint>(a, b, length); }
	static jint mismatch(jni::ref<jni::array<jdouble>> a, jint aFromIndex, jni::ref<jni::array<jdouble>> b, jint bFromIndex, jint length) { return call_static_method<"mismatch", jint>(a, aFromIndex, b, bFromIndex, length); }
	static jint newLength(jint oldLength, jint minGrowth, jint prefGrowth) { return call_static_method<"newLength", jint>(oldLength, minGrowth, prefGrowth); }
	static jni::ref<jni::array<java::lang::Object>> reverse(jni::ref<jni::array<java::lang::Object>> a) { return call_static_method<"reverse", jni::ref<jni::array<java::lang::Object>>>(a); }
	static jni::ref<jni::array<java::lang::Object>> toArrayReversed(jni::ref<java::util::Collection> coll, jni::ref<jni::array<java::lang::Object>> array) { return call_static_method<"toArrayReversed", jni::ref<jni::array<java::lang::Object>>>(coll, array); }

protected:

	ArraysSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_ARRAYSSUPPORT