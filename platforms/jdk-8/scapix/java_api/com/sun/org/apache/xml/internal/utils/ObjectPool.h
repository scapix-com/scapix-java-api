// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class ObjectPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::ObjectPool>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/ObjectPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::ObjectPool : public jni::object_base<"com/sun/org/apache/xml/internal/utils/ObjectPool",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::ObjectPool> new_object(jni::ref<java::lang::Class> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::ObjectPool> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::ObjectPool> new_object(jni::ref<java::lang::Class> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::ObjectPool> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> getInstanceIfFree() { return call_method<"getInstanceIfFree", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getInstance() { return call_method<"getInstance", jni::ref<java::lang::Object>>(); }
	void freeInstance(jni::ref<java::lang::Object> p1) { return call_method<"freeInstance", void>(p1); }

protected:

	ObjectPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_OBJECTPOOL