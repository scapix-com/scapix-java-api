// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/SimpleAttributeSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class StyleSheet_LargeConversionSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::StyleSheet_LargeConversionSet>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/StyleSheet$LargeConversionSet";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::SimpleAttributeSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/html/StyleSheet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::StyleSheet_LargeConversionSet : public jni::object_base<"javax/swing/text/html/StyleSheet$LargeConversionSet",
	javax::swing::text::SimpleAttributeSet>
{
public:

	static jni::ref<javax::swing::text::html::StyleSheet_LargeConversionSet> new_object(jni::ref<javax::swing::text::html::StyleSheet> p1, jni::ref<javax::swing::text::AttributeSet> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::text::html::StyleSheet_LargeConversionSet> new_object(jni::ref<javax::swing::text::html::StyleSheet> p1) { return base_::new_object(p1); }
	jboolean isDefined(jni::ref<java::lang::Object> p1) { return call_method<"isDefined", jboolean>(p1); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::Object> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }

protected:

	StyleSheet_LargeConversionSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_LARGECONVERSIONSET