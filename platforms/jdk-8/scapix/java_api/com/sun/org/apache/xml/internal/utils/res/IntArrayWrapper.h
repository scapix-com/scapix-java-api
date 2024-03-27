// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils::res { class IntArrayWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::res::IntArrayWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/res/IntArrayWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::res::IntArrayWrapper : public jni::object_base<"com/sun/org/apache/xml/internal/utils/res/IntArrayWrapper",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::res::IntArrayWrapper> new_object(jni::ref<jni::array<jint>> p1) { return base_::new_object(p1); }
	jint getInt(jint p1) { return call_method<"getInt", jint>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }

protected:

	IntArrayWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_INTARRAYWRAPPER
