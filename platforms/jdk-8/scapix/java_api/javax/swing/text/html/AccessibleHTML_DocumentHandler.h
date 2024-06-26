// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/DocumentListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class AccessibleHTML_DocumentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::AccessibleHTML_DocumentHandler>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/AccessibleHTML$DocumentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::DocumentListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/DocumentEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::AccessibleHTML_DocumentHandler : public jni::object_base<"javax/swing/text/html/AccessibleHTML$DocumentHandler",
	java::lang::Object,
	javax::swing::event::DocumentListener>
{
public:

	void insertUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"insertUpdate", void>(p1); }
	void removeUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"removeUpdate", void>(p1); }
	void changedUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"changedUpdate", void>(p1); }

protected:

	AccessibleHTML_DocumentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_DOCUMENTHANDLER
