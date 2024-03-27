// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/UnsafeQualifiedStaticFieldAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class UnsafeQualifiedStaticFloatFieldAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::UnsafeQualifiedStaticFloatFieldAccessorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/UnsafeQualifiedStaticFloatFieldAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::UnsafeQualifiedStaticFloatFieldAccessorImpl : public jni::object_base<"jdk/internal/reflect/UnsafeQualifiedStaticFloatFieldAccessorImpl",
	jdk::internal::reflect::UnsafeQualifiedStaticFieldAccessorImpl>
{
public:

	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> obj) { return call_method<"get", jni::ref<java::lang::Object>>(obj); }
	jboolean getBoolean(jni::ref<java::lang::Object> obj) { return call_method<"getBoolean", jboolean>(obj); }
	jbyte getByte(jni::ref<java::lang::Object> obj) { return call_method<"getByte", jbyte>(obj); }
	jchar getChar(jni::ref<java::lang::Object> obj) { return call_method<"getChar", jchar>(obj); }
	jshort getShort(jni::ref<java::lang::Object> obj) { return call_method<"getShort", jshort>(obj); }
	jint getInt(jni::ref<java::lang::Object> obj) { return call_method<"getInt", jint>(obj); }
	jlong getLong(jni::ref<java::lang::Object> obj) { return call_method<"getLong", jlong>(obj); }
	jfloat getFloat(jni::ref<java::lang::Object> obj) { return call_method<"getFloat", jfloat>(obj); }
	jdouble getDouble(jni::ref<java::lang::Object> obj) { return call_method<"getDouble", jdouble>(obj); }
	void set(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> value) { return call_method<"set", void>(obj, value); }
	void setBoolean(jni::ref<java::lang::Object> obj, jboolean z) { return call_method<"setBoolean", void>(obj, z); }
	void setByte(jni::ref<java::lang::Object> obj, jbyte b) { return call_method<"setByte", void>(obj, b); }
	void setChar(jni::ref<java::lang::Object> obj, jchar c) { return call_method<"setChar", void>(obj, c); }
	void setShort(jni::ref<java::lang::Object> obj, jshort s) { return call_method<"setShort", void>(obj, s); }
	void setInt(jni::ref<java::lang::Object> obj, jint i) { return call_method<"setInt", void>(obj, i); }
	void setLong(jni::ref<java::lang::Object> obj, jlong l) { return call_method<"setLong", void>(obj, l); }
	void setFloat(jni::ref<java::lang::Object> obj, jfloat f) { return call_method<"setFloat", void>(obj, f); }
	void setDouble(jni::ref<java::lang::Object> obj, jdouble d) { return call_method<"setDouble", void>(obj, d); }

protected:

	UnsafeQualifiedStaticFloatFieldAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_UNSAFEQUALIFIEDSTATICFLOATFIELDACCESSORIMPL
