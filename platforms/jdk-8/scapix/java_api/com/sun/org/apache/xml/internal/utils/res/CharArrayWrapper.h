// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils::res { class CharArrayWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper : public jni::object_base<"com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper> new_object(jni::ref<jni::array<jchar>> p1) { return base_::new_object(p1); }
	jchar getChar(jint p1) { return call_method<"getChar", jchar>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }

protected:

	CharArrayWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_RES_CHARARRAYWRAPPER
