// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/undo/AbstractUndoableEdit.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultStyledDocument_AttributeUndoableEdit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultStyledDocument_AttributeUndoableEdit>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit";
	using base_classes = std::tuple<scapix::java_api::javax::swing::undo::AbstractUndoableEdit>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::DefaultStyledDocument_AttributeUndoableEdit : public jni::object_base<"javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit",
	javax::swing::undo::AbstractUndoableEdit>
{
public:

	static jni::ref<javax::swing::text::DefaultStyledDocument_AttributeUndoableEdit> new_object(jni::ref<javax::swing::text::Element> p1, jni::ref<javax::swing::text::AttributeSet> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	void redo() { return call_method<"redo", void>(); }
	void undo() { return call_method<"undo", void>(); }

protected:

	DefaultStyledDocument_AttributeUndoableEdit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_ATTRIBUTEUNDOABLEEDIT