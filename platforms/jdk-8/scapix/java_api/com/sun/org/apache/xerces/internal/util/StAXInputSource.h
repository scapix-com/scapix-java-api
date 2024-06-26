// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class StAXInputSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::StAXInputSource>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/StAXInputSource";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/stream/XMLEventReader.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::StAXInputSource : public jni::object_base<"com/sun/org/apache/xerces/internal/util/StAXInputSource",
	com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::StAXInputSource> new_object(jni::ref<javax::xml::stream::XMLStreamReader> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::StAXInputSource> new_object(jni::ref<javax::xml::stream::XMLStreamReader> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::StAXInputSource> new_object(jni::ref<javax::xml::stream::XMLEventReader> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::StAXInputSource> new_object(jni::ref<javax::xml::stream::XMLEventReader> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::xml::stream::XMLStreamReader> getXMLStreamReader() { return call_method<"getXMLStreamReader", jni::ref<javax::xml::stream::XMLStreamReader>>(); }
	jni::ref<javax::xml::stream::XMLEventReader> getXMLEventReader() { return call_method<"getXMLEventReader", jni::ref<javax::xml::stream::XMLEventReader>>(); }
	jboolean shouldConsumeRemainingContent() { return call_method<"shouldConsumeRemainingContent", jboolean>(); }
	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }

protected:

	StAXInputSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_STAXINPUTSOURCE
