// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils::res { class XResources_ja_JP_HI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::res::XResources_ja_JP_HI>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/res/XResources_ja_JP_HI";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::utils::res::XResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::res::XResources_ja_JP_HI : public jni::object_base<"com/sun/org/apache/xml/internal/utils/res/XResources_ja_JP_HI",
	com::sun::org::apache::xml::internal::utils::res::XResourceBundle>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::res::XResources_ja_JP_HI> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jni::array<java::lang::Object>>> getContents() { return call_method<"getContents", jni::ref<jni::array<jni::array<java::lang::Object>>>>(); }

protected:

	XResources_ja_JP_HI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_XRESOURCES_JA_JP_HI