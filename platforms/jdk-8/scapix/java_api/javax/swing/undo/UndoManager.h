// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/undo/CompoundEdit.h>
#include <scapix/java_api/javax/swing/event/UndoableEditListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::undo { class UndoManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::undo::UndoManager>
{
	static constexpr fixed_string class_name = "javax/swing/undo/UndoManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::undo::CompoundEdit, scapix::java_api::javax::swing::event::UndoableEditListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/event/UndoableEditEvent.h>
#include <scapix/java_api/javax/swing/undo/UndoableEdit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::undo::UndoManager : public jni::object_base<"javax/swing/undo/UndoManager",
	javax::swing::undo::CompoundEdit,
	javax::swing::event::UndoableEditListener>
{
public:

	static jni::ref<javax::swing::undo::UndoManager> new_object() { return base_::new_object(); }
	jint getLimit() { return call_method<"getLimit", jint>(); }
	void discardAllEdits() { return call_method<"discardAllEdits", void>(); }
	void setLimit(jint p1) { return call_method<"setLimit", void>(p1); }
	void undoOrRedo() { return call_method<"undoOrRedo", void>(); }
	jboolean canUndoOrRedo() { return call_method<"canUndoOrRedo", jboolean>(); }
	void undo() { return call_method<"undo", void>(); }
	jboolean canUndo() { return call_method<"canUndo", jboolean>(); }
	void redo() { return call_method<"redo", void>(); }
	jboolean canRedo() { return call_method<"canRedo", jboolean>(); }
	jboolean addEdit(jni::ref<javax::swing::undo::UndoableEdit> p1) { return call_method<"addEdit", jboolean>(p1); }
	void end() { return call_method<"end", void>(); }
	jni::ref<java::lang::String> getUndoOrRedoPresentationName() { return call_method<"getUndoOrRedoPresentationName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUndoPresentationName() { return call_method<"getUndoPresentationName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getRedoPresentationName() { return call_method<"getRedoPresentationName", jni::ref<java::lang::String>>(); }
	void undoableEditHappened(jni::ref<javax::swing::event::UndoableEditEvent> p1) { return call_method<"undoableEditHappened", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	UndoManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_UNDOMANAGER
