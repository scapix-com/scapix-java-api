// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class StyleSheet_SelectorMapping; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::StyleSheet_SelectorMapping>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/StyleSheet$SelectorMapping";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/Style.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::StyleSheet_SelectorMapping : public jni::object_base<"javax/swing/text/html/StyleSheet$SelectorMapping",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::html::StyleSheet_SelectorMapping> new_object(jint p1) { return base_::new_object(p1); }
	jint getSpecificity() { return call_method<"getSpecificity", jint>(); }
	void setStyle(jni::ref<javax::swing::text::Style> p1) { return call_method<"setStyle", void>(p1); }
	jni::ref<javax::swing::text::Style> getStyle() { return call_method<"getStyle", jni::ref<javax::swing::text::Style>>(); }
	jni::ref<javax::swing::text::html::StyleSheet_SelectorMapping> getChildSelectorMapping(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getChildSelectorMapping", jni::ref<javax::swing::text::html::StyleSheet_SelectorMapping>>(p1, p2); }

protected:

	StyleSheet_SelectorMapping(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SELECTORMAPPING
