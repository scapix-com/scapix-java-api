// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class PropertyState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::PropertyState>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/PropertyState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/Status.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::PropertyState : public jni::object_base<"com/sun/org/apache/xerces/internal/util/PropertyState",
	java::lang::Object>
{
public:

	jni::ref<com::sun::org::apache::xerces::internal::util::Status> status() { return get_field<"status", jni::ref<com::sun::org::apache::xerces::internal::util::Status>>(); }
	jni::ref<java::lang::Object> state() { return get_field<"state", jni::ref<java::lang::Object>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> UNKNOWN() { return get_static_field<"UNKNOWN", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> RECOGNIZED() { return get_static_field<"RECOGNIZED", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> NOT_SUPPORTED() { return get_static_field<"NOT_SUPPORTED", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> NOT_RECOGNIZED() { return get_static_field<"NOT_RECOGNIZED", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> NOT_ALLOWED() { return get_static_field<"NOT_ALLOWED", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::Status> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> of(jni::ref<com::sun::org::apache::xerces::internal::util::Status> p1) { return call_static_method<"of", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> is(jni::ref<java::lang::Object> p1) { return call_static_method<"is", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(p1); }
	jboolean isExceptional() { return call_method<"isExceptional", jboolean>(); }

protected:

	PropertyState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_PROPERTYSTATE