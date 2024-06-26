// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/undo/AbstractUndoableEdit.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class GapContent_InsertUndo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::GapContent_InsertUndo>
{
	static constexpr fixed_string class_name = "javax/swing/text/GapContent$InsertUndo";
	using base_classes = std::tuple<scapix::java_api::javax::swing::undo::AbstractUndoableEdit>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::GapContent_InsertUndo : public jni::object_base<"javax/swing/text/GapContent$InsertUndo",
	javax::swing::undo::AbstractUndoableEdit>
{
public:

	void undo() { return call_method<"undo", void>(); }
	void redo() { return call_method<"redo", void>(); }

protected:

	GapContent_InsertUndo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPCONTENT_INSERTUNDO
