// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Boolean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Boolean>
{
	static constexpr fixed_string class_name = "java/lang/Boolean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN)
#define SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Boolean : public jni::object_base<"java/lang/Boolean",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static jni::ref<java::lang::Boolean> TRUE() { return get_static_field<"TRUE", jni::ref<java::lang::Boolean>>(); }
	static jni::ref<java::lang::Boolean> FALSE() { return get_static_field<"FALSE", jni::ref<java::lang::Boolean>>(); }
	static jni::ref<java::lang::Class> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::Class>>(); }

	static jni::ref<java::lang::Boolean> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<java::lang::Boolean> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jboolean parseBoolean(jni::ref<java::lang::String> p1) { return call_static_method<"parseBoolean", jboolean>(p1); }
	jboolean booleanValue() { return call_method<"booleanValue", jboolean>(); }
	static jni::ref<java::lang::Boolean> valueOf(jboolean p1) { return call_static_method<"valueOf", jni::ref<java::lang::Boolean>>(p1); }
	static jni::ref<java::lang::Boolean> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::lang::Boolean>>(p1); }
	static jni::ref<java::lang::String> toString(jboolean p1) { return call_static_method<"toString", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jint hashCode(jboolean p1) { return call_static_method<"hashCode", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	static jboolean getBoolean(jni::ref<java::lang::String> p1) { return call_static_method<"getBoolean", jboolean>(p1); }
	jint compareTo(jni::ref<java::lang::Boolean> p1) { return call_method<"compareTo", jint>(p1); }
	static jint compare(jboolean p1, jboolean p2) { return call_static_method<"compare", jint>(p1, p2); }
	static jboolean logicalAnd(jboolean p1, jboolean p2) { return call_static_method<"logicalAnd", jboolean>(p1, p2); }
	static jboolean logicalOr(jboolean p1, jboolean p2) { return call_static_method<"logicalOr", jboolean>(p1, p2); }
	static jboolean logicalXor(jboolean p1, jboolean p2) { return call_static_method<"logicalXor", jboolean>(p1, p2); }

protected:

	Boolean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_BOOLEAN
