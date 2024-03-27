// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DOMInputImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMInputImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DOMInputImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::ls::LSInput>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DOMInputImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DOMInputImpl",
	java::lang::Object,
	org::w3c::dom::ls::LSInput>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMInputImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMInputImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMInputImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::io::InputStream> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMInputImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::io::Reader> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMInputImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::io::InputStream> getByteStream() { return call_method<"getByteStream", jni::ref<java::io::InputStream>>(); }
	void setByteStream(jni::ref<java::io::InputStream> p1) { return call_method<"setByteStream", void>(p1); }
	jni::ref<java::io::Reader> getCharacterStream() { return call_method<"getCharacterStream", jni::ref<java::io::Reader>>(); }
	void setCharacterStream(jni::ref<java::io::Reader> p1) { return call_method<"setCharacterStream", void>(p1); }
	jni::ref<java::lang::String> getStringData() { return call_method<"getStringData", jni::ref<java::lang::String>>(); }
	void setStringData(jni::ref<java::lang::String> p1) { return call_method<"setStringData", void>(p1); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	void setEncoding(jni::ref<java::lang::String> p1) { return call_method<"setEncoding", void>(p1); }
	jni::ref<java::lang::String> getPublicId() { return call_method<"getPublicId", jni::ref<java::lang::String>>(); }
	void setPublicId(jni::ref<java::lang::String> p1) { return call_method<"setPublicId", void>(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }
	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<java::lang::String> getBaseURI() { return call_method<"getBaseURI", jni::ref<java::lang::String>>(); }
	void setBaseURI(jni::ref<java::lang::String> p1) { return call_method<"setBaseURI", void>(p1); }
	jboolean getCertifiedText() { return call_method<"getCertifiedText", jboolean>(); }
	void setCertifiedText(jboolean p1) { return call_method<"setCertifiedText", void>(p1); }

protected:

	DOMInputImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMINPUTIMPL
