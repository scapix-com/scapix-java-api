// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ReferenceType.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ObjectType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ObjectType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ObjectType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ReferenceType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ObjectType : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ObjectType",
	com::sun::org::apache::bcel::internal::generic::ReferenceType>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean accessibleTo(jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> p1) { return call_method<"accessibleTo", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean referencesClass() { return call_method<"referencesClass", jboolean>(); }
	jboolean referencesClassExact() { return call_method<"referencesClassExact", jboolean>(); }
	jboolean referencesInterface() { return call_method<"referencesInterface", jboolean>(); }
	jboolean referencesInterfaceExact() { return call_method<"referencesInterfaceExact", jboolean>(); }
	jboolean subclassOf(jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> p1) { return call_method<"subclassOf", jboolean>(p1); }

protected:

	ObjectType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_OBJECTTYPE
