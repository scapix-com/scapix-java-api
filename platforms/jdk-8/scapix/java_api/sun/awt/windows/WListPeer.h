// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WComponentPeer.h>
#include <scapix/java_api/java/awt/peer/ListPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WListPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WListPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WListPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WComponentPeer, scapix::java_api::java::awt::peer::ListPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WListPeer : public jni::object_base<"sun/awt/windows/WListPeer",
	sun::awt::windows::WComponentPeer,
	java::awt::peer::ListPeer>
{
public:

	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	jni::ref<jni::array<jint>> getSelectedIndexes() { return call_method<"getSelectedIndexes", jni::ref<jni::array<jint>>>(); }
	void add(jni::ref<java::lang::String> p1, jint p2) { return call_method<"add", void>(p1, p2); }
	void removeAll() { return call_method<"removeAll", void>(); }
	void setMultipleMode(jboolean p1) { return call_method<"setMultipleMode", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jint p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jint p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	void addItem(jni::ref<java::lang::String> p1, jint p2) { return call_method<"addItem", void>(p1, p2); }
	void delItems(jint p1, jint p2) { return call_method<"delItems", void>(p1, p2); }
	void clear() { return call_method<"clear", void>(); }
	void select(jint p1) { return call_method<"select", void>(p1); }
	void deselect(jint p1) { return call_method<"deselect", void>(p1); }
	void makeVisible(jint p1) { return call_method<"makeVisible", void>(p1); }
	void setMultipleSelections(jboolean p1) { return call_method<"setMultipleSelections", void>(p1); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	jni::ref<java::awt::Dimension> preferredSize(jint p1) { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumSize(jint p1) { return call_method<"minimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jboolean shouldClearRectBeforePaint() { return call_method<"shouldClearRectBeforePaint", jboolean>(); }

protected:

	WListPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WLISTPEER
