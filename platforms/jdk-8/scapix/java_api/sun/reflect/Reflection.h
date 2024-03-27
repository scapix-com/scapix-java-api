// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class Reflection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::Reflection>
{
	static constexpr fixed_string class_name = "sun/reflect/Reflection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION)
#define SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Field.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::Reflection : public jni::object_base<"sun/reflect/Reflection",
	java::lang::Object>
{
public:

	static jni::ref<sun::reflect::Reflection> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::Class> getCallerClass() { return call_static_method<"getCallerClass", jni::ref<java::lang::Class>>(); }
	static jni::ref<java::lang::Class> getCallerClass(jint p1) { return call_static_method<"getCallerClass", jni::ref<java::lang::Class>>(p1); }
	static jint getClassAccessFlags(jni::ref<java::lang::Class> p1) { return call_static_method<"getClassAccessFlags", jint>(p1); }
	static jboolean quickCheckMemberAccess(jni::ref<java::lang::Class> p1, jint p2) { return call_static_method<"quickCheckMemberAccess", jboolean>(p1, p2); }
	static void ensureMemberAccess(jni::ref<java::lang::Class> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::Object> p3, jint p4) { return call_static_method<"ensureMemberAccess", void>(p1, p2, p3, p4); }
	static jboolean verifyMemberAccess(jni::ref<java::lang::Class> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::Object> p3, jint p4) { return call_static_method<"verifyMemberAccess", jboolean>(p1, p2, p3, p4); }
	static void registerFieldsToFilter(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"registerFieldsToFilter", void>(p1, p2); }
	static void registerMethodsToFilter(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_static_method<"registerMethodsToFilter", void>(p1, p2); }
	static jni::ref<jni::array<java::lang::reflect::Field>> filterFields(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::reflect::Field>> p2) { return call_static_method<"filterFields", jni::ref<jni::array<java::lang::reflect::Field>>>(p1, p2); }
	static jni::ref<jni::array<java::lang::reflect::Method>> filterMethods(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::reflect::Method>> p2) { return call_static_method<"filterMethods", jni::ref<jni::array<java::lang::reflect::Method>>>(p1, p2); }
	static jboolean isCallerSensitive(jni::ref<java::lang::reflect::Method> p1) { return call_static_method<"isCallerSensitive", jboolean>(p1); }

protected:

	Reflection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_REFLECTION
