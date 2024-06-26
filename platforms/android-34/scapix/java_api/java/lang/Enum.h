// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ENUM_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ENUM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Enum; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Enum>
{
	static constexpr fixed_string class_name = "java/lang/Enum";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ENUM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ENUM)
#define SCAPIX_JAVA_API_JAVA_LANG_ENUM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Enum : public jni::object_base<"java/lang/Enum",
	java::lang::Object,
	java::lang::Comparable,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jint ordinal() { return call_method<"ordinal", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<java::lang::Enum> o) { return call_method<"compareTo", jint>(o); }
	jni::ref<java::lang::Class> getDeclaringClass() { return call_method<"getDeclaringClass", jni::ref<java::lang::Class>>(); }
	static jni::ref<java::lang::Enum> valueOf(jni::ref<java::lang::Class> enumClass, jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::Enum>>(enumClass, name); }

protected:

	Enum(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ENUM
