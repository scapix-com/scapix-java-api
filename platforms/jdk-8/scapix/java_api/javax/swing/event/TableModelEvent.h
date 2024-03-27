// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class TableModelEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::TableModelEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/TableModelEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/table/TableModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::TableModelEvent : public jni::object_base<"javax/swing/event/TableModelEvent",
	java::util::EventObject>
{
public:

	static jint INSERT() { return get_static_field<"INSERT", jint>(); }
	static jint UPDATE() { return get_static_field<"UPDATE", jint>(); }
	static jint DELETE() { return get_static_field<"DELETE", jint>(); }
	static jint HEADER_ROW() { return get_static_field<"HEADER_ROW", jint>(); }
	static jint ALL_COLUMNS() { return get_static_field<"ALL_COLUMNS", jint>(); }

	static jni::ref<javax::swing::event::TableModelEvent> new_object(jni::ref<javax::swing::table::TableModel> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::event::TableModelEvent> new_object(jni::ref<javax::swing::table::TableModel> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::event::TableModelEvent> new_object(jni::ref<javax::swing::table::TableModel> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::event::TableModelEvent> new_object(jni::ref<javax::swing::table::TableModel> p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::swing::event::TableModelEvent> new_object(jni::ref<javax::swing::table::TableModel> p1, jint p2, jint p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jint getFirstRow() { return call_method<"getFirstRow", jint>(); }
	jint getLastRow() { return call_method<"getLastRow", jint>(); }
	jint getColumn() { return call_method<"getColumn", jint>(); }
	jint getType() { return call_method<"getType", jint>(); }

protected:

	TableModelEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_TABLEMODELEVENT