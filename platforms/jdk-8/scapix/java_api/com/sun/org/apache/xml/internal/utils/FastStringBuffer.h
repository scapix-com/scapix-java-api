// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class FastStringBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::FastStringBuffer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/FastStringBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::FastStringBuffer : public jni::object_base<"com/sun/org/apache/xml/internal/utils/FastStringBuffer",
	java::lang::Object>
{
public:

	static jint SUPPRESS_LEADING_WS() { return get_static_field<"SUPPRESS_LEADING_WS", jint>(); }
	static jint SUPPRESS_TRAILING_WS() { return get_static_field<"SUPPRESS_TRAILING_WS", jint>(); }
	static jint SUPPRESS_BOTH() { return get_static_field<"SUPPRESS_BOTH", jint>(); }

	static jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> new_object() { return base_::new_object(); }
	jint size() { return call_method<"size", jint>(); }
	jint length() { return call_method<"length", jint>(); }
	void reset() { return call_method<"reset", void>(); }
	void setLength(jint p1) { return call_method<"setLength", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void append(jchar p1) { return call_method<"append", void>(p1); }
	void append(jni::ref<java::lang::String> p1) { return call_method<"append", void>(p1); }
	void append(jni::ref<java::lang::StringBuffer> p1) { return call_method<"append", void>(p1); }
	void append(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"append", void>(p1, p2, p3); }
	void append(jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> p1) { return call_method<"append", void>(p1); }
	jboolean isWhitespace(jint p1, jint p2) { return call_method<"isWhitespace", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getString(jint p1, jint p2) { return call_method<"getString", jni::ref<java::lang::String>>(p1, p2); }
	jchar charAt(jint p1) { return call_method<"charAt", jchar>(p1); }
	void sendSAXcharacters(jni::ref<org::xml::sax::ContentHandler> p1, jint p2, jint p3) { return call_method<"sendSAXcharacters", void>(p1, p2, p3); }
	jint sendNormalizedSAXcharacters(jni::ref<org::xml::sax::ContentHandler> p1, jint p2, jint p3) { return call_method<"sendNormalizedSAXcharacters", jint>(p1, p2, p3); }
	static void sendNormalizedSAXcharacters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jni::ref<org::xml::sax::ContentHandler> p4) { return call_static_method<"sendNormalizedSAXcharacters", void>(p1, p2, p3, p4); }
	void sendSAXComment(jni::ref<org::xml::sax::ext::LexicalHandler> p1, jint p2, jint p3) { return call_method<"sendSAXComment", void>(p1, p2, p3); }

protected:

	FastStringBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_FASTSTRINGBUFFER
