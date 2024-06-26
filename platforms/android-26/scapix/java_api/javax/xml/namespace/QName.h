// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::namespace_ { class QName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::namespace_::QName>
{
	static constexpr fixed_string class_name = "javax/xml/namespace/QName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME)
#define SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::namespace_::QName : public jni::object_base<"javax/xml/namespace/QName",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::xml::namespace_::QName> new_object(jni::ref<java::lang::String> namespaceURI, jni::ref<java::lang::String> localPart) { return base_::new_object(namespaceURI, localPart); }
	static jni::ref<javax::xml::namespace_::QName> new_object(jni::ref<java::lang::String> namespaceURI, jni::ref<java::lang::String> localPart, jni::ref<java::lang::String> prefix) { return base_::new_object(namespaceURI, localPart, prefix); }
	static jni::ref<javax::xml::namespace_::QName> new_object(jni::ref<java::lang::String> localPart) { return base_::new_object(localPart); }
	jni::ref<java::lang::String> getNamespaceURI() { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLocalPart() { return call_method<"getLocalPart", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrefix() { return call_method<"getPrefix", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> objectToTest) { return call_method<"equals", jboolean>(objectToTest); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<javax::xml::namespace_::QName> valueOf(jni::ref<java::lang::String> qNameAsString) { return call_static_method<"valueOf", jni::ref<javax::xml::namespace_::QName>>(qNameAsString); }

protected:

	QName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_NAMESPACE_QNAME
