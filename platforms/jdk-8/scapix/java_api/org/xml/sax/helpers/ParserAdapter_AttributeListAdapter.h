// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::helpers { class ParserAdapter_AttributeListAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::helpers::ParserAdapter_AttributeListAdapter>
{
	static constexpr fixed_string class_name = "org/xml/sax/helpers/ParserAdapter$AttributeListAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::Attributes>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER)
#define SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class org::xml::sax::helpers::ParserAdapter_AttributeListAdapter : public jni::object_base<"org/xml/sax/helpers/ParserAdapter$AttributeListAdapter",
	java::lang::Object,
	org::xml::sax::Attributes>
{
public:

	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::String> getURI(jint p1) { return call_method<"getURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getLocalName(jint p1) { return call_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getQName(jint p1) { return call_method<"getQName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getType(jint p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jint p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }
	jint getIndex(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getIndex", jint>(p1, p2); }
	jint getIndex(jni::ref<java::lang::String> p1) { return call_method<"getIndex", jint>(p1); }
	jni::ref<java::lang::String> getType(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getType", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getType(jni::ref<java::lang::String> p1) { return call_method<"getType", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getValue", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::String>>(p1); }

protected:

	ParserAdapter_AttributeListAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_HELPERS_PARSERADAPTER_ATTRIBUTELISTADAPTER
