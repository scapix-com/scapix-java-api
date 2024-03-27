// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/ComponentView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class EditableView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::EditableView>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/EditableView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::ComponentView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::EditableView : public jni::object_base<"javax/swing/text/html/EditableView",
	javax::swing::text::ComponentView>
{
public:

	jfloat getMinimumSpan(jint p1) { return call_method<"getMinimumSpan", jfloat>(p1); }
	jfloat getPreferredSpan(jint p1) { return call_method<"getPreferredSpan", jfloat>(p1); }
	jfloat getMaximumSpan(jint p1) { return call_method<"getMaximumSpan", jfloat>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Shape> p2) { return call_method<"paint", void>(p1, p2); }
	void setParent(jni::ref<javax::swing::text::View> p1) { return call_method<"setParent", void>(p1); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }

protected:

	EditableView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_EDITABLEVIEW
