// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER_FWD
#define SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xmlpull::v1 { class XmlSerializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xmlpull::v1::XmlSerializer>
{
	static constexpr fixed_string class_name = "org/xmlpull/v1/XmlSerializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER)
#define SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xmlpull::v1::XmlSerializer : public jni::object_base<"org/xmlpull/v1/XmlSerializer",
	java::lang::Object>
{
public:

	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	jboolean getFeature(jni::ref<java::lang::String> p1) { return call_method<"getFeature", jboolean>(p1); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }
	void setOutput(jni::ref<java::io::OutputStream> p1, jni::ref<java::lang::String> p2) { return call_method<"setOutput", void>(p1, p2); }
	void setOutput(jni::ref<java::io::Writer> p1) { return call_method<"setOutput", void>(p1); }
	void startDocument(jni::ref<java::lang::String> p1, jni::ref<java::lang::Boolean> p2) { return call_method<"startDocument", void>(p1, p2); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void setPrefix(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setPrefix", void>(p1, p2); }
	jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1, p2); }
	jint getDepth() { return call_method<"getDepth", jint>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<org::xmlpull::v1::XmlSerializer> startTag(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"startTag", jni::ref<org::xmlpull::v1::XmlSerializer>>(p1, p2); }
	jni::ref<org::xmlpull::v1::XmlSerializer> attribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"attribute", jni::ref<org::xmlpull::v1::XmlSerializer>>(p1, p2, p3); }
	jni::ref<org::xmlpull::v1::XmlSerializer> endTag(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"endTag", jni::ref<org::xmlpull::v1::XmlSerializer>>(p1, p2); }
	jni::ref<org::xmlpull::v1::XmlSerializer> text(jni::ref<java::lang::String> p1) { return call_method<"text", jni::ref<org::xmlpull::v1::XmlSerializer>>(p1); }
	jni::ref<org::xmlpull::v1::XmlSerializer> text(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"text", jni::ref<org::xmlpull::v1::XmlSerializer>>(p1, p2, p3); }
	void cdsect(jni::ref<java::lang::String> p1) { return call_method<"cdsect", void>(p1); }
	void entityRef(jni::ref<java::lang::String> p1) { return call_method<"entityRef", void>(p1); }
	void processingInstruction(jni::ref<java::lang::String> p1) { return call_method<"processingInstruction", void>(p1); }
	void comment(jni::ref<java::lang::String> p1) { return call_method<"comment", void>(p1); }
	void docdecl(jni::ref<java::lang::String> p1) { return call_method<"docdecl", void>(p1); }
	void ignorableWhitespace(jni::ref<java::lang::String> p1) { return call_method<"ignorableWhitespace", void>(p1); }
	void flush() { return call_method<"flush", void>(); }

protected:

	XmlSerializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XMLPULL_V1_XMLSERIALIZER
