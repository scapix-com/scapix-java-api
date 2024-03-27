// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Array; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Array>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Array";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::Array : public jni::object_base<"java/lang/reflect/Array",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> newInstance(jni::ref<java::lang::Class> componentType, jint length) { return call_static_method<"newInstance", jni::ref<java::lang::Object>>(componentType, length); }
	static jni::ref<java::lang::Object> newInstance(jni::ref<java::lang::Class> componentType, jni::ref<jni::array<jint>> dimensions) { return call_static_method<"newInstance", jni::ref<java::lang::Object>>(componentType, dimensions); }
	static jint getLength(jni::ref<java::lang::Object> array) { return call_static_method<"getLength", jint>(array); }
	static jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"get", jni::ref<java::lang::Object>>(array, index); }
	static jboolean getBoolean(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getBoolean", jboolean>(array, index); }
	static jbyte getByte(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getByte", jbyte>(array, index); }
	static jchar getChar(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getChar", jchar>(array, index); }
	static jshort getShort(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getShort", jshort>(array, index); }
	static jint getInt(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getInt", jint>(array, index); }
	static jlong getLong(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getLong", jlong>(array, index); }
	static jfloat getFloat(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getFloat", jfloat>(array, index); }
	static jdouble getDouble(jni::ref<java::lang::Object> array, jint index) { return call_static_method<"getDouble", jdouble>(array, index); }
	static void set(jni::ref<java::lang::Object> array, jint index, jni::ref<java::lang::Object> value) { return call_static_method<"set", void>(array, index, value); }
	static void setBoolean(jni::ref<java::lang::Object> array, jint index, jboolean z) { return call_static_method<"setBoolean", void>(array, index, z); }
	static void setByte(jni::ref<java::lang::Object> array, jint index, jbyte b) { return call_static_method<"setByte", void>(array, index, b); }
	static void setChar(jni::ref<java::lang::Object> array, jint index, jchar c) { return call_static_method<"setChar", void>(array, index, c); }
	static void setShort(jni::ref<java::lang::Object> array, jint index, jshort s) { return call_static_method<"setShort", void>(array, index, s); }
	static void setInt(jni::ref<java::lang::Object> array, jint index, jint i) { return call_static_method<"setInt", void>(array, index, i); }
	static void setLong(jni::ref<java::lang::Object> array, jint index, jlong l) { return call_static_method<"setLong", void>(array, index, l); }
	static void setFloat(jni::ref<java::lang::Object> array, jint index, jfloat f) { return call_static_method<"setFloat", void>(array, index, f); }
	static void setDouble(jni::ref<java::lang::Object> array, jint index, jdouble d) { return call_static_method<"setDouble", void>(array, index, d); }

protected:

	Array(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ARRAY
