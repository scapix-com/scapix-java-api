// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::beans { class TypeResolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::beans::TypeResolver>
{
	static constexpr fixed_string class_name = "com/sun/beans/TypeResolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER)
#define SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::beans::TypeResolver : public jni::object_base<"com/sun/beans/TypeResolver",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::beans::TypeResolver> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::reflect::Type> resolveInClass(jni::ref<java::lang::Class> p1, jni::ref<java::lang::reflect::Type> p2) { return call_static_method<"resolveInClass", jni::ref<java::lang::reflect::Type>>(p1, p2); }
	static jni::ref<jni::array<java::lang::reflect::Type>> resolveInClass(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::reflect::Type>> p2) { return call_static_method<"resolveInClass", jni::ref<jni::array<java::lang::reflect::Type>>>(p1, p2); }
	static jni::ref<java::lang::reflect::Type> resolve(jni::ref<java::lang::reflect::Type> p1, jni::ref<java::lang::reflect::Type> p2) { return call_static_method<"resolve", jni::ref<java::lang::reflect::Type>>(p1, p2); }
	static jni::ref<jni::array<java::lang::reflect::Type>> resolve(jni::ref<java::lang::reflect::Type> p1, jni::ref<jni::array<java::lang::reflect::Type>> p2) { return call_static_method<"resolve", jni::ref<jni::array<java::lang::reflect::Type>>>(p1, p2); }
	static jni::ref<java::lang::Class> erase(jni::ref<java::lang::reflect::Type> p1) { return call_static_method<"erase", jni::ref<java::lang::Class>>(p1); }
	static jni::ref<jni::array<java::lang::Class>> erase(jni::ref<jni::array<java::lang::reflect::Type>> p1) { return call_static_method<"erase", jni::ref<jni::array<java::lang::Class>>>(p1); }

protected:

	TypeResolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_BEANS_TYPERESOLVER