// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseAdapter.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit_LinkController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit_LinkController>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit$LinkController";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseAdapter, scapix::java_api::java::awt::event::MouseMotionListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLEditorKit_LinkController : public jni::object_base<"javax/swing/text/html/HTMLEditorKit$LinkController",
	java::awt::event::MouseAdapter,
	java::awt::event::MouseMotionListener,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::html::HTMLEditorKit_LinkController> new_object() { return base_::new_object(); }
	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }

protected:

	HTMLEditorKit_LinkController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_LINKCONTROLLER
