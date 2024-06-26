// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class TableColumnModelEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::TableColumnModelEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/TableColumnModelEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/table/TableColumnModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::TableColumnModelEvent : public jni::object_base<"javax/swing/event/TableColumnModelEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::swing::event::TableColumnModelEvent> new_object(jni::ref<javax::swing::table::TableColumnModel> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jint getFromIndex() { return call_method<"getFromIndex", jint>(); }
	jint getToIndex() { return call_method<"getToIndex", jint>(); }

protected:

	TableColumnModelEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLECOLUMNMODELEVENT
