// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class NSInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::NSInfo>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/NSInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::NSInfo : public jni::object_base<"com/sun/org/apache/xml/internal/utils/NSInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> m_namespace() { return get_field<"m_namespace", jni::ref<java::lang::String>>(); }
	void m_namespace(jni::ref<java::lang::String> v) { set_field<"m_namespace", jni::ref<java::lang::String>>(v); }
	jboolean m_hasXMLNSAttrs() { return get_field<"m_hasXMLNSAttrs", jboolean>(); }
	void m_hasXMLNSAttrs(jboolean v) { set_field<"m_hasXMLNSAttrs", jboolean>(v); }
	jboolean m_hasProcessedNS() { return get_field<"m_hasProcessedNS", jboolean>(); }
	void m_hasProcessedNS(jboolean v) { set_field<"m_hasProcessedNS", jboolean>(v); }
	jint m_ancestorHasXMLNSAttrs() { return get_field<"m_ancestorHasXMLNSAttrs", jint>(); }
	void m_ancestorHasXMLNSAttrs(jint v) { set_field<"m_ancestorHasXMLNSAttrs", jint>(v); }
	static jint ANCESTORXMLNSUNPROCESSED() { return get_static_field<"ANCESTORXMLNSUNPROCESSED", jint>(); }
	static jint ANCESTORHASXMLNS() { return get_static_field<"ANCESTORHASXMLNS", jint>(); }
	static jint ANCESTORNOXMLNS() { return get_static_field<"ANCESTORNOXMLNS", jint>(); }

	static jni::ref<com::sun::org::apache::xml::internal::utils::NSInfo> new_object(jboolean p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::NSInfo> new_object(jboolean p1, jboolean p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::NSInfo> new_object(jni::ref<java::lang::String> p1, jboolean p2) { return base_::new_object(p1, p2); }

protected:

	NSInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_NSINFO
