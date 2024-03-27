// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/AttributeList.h>
#include <scapix/java_api/org/xml/sax/ext/Attributes2.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class AttributesProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::AttributesProxy>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/AttributesProxy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::AttributeList, scapix::java_api::org::xml::sax::ext::Attributes2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::AttributesProxy : public jni::object_base<"com/sun/org/apache/xerces/internal/util/AttributesProxy",
	java::lang::Object,
	org::xml::sax::AttributeList,
	org::xml::sax::ext::Attributes2>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::AttributesProxy> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p1) { return base_::new_object(p1); }
	void setAttributes(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p1) { return call_method<"setAttributes", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> getAttributes() { return call_method<"getAttributes", jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes>>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::String> getQName(jint p1) { return call_method<"getQName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getURI(jint p1) { return call_method<"getURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getLocalName(jint p1) { return call_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jint p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jni::ref<java::lang::String> p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getType", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getValue(jint p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getValue", jni::ref<java::lang::String>>(p1, p2); }
	jint getIndex(jni::ref<java::lang::String> p1) { return call_method<"getIndex", jint>(p1); }
	jint getIndex(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getIndex", jint>(p1, p2); }
	jboolean isDeclared(jint p1) { return call_method<"isDeclared", jboolean>(p1); }
	jboolean isDeclared(jni::ref<java::lang::String> p1) { return call_method<"isDeclared", jboolean>(p1); }
	jboolean isDeclared(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"isDeclared", jboolean>(p1, p2); }
	jboolean isSpecified(jint p1) { return call_method<"isSpecified", jboolean>(p1); }
	jboolean isSpecified(jni::ref<java::lang::String> p1) { return call_method<"isSpecified", jboolean>(p1); }
	jboolean isSpecified(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"isSpecified", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getName(jint p1) { return call_method<"getName", jni::ref<java::lang::String>>(p1); }

protected:

	AttributesProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_ATTRIBUTESPROXY