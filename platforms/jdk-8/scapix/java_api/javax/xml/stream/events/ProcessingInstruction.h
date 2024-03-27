// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/stream/events/XMLEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::stream::events { class ProcessingInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::stream::events::ProcessingInstruction>
{
	static constexpr fixed_string class_name = "javax/xml/stream/events/ProcessingInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::stream::events::XMLEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION)
#define SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::stream::events::ProcessingInstruction : public jni::object_base<"javax/xml/stream/events/ProcessingInstruction",
	java::lang::Object,
	javax::xml::stream::events::XMLEvent>
{
public:

	jni::ref<java::lang::String> getTarget() { return call_method<"getTarget", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }

protected:

	ProcessingInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_STREAM_EVENTS_PROCESSINGINSTRUCTION