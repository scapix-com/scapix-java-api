// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class AccessibleHTML_ElementInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::AccessibleHTML_ElementInfo>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/AccessibleHTML$ElementInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::AccessibleHTML_ElementInfo : public jni::object_base<"javax/swing/text/html/AccessibleHTML$ElementInfo",
	java::lang::Object>
{
public:

	jint getIndexInParent() { return call_method<"getIndexInParent", jint>(); }
	jni::ref<javax::swing::text::Element> getElement() { return call_method<"getElement", jni::ref<javax::swing::text::Element>>(); }
	jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo> getParent() { return call_method<"getParent", jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo>>(); }
	jint indexOf(jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo> p1) { return call_method<"indexOf", jint>(p1); }
	jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo> getChild(jint p1) { return call_method<"getChild", jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo>>(p1); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }

protected:

	AccessibleHTML_ElementInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_ELEMENTINFO
