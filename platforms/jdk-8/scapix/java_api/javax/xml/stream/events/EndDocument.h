// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/stream/events/XMLEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::stream::events { class EndDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::stream::events::EndDocument>
{
	static constexpr fixed_string class_name = "javax/xml/stream/events/EndDocument";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::stream::events::XMLEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT)
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::stream::events::EndDocument : public jni::object_base<"javax/xml/stream/events/EndDocument",
	java::lang::Object,
	javax::xml::stream::events::XMLEvent>
{
public:


protected:

	EndDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_ENDDOCUMENT