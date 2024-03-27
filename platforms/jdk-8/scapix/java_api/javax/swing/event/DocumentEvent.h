// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class DocumentEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::DocumentEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/DocumentEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/DocumentEvent_ElementChange.h>
#include <scapix/java_api/javax/swing/event/DocumentEvent_EventType.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::DocumentEvent : public jni::object_base<"javax/swing/event/DocumentEvent",
	java::lang::Object>
{
public:

	using EventType = DocumentEvent_EventType;
	using ElementChange = DocumentEvent_ElementChange;

	jint getOffset() { return call_method<"getOffset", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<javax::swing::text::Document> getDocument() { return call_method<"getDocument", jni::ref<javax::swing::text::Document>>(); }
	jni::ref<javax::swing::event::DocumentEvent_EventType> getType() { return call_method<"getType", jni::ref<javax::swing::event::DocumentEvent_EventType>>(); }
	jni::ref<javax::swing::event::DocumentEvent_ElementChange> getChange(jni::ref<javax::swing::text::Element> p1) { return call_method<"getChange", jni::ref<javax::swing::event::DocumentEvent_ElementChange>>(p1); }

protected:

	DocumentEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_DOCUMENTEVENT