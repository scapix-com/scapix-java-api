// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit_HTMLFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit_HTMLFactory>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit$HTMLFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::ViewFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLEditorKit_HTMLFactory : public jni::object_base<"javax/swing/text/html/HTMLEditorKit$HTMLFactory",
	java::lang::Object,
	javax::swing::text::ViewFactory>
{
public:

	static jni::ref<javax::swing::text::html::HTMLEditorKit_HTMLFactory> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::text::View> create(jni::ref<javax::swing::text::Element> p1) { return call_method<"create", jni::ref<javax::swing::text::View>>(p1); }

protected:

	HTMLEditorKit_HTMLFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_HTMLFACTORY
