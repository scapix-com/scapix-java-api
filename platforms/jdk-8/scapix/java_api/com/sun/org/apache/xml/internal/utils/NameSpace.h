// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class NameSpace; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::NameSpace>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/NameSpace";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::NameSpace : public jni::object_base<"com/sun/org/apache/xml/internal/utils/NameSpace",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<com::sun::org::apache::xml::internal::utils::NameSpace> m_next() { return get_field<"m_next", jni::ref<com::sun::org::apache::xml::internal::utils::NameSpace>>(); }
	void m_next(jni::ref<com::sun::org::apache::xml::internal::utils::NameSpace> v) { set_field<"m_next", jni::ref<com::sun::org::apache::xml::internal::utils::NameSpace>>(v); }
	jni::ref<java::lang::String> m_prefix() { return get_field<"m_prefix", jni::ref<java::lang::String>>(); }
	void m_prefix(jni::ref<java::lang::String> v) { set_field<"m_prefix", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> m_uri() { return get_field<"m_uri", jni::ref<java::lang::String>>(); }
	void m_uri(jni::ref<java::lang::String> v) { set_field<"m_uri", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::org::apache::xml::internal::utils::NameSpace> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	NameSpace(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NAMESPACE