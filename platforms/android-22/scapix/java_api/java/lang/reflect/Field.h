// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/reflect/AccessibleObject.h>
#include <scapix/java_api/java/lang/reflect/Member.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Field; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Field>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Field";
	using base_classes = std::tuple<scapix::java_api::java::lang::reflect::AccessibleObject, scapix::java_api::java::lang::reflect::Member>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::Field : public jni::object_base<"java/lang/reflect/Field",
	java::lang::reflect::AccessibleObject,
	java::lang::reflect::Member>
{
public:

	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jboolean isEnumConstant() { return call_method<"isEnumConstant", jboolean>(); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> getDeclaringClass() { return call_method<"getDeclaringClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::Class> getType() { return call_method<"getType", jni::ref<java::lang::Class>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jni::ref<java::lang::String> toGenericString() { return call_method<"toGenericString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::reflect::Type> getGenericType() { return call_method<"getGenericType", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotations() { return call_method<"getDeclaredAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> annotationType) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(annotationType); }
	jboolean isAnnotationPresent(jni::ref<java::lang::Class> annotationType) { return call_method<"isAnnotationPresent", jboolean>(annotationType); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> object) { return call_method<"get", jni::ref<java::lang::Object>>(object); }
	jboolean getBoolean(jni::ref<java::lang::Object> object) { return call_method<"getBoolean", jboolean>(object); }
	jbyte getByte(jni::ref<java::lang::Object> object) { return call_method<"getByte", jbyte>(object); }
	jchar getChar(jni::ref<java::lang::Object> object) { return call_method<"getChar", jchar>(object); }
	jdouble getDouble(jni::ref<java::lang::Object> object) { return call_method<"getDouble", jdouble>(object); }
	jfloat getFloat(jni::ref<java::lang::Object> object) { return call_method<"getFloat", jfloat>(object); }
	jint getInt(jni::ref<java::lang::Object> object) { return call_method<"getInt", jint>(object); }
	jlong getLong(jni::ref<java::lang::Object> object) { return call_method<"getLong", jlong>(object); }
	jshort getShort(jni::ref<java::lang::Object> object) { return call_method<"getShort", jshort>(object); }
	void set(jni::ref<java::lang::Object> object, jni::ref<java::lang::Object> value) { return call_method<"set", void>(object, value); }
	void setBoolean(jni::ref<java::lang::Object> object, jboolean value) { return call_method<"setBoolean", void>(object, value); }
	void setByte(jni::ref<java::lang::Object> object, jbyte value) { return call_method<"setByte", void>(object, value); }
	void setChar(jni::ref<java::lang::Object> object, jchar value) { return call_method<"setChar", void>(object, value); }
	void setDouble(jni::ref<java::lang::Object> object, jdouble value) { return call_method<"setDouble", void>(object, value); }
	void setFloat(jni::ref<java::lang::Object> object, jfloat value) { return call_method<"setFloat", void>(object, value); }
	void setInt(jni::ref<java::lang::Object> object, jint value) { return call_method<"setInt", void>(object, value); }
	void setLong(jni::ref<java::lang::Object> object, jlong value) { return call_method<"setLong", void>(object, value); }
	void setShort(jni::ref<java::lang::Object> object, jshort value) { return call_method<"setShort", void>(object, value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Field(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_FIELD