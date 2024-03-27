// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax::ext { class EntityResolver2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::ext::EntityResolver2>
{
	static constexpr fixed_string class_name = "org/xml/sax/ext/EntityResolver2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::EntityResolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2)
#define SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::ext::EntityResolver2 : public jni::object_base<"org/xml/sax/ext/EntityResolver2",
	java::lang::Object,
	org::xml::sax::EntityResolver>
{
public:

	jni::ref<org::xml::sax::InputSource> getExternalSubset(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getExternalSubset", jni::ref<org::xml::sax::InputSource>>(p1, p2); }
	jni::ref<org::xml::sax::InputSource> resolveEntity(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"resolveEntity", jni::ref<org::xml::sax::InputSource>>(p1, p2, p3, p4); }

protected:

	EntityResolver2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_EXT_ENTITYRESOLVER2
