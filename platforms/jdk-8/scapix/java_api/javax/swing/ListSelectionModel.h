// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ListSelectionModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ListSelectionModel>
{
	static constexpr fixed_string class_name = "javax/swing/ListSelectionModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ListSelectionListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::ListSelectionModel : public jni::object_base<"javax/swing/ListSelectionModel",
	java::lang::Object>
{
public:

	static jint SINGLE_SELECTION() { return get_static_field<"SINGLE_SELECTION", jint>(); }
	static jint SINGLE_INTERVAL_SELECTION() { return get_static_field<"SINGLE_INTERVAL_SELECTION", jint>(); }
	static jint MULTIPLE_INTERVAL_SELECTION() { return get_static_field<"MULTIPLE_INTERVAL_SELECTION", jint>(); }

	void setSelectionInterval(jint p1, jint p2) { return call_method<"setSelectionInterval", void>(p1, p2); }
	void addSelectionInterval(jint p1, jint p2) { return call_method<"addSelectionInterval", void>(p1, p2); }
	void removeSelectionInterval(jint p1, jint p2) { return call_method<"removeSelectionInterval", void>(p1, p2); }
	jint getMinSelectionIndex() { return call_method<"getMinSelectionIndex", jint>(); }
	jint getMaxSelectionIndex() { return call_method<"getMaxSelectionIndex", jint>(); }
	jboolean isSelectedIndex(jint p1) { return call_method<"isSelectedIndex", jboolean>(p1); }
	jint getAnchorSelectionIndex() { return call_method<"getAnchorSelectionIndex", jint>(); }
	void setAnchorSelectionIndex(jint p1) { return call_method<"setAnchorSelectionIndex", void>(p1); }
	jint getLeadSelectionIndex() { return call_method<"getLeadSelectionIndex", jint>(); }
	void setLeadSelectionIndex(jint p1) { return call_method<"setLeadSelectionIndex", void>(p1); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	jboolean isSelectionEmpty() { return call_method<"isSelectionEmpty", jboolean>(); }
	void insertIndexInterval(jint p1, jint p2, jboolean p3) { return call_method<"insertIndexInterval", void>(p1, p2, p3); }
	void removeIndexInterval(jint p1, jint p2) { return call_method<"removeIndexInterval", void>(p1, p2); }
	void setValueIsAdjusting(jboolean p1) { return call_method<"setValueIsAdjusting", void>(p1); }
	jboolean getValueIsAdjusting() { return call_method<"getValueIsAdjusting", jboolean>(); }
	void setSelectionMode(jint p1) { return call_method<"setSelectionMode", void>(p1); }
	jint getSelectionMode() { return call_method<"getSelectionMode", jint>(); }
	void addListSelectionListener(jni::ref<javax::swing::event::ListSelectionListener> p1) { return call_method<"addListSelectionListener", void>(p1); }
	void removeListSelectionListener(jni::ref<javax::swing::event::ListSelectionListener> p1) { return call_method<"removeListSelectionListener", void>(p1); }

protected:

	ListSelectionModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_LISTSELECTIONMODEL
