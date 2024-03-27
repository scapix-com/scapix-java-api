// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::undo { class UndoableEditSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::undo::UndoableEditSupport>
{
	static constexpr fixed_string class_name = "javax/swing/undo/UndoableEditSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT)
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/event/UndoableEditListener.h>
#include <scapix/java_api/javax/swing/undo/UndoableEdit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::undo::UndoableEditSupport : public jni::object_base<"javax/swing/undo/UndoableEditSupport",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::undo::UndoableEditSupport> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::undo::UndoableEditSupport> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	void addUndoableEditListener(jni::ref<javax::swing::event::UndoableEditListener> p1) { return call_method<"addUndoableEditListener", void>(p1); }
	void removeUndoableEditListener(jni::ref<javax::swing::event::UndoableEditListener> p1) { return call_method<"removeUndoableEditListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::UndoableEditListener>> getUndoableEditListeners() { return call_method<"getUndoableEditListeners", jni::ref<jni::array<javax::swing::event::UndoableEditListener>>>(); }
	void postEdit(jni::ref<javax::swing::undo::UndoableEdit> p1) { return call_method<"postEdit", void>(p1); }
	jint getUpdateLevel() { return call_method<"getUpdateLevel", jint>(); }
	void beginUpdate() { return call_method<"beginUpdate", void>(); }
	void endUpdate() { return call_method<"endUpdate", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	UndoableEditSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOABLEEDITSUPPORT
