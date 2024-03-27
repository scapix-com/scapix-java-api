// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/AttributeList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::runtime { class Attributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::runtime::Attributes>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/runtime/Attributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::AttributeList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::runtime::Attributes : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/runtime/Attributes",
	java::lang::Object,
	org::xml::sax::AttributeList>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::Attributes> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p1, jint p2) { return base_::new_object(p1, p2); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::String> getName(jint p1) { return call_method<"getName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jint p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jni::ref<java::lang::String> p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jint p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }

protected:

	Attributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_ATTRIBUTES