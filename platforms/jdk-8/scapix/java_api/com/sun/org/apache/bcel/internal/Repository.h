// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal { class Repository; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::Repository>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/Repository";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/util/Repository.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::Repository : public jni::object_base<"com/sun/org/apache/bcel/internal/Repository",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::Repository> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> addClass(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_static_method<"addClass", jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass>>(p1); }
	static void clearCache() { return call_static_method<"clearCache", void>(); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>> getInterfaces(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_static_method<"getInterfaces", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>>>(p1); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>> getInterfaces(jni::ref<java::lang::String> p1) { return call_static_method<"getInterfaces", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::util::Repository> getRepository() { return call_static_method<"getRepository", jni::ref<com::sun::org::apache::bcel::internal::util::Repository>>(); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>> getSuperClasses(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_static_method<"getSuperClasses", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>>>(p1); }
	static jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>> getSuperClasses(jni::ref<java::lang::String> p1) { return call_static_method<"getSuperClasses", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::JavaClass>>>(p1); }
	static jboolean implementationOf(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p2) { return call_static_method<"implementationOf", jboolean>(p1, p2); }
	static jboolean implementationOf(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1, jni::ref<java::lang::String> p2) { return call_static_method<"implementationOf", jboolean>(p1, p2); }
	static jboolean implementationOf(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p2) { return call_static_method<"implementationOf", jboolean>(p1, p2); }
	static jboolean implementationOf(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"implementationOf", jboolean>(p1, p2); }
	static jboolean instanceOf(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p2) { return call_static_method<"instanceOf", jboolean>(p1, p2); }
	static jboolean instanceOf(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1, jni::ref<java::lang::String> p2) { return call_static_method<"instanceOf", jboolean>(p1, p2); }
	static jboolean instanceOf(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p2) { return call_static_method<"instanceOf", jboolean>(p1, p2); }
	static jboolean instanceOf(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"instanceOf", jboolean>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> lookupClass(jni::ref<java::lang::Class> p1) { return call_static_method<"lookupClass", jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> lookupClass(jni::ref<java::lang::String> p1) { return call_static_method<"lookupClass", jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass>>(p1); }
	static void removeClass(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return call_static_method<"removeClass", void>(p1); }
	static void removeClass(jni::ref<java::lang::String> p1) { return call_static_method<"removeClass", void>(p1); }
	static void setRepository(jni::ref<com::sun::org::apache::bcel::internal::util::Repository> p1) { return call_static_method<"setRepository", void>(p1); }

protected:

	Repository(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_REPOSITORY
