// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/JTextComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTextArea; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTextArea>
{
	static constexpr fixed_string class_name = "javax/swing/JTextArea";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::JTextComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTextArea : public jni::object_base<"javax/swing/JTextArea",
	javax::swing::text::JTextComponent>
{
public:

	static jni::ref<javax::swing::JTextArea> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JTextArea> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTextArea> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JTextArea> new_object(jni::ref<java::lang::String> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::JTextArea> new_object(jni::ref<javax::swing::text::Document> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTextArea> new_object(jni::ref<javax::swing::text::Document> p1, jni::ref<java::lang::String> p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void setTabSize(jint p1) { return call_method<"setTabSize", void>(p1); }
	jint getTabSize() { return call_method<"getTabSize", jint>(); }
	void setLineWrap(jboolean p1) { return call_method<"setLineWrap", void>(p1); }
	jboolean getLineWrap() { return call_method<"getLineWrap", jboolean>(); }
	void setWrapStyleWord(jboolean p1) { return call_method<"setWrapStyleWord", void>(p1); }
	jboolean getWrapStyleWord() { return call_method<"getWrapStyleWord", jboolean>(); }
	jint getLineOfOffset(jint p1) { return call_method<"getLineOfOffset", jint>(p1); }
	jint getLineCount() { return call_method<"getLineCount", jint>(); }
	jint getLineStartOffset(jint p1) { return call_method<"getLineStartOffset", jint>(p1); }
	jint getLineEndOffset(jint p1) { return call_method<"getLineEndOffset", jint>(p1); }
	void insert(jni::ref<java::lang::String> p1, jint p2) { return call_method<"insert", void>(p1, p2); }
	void append(jni::ref<java::lang::String> p1) { return call_method<"append", void>(p1); }
	void replaceRange(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"replaceRange", void>(p1, p2, p3); }
	jint getRows() { return call_method<"getRows", jint>(); }
	void setRows(jint p1) { return call_method<"setRows", void>(p1); }
	jint getColumns() { return call_method<"getColumns", jint>(); }
	void setColumns(jint p1) { return call_method<"setColumns", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	jboolean getScrollableTracksViewportWidth() { return call_method<"getScrollableTracksViewportWidth", jboolean>(); }
	jni::ref<java::awt::Dimension> getPreferredScrollableViewportSize() { return call_method<"getPreferredScrollableViewportSize", jni::ref<java::awt::Dimension>>(); }
	jint getScrollableUnitIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableUnitIncrement", jint>(p1, p2, p3); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JTextArea(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA
